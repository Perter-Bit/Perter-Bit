#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
//3.4.1 ����ϰ
//��ϰ 3.21:��ʹ�õ��������� 3.3.3 �� �� 94 ҳ)�ĵ�һ����ϰ��
//template<typename elemType>
//void shuchu(vector<elemType> v)
//{
//	int x = 0;
//	cout << "�����Ĵ�СΪ:" << v.size() << endl;
//	if (v.cbegin() != v.cend())
//	{
//		//������Ϊ��
//		cout << "Ԫ��Ϊ:" << endl;
//		for (auto it = v.cbegin();it!=v.cend();it++)
//		{
//			cout << *it << " ";
//			//���Ԫ�ػ���һ��
//			x++;
//			if (x % 5 == 0)
//			{
//				cout << endl;
//			}
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "��Ǹ������������ǿյ�" << endl;
//	}
//}
//int main()
//{
//	vector<int> v1;//v1�ǿ�����,int����Ĭ����0
//	vector<int> v2(10);//10��Ԫ��,ÿ��Ԫ�ص�ֵΪ0
//	vector<int> v3(10, 1);
//	vector<int> v4{ 10,1 };
//	vector<string> v5(10, "hello");
//	shuchu(v1);
//	shuchu(v2);
//	shuchu(v3);
//	shuchu(v4);
//	shuchu(v5);
//}
//��ϰ 3.22:�޸�֮ǰ�Ǹ���� text �� �εĳ������Ȱ� text �ĵ�һ��ȫ���ĳɴ�
//д��ʽ��Ȼ���������
//int main()
//{
//	vector<string> v1;
//	string s1;
//	while (getline(cin, s1))//��ʼ������
//	{
//		v1.push_back(s1);
//	}
//	for (vector<string>::iterator s1 = v1.begin();s1 != v1.end() && !s1->empty();s1++)//ʹ��getline��ʼ��������,string�п��ܻ��пհ׷�����������
//	{
//		//����vector����
//		for (auto it2 = s1->begin();it2 != s1->end();it2++)
//		{
//			*it2 = toupper(*it2);
//			cout << *it2 << " ";
//		}
//		cout << endl;
//	}
//
//}
//��ϰ 3.23 : ��дһ�γ��򣬴���һ������ 10 �������� vector ����Ȼ��ʹ�õ�����������Ԫ�ص�ֵ�����ԭ������������� vector ��������ݣ���������Ƿ���ȷ��
//int main()
//{
//	vector<int> v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "�ı�ǰ" << endl;
//	for (int i = 0;i < 10;i++)
//	{
//		cout << v1[i] << endl;
//	}
//	cout << "�ı��" << endl;
//	for (vector<int>::iterator it = v1.begin();it != v1.end();it++)
//	{
//		(*it) *= (*it);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		cout << v1[i] << endl;
//	}
//}
//3.4.2 ����ϰ
//��ϰ 3.24:��ʹ�õ��������� 3.3.3 ��(�� 94ҳ)�����һ����ϰ��
//int main()
//{
//	vector<int> v1;
//	cout << "������:" << endl;
//	int vVal;
//	while (cin >> vVal)
//	{
//		v1.push_back(vVal);
//	}
//	cout << "������Ԫ�صĺ�Ϊ:" << endl;
//	//������ż��
//	for (vector<int>::iterator it = v1.begin();it+1 != v1.end();it+=2)
//	{
//		cout << *it + *(it + 1) <<endl;
//		if (it + 2 == v1.end())
//		{
//			break;
//		}
//	}
//	if ((v1.end() - v1.begin()) % 2 != 0)
//	{
//		vector<int>::iterator it = v1.end() - 1;
//		cout << *it << endl;
//	}
//	//�������
//	vector<int>::iterator it = v1.begin();
//	vector<int>::iterator eit = v1.end();
//	for (int i = 0; i!= (v1.end() - v1.begin())/2;i++)
//	{
//		cout << *it + *(eit - 1) << endl;
//		it++;
//		eit--;
//	}
//	if ((v1.end() - v1.begin()) % 2 != 0)//���������
//	{
//		vector<int>::iterator it = v1.begin() + ((v1.end() - v1.begin()) / 2);
//		cout << *it << endl;
//	}
//}
//��ϰ 3.25 : 3.3.3 ��(�� 93 ҳ)���ַ����εĳ�����ʹ���±������ʵ�ֵģ������õ�������д�ó���ʵ����ȫ��ͬ�Ĺ��ܡ�
//int main()
//{
//	vector<unsigned> v1(11, 0);//11����,��ʼ��ֵΪ0
//	auto it = v1.begin();
//	unsigned grade;
//	int x = 0;
//	while (cin >> grade)
//	{
//		if (grade < 101)
//		{
//			++* (it + grade / 10);
//			x++;
//		}
//	}
//	cout << "���ܹ�������" << x << "���ɼ�" << endl;
//	cout << "�������������ķֲ���:" << endl;
//	for (vector<unsigned>::iterator it = v1.begin();it != v1.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//��ϰ 3.31:��дһ�γ��򣬶���һ������ 10 ��int�����飬��ÿ��Ԫ�ص�ֵ�������±�ֵ��
//int main()
//{
//	int arr[10];
//	for (int i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//	}
//}
//��ϰ 3.32 : ����һ��ոմ��������鿽��������һ�����顣���� vector��д����ʵ�����ƵĹ��ܡ�
//int main()
//{
//	const int sz = 10;
//	int a[sz], b[sz];
//	for (int i = 0;i < 10;i++)
//	{
//		a[i] = i;
//	}
//	for (int i = 0;i < 10;i++)//��a���鸳ֵ��b����
//	{
//		b[i] = a[i];
//	}
//	vector<int> v1, v2;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		v2.push_back(v1[i]);
//	}
//}
