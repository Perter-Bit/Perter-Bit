#include<iostream>
#include<string>
using namespace std;
//(1)��֪ģʽ�� t = "abcaabbabcab", д����KMP����õ�ÿ���ַ���Ӧ�� next �� nextval
//����ֵ
//void get_next(t T, int& next[])//next�����1��ʼ
//{
//	int i = 1;int j = 0;//j������¼�´η���Ӧ�ûص���λ��
//	next[1] = 0;//�����next����
//	while (i < T.length)//����λ�ò���������T�ĳ���
//	{
//		if (t[i] == t[j] && j == 0)
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			//����������
//			j = next[j];//��λ�ò�����ƥ���������Ӹ�λ�ö�Ӧ��next����λ�÷���
//		}
//	}
//}
//void get_nextval(t T, int& nextval[])
//{
//	int i = 1;
//	int j = 0;
//	nextval[1] = 0;//next[0]���洢����i���Ӧ
//	while (i < T.length)
//	{
//		if (t[i] == t[j] && j == 0)
//		{
//			i++;j++;
//			next[i] == j;
//			if (t[i] != t[j])//�����ж�
//			{
//				//��ԭ����ͬ
//				nextval[i] == j;
//			}
//			else
//			{
//				nextval[i] == nextval[j];
//			}
//		}
//	}
//}
//(2)дһ���㷨ͳ���������ַ����и�����ͬ�ַ����ֵ�Ƶ�Ȳ�����������ļ����ַ�����
//�ĺϷ��ַ�Ϊ A~Z �� 26 ����ĸ�� 0~9 �� 10 �����֣���
//#define Maxsize 1000
//void Count()//ͳ�������ַ����������ַ�����ĸ�ַ��ĸ�����
//{
//	string s;
//	cin >> s;
//	int num[Maxsize];
//	for (int i = 0; i < 36; i++)
//		num[i] = 0;// ��ʼ��
//	for (int i = 0;;i++)
//	{
//		if (s[i] == '#')
//		{
//			break;
//		}
//		else
//		{
//			if ('0' <= s[i] <= '9')  //�����ַ�
//			{
//				int x = s[i] - 48;//ch��ʱΪ���ֵ�ascll��,����ó�i��ֵ
//				num[x]++;
//			}
//			else if ('A' <= s[i] <= 'Z')  //��ĸ�ַ�
//			{
//				int x = s[i] - 'A' + 10;//��ֹ�ظ�
//				num[x]++;
//			}
//		}
//	}
//	//int num[36];//��ʼ������
//	//char ch;
//	
//	//while ((ch = getchar()) != '#')
//	//{
//	//	if ('0' <= ch <= '9')  //�����ַ�
//	//	{
//	//		int i = ch - 48;//ch��ʱΪ���ֵ�ascll��,����ó�i��ֵ
//	//		num[i]++;
//	//	}
//	//	else if ('A' <= ch <= 'Z')  //��ĸ�ַ�
//	//	{
//	//		int i = ch - 'A' + 10;//��ֹ�ظ�
//	//		num[i]++;
//	//	}
//	//}//ѭ��������Խ��յ�#�ַ�����
//	for (int i = 0; i < 10; i++)
//	{
//		if (num[i])
//		{
//			cout << "����" << i << "�ĸ���=" << num[i] << endl;
//		}
//		
//	}
//	for (int i = 10; i < 36; i++)
//	{
//		if (num[i])
//		{
//			cout << "��ĸ�ַ�" << i + 55 << "�ĸ���=" << num[i] << endl;
//		}
//	}
//}
//int main()
//{
//	Count();
//	system("pause");
//	return 0;
//}
//��3��дһ���ݹ��㷨��ʵ���ַ�������洢��Ҫ�����贮�洢�ռ䡣
//����Ҫ��ͨʵ�ֽ��ַ�������洢�Ĳ������Ҳ����贮�洢�ռ䣬����һ��������ַ����һ���洢
//int InvertStore(char A[])
////�ַ�������洢�ĵݹ��㷨��
//{
//	char ch;
//	static int i = 0;//��Ҫʹ�þ�̬��������֤i��ֵ���Ա����Ǽ�¼����
//	cin >> ch;//����һ���ַ�
//	if (ch != '.')    //�涨'.'���ַ������������־
//	{
//		InvertStore(A);//�ݹ�����Լ�
//		A[i++] = ch;//�ҵ����һ���ַ�������һ�������洢��A������
//	}
//	A[i] = '\0';  //�ַ�����β���
//
//	return i;
//}
//void display(char A[], int i)
//{
//	for (int k = 0; k < i; k++)
//	{
//		cout << A[k] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	char A[100];
//	int i = InvertStore(A);
//	display(A, i);
//	system("pause");
//	return 0;
//}
//
//
