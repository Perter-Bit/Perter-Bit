#include<iostream>
#include<fstream>
using namespace std;
#define even.txt file_name
//int* alloc_and_init(string file_name)
//{
//	ifstream ifs(file_name.c_str());
//	if (!ifs)//����ļ���ʧ��
//	{
//		return 0;
//	}
//	int elem_cnt;
//	ifs >> elem_cnt;
//	if (!elem_cnt)//�ļ����ݶ�ȡʧ��
//	{
//		return 0;
//	}
//	try
//	{
//		int* p1 = allocate_array(elem_cnt);
//		int elem;
//		int index = 0;
//		while (ifs >> elem && index < elem_cnt)
//		{
//			p1[index++] = elem;
//		}//��������г�ʼ����ֵ����
//		sort_array(p1, elem_cnt);
//		register_data(p1);
//	}
//	catch (const noMem& memFail)
//	{
//		cerr << "alloc_and_init():allocate_array failture!\n" << memFail.what() << endl;
//		return 0;
//	}
//	catch (int &sortFail)
//	{
//		cerr << "alloc_and_init():sort_array failture!\n" << "thrown integer value:"<<sortFail << endl;
//		return 0;
//	}
//	catch (const string &registerFail)
//	{
//		cerr << "alloc_and_init():register_data failture!\n" << "thrown string value:"<<registerFail<< endl;
//		return 0;
//	}
//	return p1;//���û���κ��쳣���׳�,�ͻ�ִ�е�����....
//}
void pop(elemType& elem)
{
	if (empty())//���Ϊ��,�׳��쳣
	{
		throw PopOnEmpty();
		elem = _stack[--_top];
		_stack.pop_back();
	}
}
void push(const elemType& elem)
{
	if (!full())
	{
		_stack.push_back(elem);
		++_top;
		return;
	}
	throw PushOnFull();
}
class StackException : public logic_error//logic_error�̳���exception
{
public:
	StackException(const char* what) : what(what) {};
	const char* what() const { return _what.c_str(); };
protcted:
	string _what;
};
class PopOnEmpty : public StackException
{
public:
	PopOnEmpty() : StackException("Pop on Empty Stack") {};
};
class PushOnFull : public StackException
{
public:
	PushOnFull() : StackException("Push on Full Stack") {};
};
catch(const PushOnFull& pof)
{
	log(pof.what());
	return;
}
catch()