#include<iostream>
#include<vector>
using namespace std;
//6.3.3 ����ϰ 6.36:��дһ��������������ʹ�䷵����������ò��Ҹ�������� 10�� string
//���󡣲�Ҫʹ��β�÷������͡�decltype �������ͱ�����
//string (&func())[10];
//��ϰ 6.37 : Ϊ��һ��ĺ�����д����������һ��ʹ�����ͱ�������һ��ʹ��β�÷������ͣ����һ��ʹ�� decltype �ؼ��֡������������ʽ��� ? Ϊʲô ?
//���ͱ���:
//typedef string arr[10];
//arr& func();
////β�÷�������
//auto func()->string(&)[10];
////decltype
//string str[10];
//decltype(str)& func1();
//��ϰ 6.38 : �޸� arrptr������ʹ�䷵����������á�
//int odd[] = { 1,3,5,7,9 };
//int even[] = { 2,4,6,8,10 };
//decltype(odd)& func(int i)
//{
//	return (i % 2) ? odd : even;
//}
/*��ϰ6.42:��make_plural����(�μ� 6.3.2 �ڣ��� 201 ҳ)�ĵڶ����βθ���Ĭ��ʵ��'s'�������°汾�ĺ��������˵˾ success �� failure �ĵ����͸�����ʽ*/
//string make_plural(size_t ctr, const string& word, const string& ending = "s")
//{
//	return (ctr > 1) ? word + ending : ending;
//}
//int main()
//{
//	string s1 = "cow";
//	string s2 = make_plural(2,s1);
//	cout << "s1�ĸ�����ʽ:" << s2 <<endl;
//��ϰ 6.47:��д 6.3.2��(�� 205ҳ)��ϰ��ʹ�õݹ���� vector ���ݵĳ���ʹ���������������ִ�й����йص���Ϣ�����磬ÿ�ε���ʱ��� vector ����Ĵ�С����
//���ڴ򿪺͹رյ�����������±��벢��ִ���������
//void shuchu(vector<int> v1,unsigned index)
//{
//	auto size = v1.size();
//#ifndef NDEBUG
//	cout << "����Ĵ�СΪ:" << size << endl;
//#endif // !NDEBUG
//	if(!v1.empty() && index < size)
//	{
//		cout << v1[index] << endl;
//		shuchu(v1, index + 1);
//	}
//	return;
//}
//int main()
//{
//	vector<int> v1 = { 5,6,2,3,4 };
//	shuchu(v1, 0);
//}
////��ϰ 6.54:��д����������������ָ�������� int �ββ��ҷ�������Ҳ�� int;Ȼ������һ�� vector ��������Ԫ����ָָ��ú�����ָ�롣
//int hanshu(int x, int y);
//
///*��ϰ 6.55:��д4���������ֱ������ int ִֵ�мӡ������ˡ���*//*����;����һ�ⴴ���� vector �����б���ָ����Щ������ָ�롣*/
//int jia(int x, int y)
//{
//	return x + y;
//}
//int jian(int x, int y)
//{
//	return x - y;
//}
//int cheng(int x, int y)
//{
//	return x * y;
//}
//int chu(int x, int y)
//{
//	return x / y;
//}
//vector<decltype(hanshu)* > v1 = { jia,jian,cheng,chu };
////��ϰ 6.56:�������� vector �����е�ÿ��Ԫ�ز����������
//void shuchu(int x, int y, int func(int x1, int y1))
//{
//	cout << func(x, y)<<endl;
//}
//int main()
//{
//	int i = 5;int j = 10;
//	vector<decltype(hanshu)* > v1 = { jia,jian,cheng,chu };
//	for (auto p : v1)
//	{
//		shuchu(i, j, p);
//	}
//}
//��ϰ 7.1:ʹ�� 2.6.1 ����ϰ����� Sales data��Ϊ1.6 ��(�� 21 ҳ)�Ľ��״����
//���дһ���°汾��
//class Salesdata
//{
//public:
//	string isbn() const { return this->name; };
//private:
//	string name;
//};
//int main()
//{
//	cout << "�����뽻��{ISBN ����������ԭ�ۡ�ʵ���ۼ�}"<<endl;
//	Salesdata total;
//	if (cin >> total)
//	{
//		Salesdata trans;
//		while (cin >> trans)
//		{
//			if (total.isbn() == trans.isbn())
//			{
//				total += trans;
//			}
//			else
//			{
//				cout << total << endl;
//				total = trans;//ʹ����������ƥ����һ�����������
//			}
//		}
//		cout << trans << endl;
//	}
//	else
//	{
//		cerr << "no datas!" << endl;
//		return -1;
//	}
//	return 0;
//}