#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
using namespace std;
//��ϰ 9.2:����һ��list������Ԫ���������� int �� deque��
//list<deque<int>> l1;
//��ϰ 9.4 : ��д����������һ��ָ�� vector<int>�ĵ�������һ��int ֵ��������������ָ���ķ�Χ�в��Ҹ�����ֵ������һ������ֵ��ָ���Ƿ��ҵ���
//bool panduan(vector<int>::iterator it1, vector<int>::iterator it2, int val)
//{
//	while (it1 != it2)
//	{
//		if (*it1 == val)
//		{
//			return true;
//		}
//		it1++;
//	}
//	return false;
//}
//��ϰ9.5 : ��д��һ��ĺ���������һ��������ָ���ҵ���Ԫ�ء�ע�⣬������봦��δ�ҵ�����ֵ�������
//vector<int>;;iterator panduan(vector<int>::iterator it1, vector<int>::iterator it2, int val)
//{
//	while (it1 != it2)
//	{
//		if (*it1 == val)
//		{
//			return it1;
//		}
//		it1++;
//	}
//	return it2;
//}
//��ϰ9.6 : ��������кδ��� ? ��Ӧ������޸��� ?
//list < int>1st1;
//list<int>::iterator iterl = lstl.begin(),
//iter2 = lstl.end();
//while (iterl < iter2)
//list�����Դ�С�Ƚ�
//��ϰ9.11:��6�ִ����ͳ�ʼ��vectorʱ��ķ�����ÿһ�ֶ�����һ��ʵ��������ÿ��vector����ʲôֵ��
//vector<int> v1;
//vector<int> v2(v1);
//vector<int> v3 = { 1,2,3,4 };
//vector<int> v4 (v3.begin(), v3.end() - 1);
//vector<int> v5(7);
//vector<int> v6(7, 3);
//��ϰ9.15:��д�����ж����� vector<int>�Ƿ���ȡ�
//bool panduan(vector<int>v1, vector<int>v2)
//{
//	return v1 == v2;
//}
//��ϰ9.16 : ��д��һ��ĳ��򣬱Ƚ�һ�� list<int>�е�Ԫ�غ�һ�� vector<int>�е�Ԫ�ء�
//bool panduan(vector<int>v1, list<int>l2)
//{
//	//ʹ��ѭ������
//}
//��ϰ9.18:��д���򣬴ӱ�׼�����ȡ string ���У�����һ�� deque �С���дһ��ѭ�����õ�������ӡ deque �е�Ԫ�ء���
//int main()
//{
//	deque<string> d1;
//	string word;
//	while (cin >> word)
//	{
//		d1.push_back(word);
//	}
//	for (auto i : d1)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//}
//��ϰ 9.20 : ��д���򣬴�һ�� list<int>����Ԫ�ص����� deque �С�ֵΪż��������Ԫ�ض�������һ�� deque �У�������ֵԪ�ض���������һ�� deque �С�
//int main()
//{
//	list<int> l1;
//	deque<int> d1;
//	deque<int> d2;
//	for (auto i : l1)
//	{
//		if (i & 1)
//		{
//			//�ǽ���
//			d1.push_back(i);
//		}
//		else
//		{
//			d2.push_back(i);
//		}
//	}
//}
