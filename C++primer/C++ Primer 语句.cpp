#include<iostream>
#include<vector>
using namespace std;
//6.3.2 / ����ϰ
//��ϰ 6.30:����� 200 ҳ�� str_subrai nge ������������ı���������δ������еĴ���ġ�
//����:1.���ܲ����õ�return
//2.����ֵ����
//bool str_subrange(const string& str1, const string& str2)
//{
//	if (str1.size() == str2.size())
//	{
//		return str1 == str2;
//	}
//	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();//sizeΪ��ַ����Ĵ�С
//	for (decltype(size) i = 0;i < size;i++)
//	{
//		if (str1[i] != str2[i])
//		{
//			return;
//		}
//	}
//}
//��ϰ 6.32 : ����ĺ����Ϸ��� ? ����Ϸ���˵���书��;������Ϸ����޸����еĴ��󲢽���ԭ��
//int& get(int* arry, int index(return arry[index]; }
//int main() 
// {
//int ia[10];
//for (inti = 0;i != 10; ++i)
//get(ia, i) = i;
//�Ϸ������Ե���ֵ
//��ϰ6.33:��дһ���ݹ麯������� ve ector ��������ݡ�
//void digui(vector<int> v1,unsigned index)
//{
//	auto sz = v1.size();
//	if (index < sz)
//	{
//		cout << v1[index] << endl;
//		digui(v1, index + 1);
//	}
//	else
//	{
//		return;
//	}
//}
//int main()
//{
//	vector<int> v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	digui(v1,0);
//}
//��ϰ 6.34 : ��� factorial ������ͣ ������������ʾ��������ʲô��� ?
//if (val != 0)
// ����Ϊ������һֱ�ݹ���ȥ