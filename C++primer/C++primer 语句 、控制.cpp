#include<iostream>
using namespace std;
//6.1.2 ����ϰ
//��ϰ 6.8:��дһ����Ϊ Chapter6.h��ͷ�ļ���������� 6.1 ����ϰ(�� 184 ҳ)�еĺ���������
//��ϰ 6.9:��д���Լ��� fact.cc �� factMain.cc���������ļ���Ӧ�ð�����һС�ڵ���ϰ�б�д�� Chapter6.h ͷ��ţ��
//ͨ����Щ�ļ��������ı����������֧�ַ���ʽ����ġ�
//��ϰ 6.10:��дһ��������ʹ��ָ���ββ���������������ֵ���ڴ����е��øú��������������Ľ�����Դ���֤��������ȷ�ԡ�
//void jiaohuan(int* q, int* p)
//{
//	int temp = *q;
//	*q = *p;
//	*p = temp;
//}
//int main()
//{
//	int arr1 = 10;
//	int arr2 = 100;
//	int* p1;
//	int* p2;
//	p1 = &arr1;
//	p2 = &arr2;
//	cout << "����ǰ��" << endl;
//	cout << *p1 << *p2 << endl;
//	jiaohuan(p1, p2);
//	cout << "������" << endl;
//	cout << *p1 << *p2 << endl;
//}
//.6.2 ����ϰ
//��ϰ 6.11:��д����֤���Լ��� reset ������ʹ���������������͵Ĳ�����
//void reset(int& i)//����
//{
//	i = 0;
//}
//int main()
//{
//	int i = 100;
//	cout << "����ǰ" << endl;
//	cout << i << endl;
//	reset(i);
//	cout << "���ĺ�" << endl;
//	cout << i << endl;
//}
//��ϰ 6.12 : ��д 6.2.1 ������ϰ 6.10(�� 188 ҳ)�ĳ���ʹ�����ö���ָ�뽻������������ֵ����������ַ���������ʹ���� ? Ϊʲô ?
//void jiaohuan(int& q, int& p)
//{
//	int temp = q;
//	q = p;
//	p = temp;
//}
//int main()
//{
//	int p1 = 10;
//	int p2 = 100;
//	cout << "����ǰ��" << endl;
//	cout << p1  << p2 << endl;
//	jiaohuan(p1, p2);
//	cout << "������" << endl;
//	cout << p1  << p2 << endl;
//}32222222
//��ϰ 6.23 : �ο����ڽ��ܵļ��� print ��������������д���Լ��İ汾�����ε���ÿ������ʹ���������涨���i��j :
//int i = 0��j[2] = { 0��1 };
//void print1(const int* p)
//{
//	cout << *p << endl;
//}
//void print2(const int* p, const int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//}
//void print3(const int* p1, const int* p2)
//{
//	for (auto p = p1;p != p2;p++)
//	{
//		cout << *p << endl;
//	}
//}
//��ϰ 6.25: ��дһ�� main ����, �����������ʵ�Ρ���ʵ�ε��������ӳ�һ��string�������������
//int main(int argc, char** argv)//argv��һ�����飬�����е�Ԫ�����ַ���
//{
//	string str;
//	for (int i = 0;i != argc;i++)
//	{
//		str += argv[i];
//	}
//	cout << str << endl;
//	return 0;
//}
//��ϰ 6.26 : ��дһ������ʹ����ܱ������ʾ��ѡ��;������ݸ� main ������ʵ�ε����ݡ�
//int main(int argc,char **argv)
//{
//	for (int i = 0;i != argc;i++)
//	{
//		//���ʵ�ε�����
//		cout << argv[i]<<" "<< endl;
//	}
//}
//��ϰ 6.27:��дһ�����������Ĳ�����initializer list<int>���͵Ķ��󣬺����Ĺ����Ǽ����б�������Ԫ�صĺ͡�
//int qiuhe(initializer_list<int> i1)
//{
//	int count = 0;
//	for (auto val : i1)
//	{
//		count += val;
//	}
//	return count;
//}
//int main()
//{
//	int x = qiuhe({ 10,20,30,120,20,120,10,20,30,10 });
//	cout << x << endl;
//}