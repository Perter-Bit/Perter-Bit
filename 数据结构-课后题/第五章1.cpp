#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef string elemType;
class Stack//�������
{
public:
	virtual ~Stack() {};
	virtual bool pop(elemType&) = 0;//��ջ����
	virtual bool push(const elemType&) = 0;//��ջ����
	virtual bool peek(int index, elemType&) = 0;
	virtual int top() const = 0;
	virtual int size() const = 0;
	virtual bool empty() const = 0;//�ж��Ƿ�Ϊ��
	virtual bool full() const = 0;//�ж��Ƿ�����
	virtual void print(ostream & = cout)const = 0;
};
ostream& operator<<(ostream& os, const Stack& rhs)//����=�����
{
	rhs.print();
	return os;
}
class LIFO_Stack : public Stack//������
{
public:
	LIFO_Stack(int capacity = 0) : _top(0)
	{
		if (capacity)//�����������С��Ϊ0
		{
			_stack.reserve(capacity);//Ԥ���ռ�
		}
	}
	int size() const
	{
		return _stack.size();
	}
	bool empty() const
	{
		return !_top;
	}
	bool full() const
	{
		return size() > _stack.max_size();
	}
	int top() const { return _top; };
	void print(ostream& os = cout) const;
	bool pop(elemType&);//��ջ����
	bool push(const elemType&);//��ջ����
	bool peek(int index, elemType&);

private:
	vector<elemType> _stack;//���Ԫ�ص�����
	int _top;//topָ��
};
//����ʵ��
//��ջ
bool LIFO_Stack::pop(elemType& elem)
{
	//�ж��Ƿ�Ϊ��
	if (empty())
	{
		return false;
	}
	elem = _stack[--_top];
	_stack.pop_back();//�����ʱ��top��ָ���λ��Ԫ��Ϊ�գ�
	return true;
}
//��ջ
bool LIFO_Stack::push(const elemType& elem)
{
	//�ж��Ƿ�����
	if (full())
	{
		return false;
	}
	_stack.push_back(elem);
	++_top;
	return true;
}
//�������
void LIFO_Stack::print(ostream& os)const//����Ĭ��ֵ������ǰָ�������˴���Ӧ�ظ�ָ��
{
	vector<elemType>::const_reverse_iterator rit = _stack.rbegin(), rend = _stack.rend();//�õ���������������ʽ��β����ǰ�˱�������vector
	os << "\n\t";
	while (rit != rend)
	{
		os << *rit++ << "\n\t";
	}
	os << endl;
}
bool LIFO_Stack::peek(int index, elemType& elem)//����index��ֵ�������λ�ô��ڣ��򷵻ظ�λ���ϵ�ֵ
{
	if (empty())
	{
		return false;
	}
	if (index < 0 || index >= size())
	{
		return false;
	}
	elem = _stack[index];
	return true;
}
void peek(Stack& st, int index)
{
	cout << endl;
	string t;
	if (st.peek(index, t))
	{
		cout << "peek: " << t;
	}
	else
	{
		cout << "peek failed";
	}
	cout << endl;
}
int main()
{
	LIFO_Stack st;
	LIFO_Stack s;
	string str;
	while (cin >> str && !st.full())//����str�Կո�ָ�
	{
		st.push(str);
		cout << '\n' << "About to call peek() with LIFO_Stack" << endl;
		//peek(st, st.top() - 1);
		cout << st;//���ջ��ֵ
		
		while (!st.empty())
		{
			string t;
			if (st.pop(t))
			{
				s.push(t);
				
			}
		}
	}
	cout << "About to call peek() with Peekback_Stack" << endl;
	peek(s,s.top() - 1);
	cout << s;
}