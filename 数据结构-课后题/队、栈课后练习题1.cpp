#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
//(1)�����Ϊ 0 �� 1 ������ջ�����һ������ռ� V[m]�У�ջ�׷ֱ�ǧ��������ˡ�����
//0 ��ջ��ջ��ָ�� top[O]���� - 1 ʱ��ջΪ�գ����� 1 ��ջ��ջ��ָ�� top[l]��ǧ m ʱ����ջΪ�ա�
//����ջ�����������м���������ͼ 3.17)���Ա�д˫ջ��ʼ�����ж�ջ�ա�ջ������ջ�ͳ�ջ����
//���ĺ�����
//typedef struct
//{
//	int top[2], bot[2];//��ʼ��ջ��ָ���ջ��ָ��
//	int* v;//���飬�������
//	int m;//��ŵ����ֵ
//
//}Snode, * LinkSnode;
////�ж�ջ��
//bool pandaun(LinkSnode& L)
//{
//	if (L->top[0] == -1 && L->top[1] == m)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
////�ж�ջ��
//bool zhanman(LinkSnode& L)
//{
//	if (L->top[1] - L->top[0] == 1 || L->top[0] > L->m - 1 || L->top[1] < 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
////��ջ
//int jinzhan(LinkSnode L, int e, int i)//eΪ��ջ������
//{
//	//�����ж��Ƿ�ջ��
//	if (zhanman(L))
//	{
//		cout << "��ջ�������޷�������ջ" << endl;
//		return 0;
//	}
//	else
//	{
//		if (i == 0)
//		{
//			//����ջ1
//			L->top[0]++;
//			L->v[L->top[0]] = e;
//			return 0;
//		}
//		else if (i == 1)
//		{
//			L->v[L->top[1]] = e;
//			L->top[1]--;
//			return 0;
//		}
//		else
//		{
//			cout << "���������������" << endl;
//		}
//	}
//}
////��ջ
//int chuzhan(LinkSnode &L, int &e, int i)//eΪ��ջ������
//{
//	if (i < 0 || i>1)
//	{
//		cout << "��������" << endl;
//
//	}
//	switch (i)
//	{
//	case 0:
//		if (L->top[0] == -1)
//		{
//			return 0;
//		}
//		else
//		{
//			e = L->v[L->top[0]];
//			L->top[0]--;
//			return 0;
//		}
//	case 1:
//		if (L->top[1] == L->m)
//		{
//			return 0;
//		}
//		else
//		{
//			L->top[1]++;
//			e = L->v[L->top[1]];
//			return 0;
//		}
//	}
//}
//��2��������ָ������������ͬ���ַ����У��硰abba���͡�abdba�����ǻ��ģ�����good�����ǻ��ġ���дһ���㷨�ж��������ַ������Ƿ�Ϊ���ġ�
//������ʾ���㷨�����Ϊ��
//typedef char DataType;
//#define maxsize 1000
//typedef struct {
//	DataType* top;
//	DataType* bottom;
//	int size;
//}SeqStack;
//void InitStack(SeqStack& s)
//{
//	s.top = new DataType(maxsize);
//	if (!s.top)
//	{
//		exit(OVERFLOW);
//	}
//	s.top = s.bottom;
//	s.size = maxsize;
//	return;
//}
//bool push(SeqStack& s, char e)
//{
//	//�ж��Ƿ�����
//	if (s.top - s.bottom == s.size)
//	{
//		return false;
//	}
//	else
//	{
//		*s.top++ = e;
//		return true;
//	}
//}
//char pop(SeqStack& s)
//{
//	//�ж��Ƿ�Ϊ��
//	if (s.top == s.bottom)
//	{
//		return 0;
//	}
//	else
//	{
//		return *--s.top;
//	}
//}
//int IsHuiwen(string t)
//{//�ж�t�ַ������Ƿ�Ϊ���ģ����ǣ�����1�����򷵻�0
//	SeqStack s;
//	int i, len;
//	//��ջ
//	for (int i = 0;i < len / 2;i++)
//	{
//		push(s, t[i]);
//		if (!push(s,t[i]))
//		{
//			break;
//		}
//	}
//	//��ջ���ж�
//	if (len % 2 == 0)
//	{
//		for (int i = len / 2;i < len;i++)
//		{
//			char e = pop(s);
//			if (t[i] = e)
//			{
//				continue;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//	if (len % 2 == 1)
//	{
//		for (int i = len / 2 + 1;i < len;i++)
//		{
//			char e = pop(s);
//			if (t[i] = e)
//			{
//				continue;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//(3) ��Ӽ�������һ���������У�a, , a2, a��.., an, �Ա�д�㷨ʵ�֣���ջ�ṹ�洢�������
//���� �� ad - I ʱ���� a;��ջ���� a; = -1 ʱ�����ջ����������ջ���㷨Ӧ���쳣�������ջ��
//�ȣ� ������Ӧ����Ϣ��
//#define maxsize 1000
//void InOutS(int s[maxsize],int n)
////s��Ԫ��Ϊ������ջ�����㷨������ջ����ջ������
//{
//    int top = 0;             //topΪջ��ָ�룬����top=0ʱΪջ�ա�
//    for (int i = 1; i <= n; i++)    //n����������������
//    {
//        cout << "������һ������" << endl;
//        int x = 0;
//        cin >> x;//�Ӽ��̶����������С�
//        if (x != -1)           // ���������������-1ʱ��ջ��
//            if (top == maxsize) { cout << "ջ��" << endl;exit(0); }
//            else s[top++] = x; //x��ջ��
//        else   //�������������-1ʱ��ջ��
//        {
//            if (top == 0) { cout << "ջ��" << endl;exit(0); }
//            else cout << "��ջԪ��Ϊ��" << s[--top] << endl;
//        }
//    }
//}//�㷨������
//(4)�Ӽ���������һ����׺���ʽ���Ա�д�㷨������ʽ��ֵ���涨���沨�����ʽ�ĳ�
//�Ȳ�����һ�У��� "$"��Ϊ���������������֮���ÿո�ָ���������ֻ�����У�����������������
//���㡣���磺 23434 + 2 * $��
//typedef struct Snode{
//	struct Snode* next;
//	int data;
//}Snode,*LinkSnode;
//void init(LinkSnode& L)
//{
//	L = new Snode;
//	return;
//}
//void push(Snode* &L, int e)
//{
//	Snode* s = new Snode;
//	s->data = e;
//	L = s->next;
//	L = s;
//}
//void pop(LinkSnode& L,int &e)
//{
//	if (L == NULL)
//	{
//		cout << "��Ǹջ���޷���ջ" << endl;
//	}
//	e = L->data;
//	LinkSnode s = L;
//	L = L->next;
//	delete s;
//}
//int in(char c)
//{
//	if (c == '+' || c == '-' || c == '*' || c == '/')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int operate(int a, char b, int c)
//{
//	switch (b)
//	{
//	case '+':
//		return a + c;
//	case '-':
//		return a - c;
//	case '*':
//		return a * c;
//	case '/':
//		return a / c;
//	}
//	return 0;
//}
//int gettop(LinkSnode& L)
//{
//	//�ж��Ƿ�Ϊ��
//	if (L == NULL)
//	{
//		return 0;
//	}
//	return L->data;
//}
//int bolan()
//{
//	char ch;
//	LinkSnode L;
//	init(L);
//	while(true)
//	{
//		cin >> ch;
//		if (ch != '!')
//		{
//			if (in(ch))//�ǲ�����
//			{
//				int a, c;
//				pop(L, a);
//				pop(L, c);
//				push(L, operate(a, ch, c));
//			}
//			else//�ǲ�����
//			{
//				push(L, stoi((const char*)ch));
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	//���ճ�ջ��
//	int x = gettop(L);
//	return x;
//}
//int main()
//{
//	int z = bolan();
//	cout << z << endl;
//	system("cls");
//	system("pause");
//	return 0;
//}
//��5��������I��O�ֱ��ʾ��ջ�ͳ�ջ������ջ�ĳ�̬����̬��Ϊ�գ���ջ�ͳ�ջ�Ĳ������пɱ�ʾΪ����I��O��ɵ����У��ƿ��Բ���������Ϊ�Ϸ����У������Ϊ�Ƿ����С�
//��������ʾ����������Щ�ǺϷ��ģ�
//A.IOIIOIOO     B.IOOIOIIO      C.IIIOIOIO     D.IIIOOIOO
//��ͨ���Ԣٵķ�����д��һ���㷨���ж������Ĳ��������Ƿ�Ϸ������Ϸ�������true�����򷵻�false���ٶ����ж��Ĳ��������Ѵ���һά�����У���
//#define Maxsize 100
//typedef struct Snode
//{
//	char data[Maxsize];
//	int top;
//}Snode,*LinkSnode;
//void init(Snode& L)
//{
//	L.top = -1;
//}
//void push(Snode& L, string x)
//{
//	//�ж��Ƿ�����
//	if (L.top == Maxsize - 1)
//	{
//		cout << "ջ�������޷���ջ";
//		return;
//	}
//	else
//	{
//		for (int i = 0;;i++)
//		{
//			if ((const char*)x[i] != "a")
//			{
//				L.data[++L.top] = x[i];
//			}
//			else
//			{
//				return;
//			}
//		}
//		
//	}
//}
//int judge(Snode &S)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (S.data[i]!='a')
//	{
//		switch (S.data[i])
//		{
//		case 'I':
//			j++;
//			break;
//		case '0':
//			k++;
//			break;
//		}
//		if (k > j)
//		{
//			return 0;
//			break;
//		}
//		i++;
//	}
//	if (k != j)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	Snode S;
//	init(S);
//	string s;
//	cout <<"������:" << endl;
//	cin >> s;
//	push(S, s);
//	if (judge(S))
//	{
//		cout << "�Ϸ�" << endl;
//	}
//	else
//	{
//		cout << "���Ϸ�" << endl;
//	}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#define  MaxSize 100
typedef char ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;
enum Status { ERROR, OK };

//��ʼ��ջ
Status InitStack(SqStack& s)
{
	s.top = -1;
	return OK;
}
//��ջ
void push(SqStack& L, string x)
{
	//�ж��Ƿ�����
	if (L.top == MaxSize - 1)
	{
		cout << "ջ�������޷���ջ";
		return;
	}
	else
	{
		for (int i = 0;;i++)
		{
			if ((char)x[i] != 'b')
			{
				L.data[++L.top] = x[i];
			}
			else
			{
				return;
			}
		}

	}
}
//�жϺϷ���
int JudgeLegal(SqStack& s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (s.data[i] != 'a')
	{
		switch (s.data[i])
		{
		case 'I':j++;break;
		case '0':k++;break;
		}
	/*	if (k > j)
		{
			return 1;
		}*/
		i++;
	}
	cout << k << endl;
	cout << j << endl;
	if (j == k)
	{
		return 0;
	}
	else
	{
		return 100;
	}
}
int main(int argc, char* argv[])
{
	SqStack S;
	InitStack(S);
	string s(500,0);
	cout <<"������:" << endl;
	cin >> s;
	push(S,s);
	if (JudgeLegal(S))
	{
		printf("���в��Ϸ�\n");
	}
	else
	{
		printf("���кϷ�!\n");
	}

	return 0;
}
