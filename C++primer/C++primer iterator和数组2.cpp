#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<ctime>
#include<cstdlib>
#include<cstring>
using namespace std;
//��ϰ 3.35:��дһ�γ�������ָ�뽫�����е�ԪԪ����Ϊ 0��
//int main()
//{
//	const int sz = 10;
//	int arr[10];
//	for (int i = 0;i < 10;i++)//��ʼ������
//	{
//		arr[i] = i;
//	}
//	cout << "��ʼ�������������:" << endl;
//	for (auto i : arr)
//	{
//		cout << i << endl;
//	}
//	cout << "�ı��:" << endl;
//	int* p = arr;
//	for (int i = 0;i < 10;i++)
//	{
//		*(p + i) = 0;
//	}
//	for (auto i : arr)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}
//��ϰ 3.36 : ��дһ�γ��򣬱Ƚ����������Ƿ���ȵȡ���дһ�γ��򣬱Ƚ����� vector�����Ƿ���ȡ�
//int main()
//{
	//�ж����������Ƿ����
	//��ʼ��
	//const int sz = 5;
	//int arr1[sz], arr2[sz];
	//srand((unsigned)time(NULL));//�������������
	//for (int i = 0;i < 5;i++)
	//{
	//	arr1[i] = rand() % 5;//ÿ���������5���ڵ���
	//}
	//cout << "������Ѿ�������ϣ���������Ҫ�µ�����(5��):" << endl;
	//int val;
	//int x = 0;
	//while (cin >> val)
	//{
	//	if (x == 5)
	//	{
	//		cout << "�������" << endl;
	//		break;
	//	}
	//	arr2[x] = val;
	//	x++;
	//}
	//cout << "ϵͳ����Ϊ:" << endl;
	//for (auto i : arr1)
	//{
	//	cout << i << endl;
	//}
	//cout << "���������Ϊ:" << endl;
	//for (auto i : arr2)
	//{
	//	cout << i << endl;
	//}
	////�ж��Ƿ����
	//auto a = begin(arr1);
	//auto b = begin(arr2);
	//bool panduan = true;
	//for (int i = 0;i<5;i++)
	//{
	//	if (*(arr1 + i) != *(arr2 + i))
	//	{
	//		cout << "�����" << endl;
	//		panduan = false;
	//		break;
	//	}
	//}
	//if (panduan)
	//{
	//	cout << "���" <<endl;
	//}
	//return 0;
    //�ж�����vector����
//	const int sz = 5;
//	vector<int> v1, v2;
//	srand((unsigned)time(NULL));//�������������
//	for (int i = 0;i < 5;i++)
//	{
//		v1.push_back((rand() % 5));//ÿ���������5���ڵ���
//	}
//	cout << "������Ѿ�������ϣ���������Ҫ�µ�����(5��):" << endl;
//	int val;
//	int x = 0;
//	while (cin >> val)
//	{
//		if (x == 5)
//		{
//			cout << "�������" << endl;
//			break;
//		}
//		v2.push_back(val);
//		x++;
//	}
//	cout << "ϵͳ����Ϊ:" << endl;
//	for (auto i : v1)
//	{
//		cout << i << endl;
//	}
//	cout << "���������Ϊ:" << endl;
//	for (auto i : v2)
//	{
//		cout << i << endl;
//	}
//	//�ж��Ƿ����
//	auto it1 = v1.begin();
//	auto it2 = v2.begin();
//	bool panduan = true;
//	for (int i = 0;i<5;i++)
//	{
//		if (*(it1 + i) != *(it2 + i))
//		{
//			cout << "�����" << endl;
//			panduan = false;
//			break;
//		}
//	}
//	if (panduan)
//	{
//		cout << "���" <<endl;
//	}
//	return 0;
//}
//��ϰ 3.39:��дһ�γ��򣬱Ƚ����� string �����ٱ�дһ�γ��򣬱Ƚ�����C����ַ��������ݡ�
//int main()
//{
	//�Ƚ�����string����
	/*string s1, s2;
	cout << "��ֱ���������string����,�Կո����ֿ�:" << endl;
	cin >> s1 >> s2;
	cout << "�Ƚ���Ϣ����:" << endl;
	if (s1 > s2)
	{
		cout << "��һ���ַ�������" << endl;
	}
	else if (s1 < s2)
	{
		cout << "�ڶ����ַ�������" << endl;
	}
	else
	{
		cout << "�����ַ���һ����" << endl;
	}*/
	//�Ƚ�����C����ַ���
//	const int se = 10;
//	char arr1[se], arr2[se];
//	cout << "��ֱ����������ַ���,�Կո����ֿ�:" << endl;
//	cin >> arr1 >> arr2;
//	auto i = strcmp(arr1, arr2);
//	//�Ƚ�
//	cout << "�Ƚ���Ϣ����:" << endl;
//	switch (i)
//	{
//	case 1:
//		cout << "��һ���ַ�����" << endl;
//		break;
//	case -1:
//		cout << "�ڶ����ַ�����" << endl;
//		break;
//	case 0:
//		cout << "һ����" << endl;
//		break;
//	default:
//		cout << "δ������Ľ��" << endl;
//		break;
//	}
//	return 0;
//	
//}
//��ϰ 3.40 : ��дһ�γ��򣬶��������ַ����鲢���ַ�������ֵ��ʼ������;�����ٶ���һ���ַ�������ǰ�����������Ӻ�Ľ����ʹ�� strcpy �� strcat ��ǰ������������ݿ����������������С�
//#define Maxsize 1000
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "world";
//	char str3[Maxsize];
//	strcpy_s(str3, str1);
//	strcat_s(str3, str2);
//	cout << "ƴ�Ӻ�" << endl;
//	cout << str3 << endl;
//}
//��ϰ 3.41:��дһ�γ��������������ʼ��һ�� vector ����
//int main()
//{
//	const int sz = 10;
//	int a[sz];
//	srand((unsigned)time(NULL));
//	cout << "�����������:" << endl;
//	for (auto& val : a)//����ķ�Χ��0-100
//	{
//		val = rand() % 100;
//		cout << val<<" ";
//	}
//	cout << endl;
//	//��ʼ��vector����
//	vector<int> v1(begin(a),end(a));
//	for (auto& z : v1)//����ķ�Χ��0-100
//	{
//		cout << z << " ";
//	}
//	cout << endl;
//}
//��ϰ 3.42 : ��дһ�γ��򣬽���������Ԫ�ص� vector ���󿽱���һ���������顣
//int main()
//{
//	srand((unsigned)time(NULL));
//	vector<int> v1;
//	for (auto i = 0;i < 10;i++)//��ʼ��vector����
//	{
//		v1.push_back(rand()%100);
//	}
//	cout << "vector������������:" << endl;
//	for (auto i : v1)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//	auto a = v1.begin();
//	int arr[10];
//	for (auto &val : arr)
//	{
//		val = *a;
//		a += 1;
//	}
//	cout << "�����������:" << endl;
//	for (auto i : arr)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//	return 0;
//}
//��ϰ 3.43:��д3����ͬ�汾�ĳ������������� ia ��Ԫ�ء��汾1ʹ�÷�Χ for�������������;�汾2�Ͱ汾3��ʹ����ͨ�� for ��䣬
// ���а汾2Ҫ�����±���������汾3Ҫ��fָ�롣���⣬������3���汾�ĳ����ж�Ҫֱ��д���������ͣ�������ʹ�����ͱ�����auto �ؼ��ֻ� decltype �ؼ��֡�
//int main()
//{
//	int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//	cout << "�汾һ" << endl;
//	for (int (&row)[4] : ia)
//	{
//		for (int j : row)
//		{
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "�汾��" << endl;
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 4;j++)
//		{
//			cout << ia[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "�汾��" << endl;
//	for (int(*p)[4] = ia; p != ia +3;p++)
//	{
//		for (int* q = *p;q != *p + 4;q++)//pָ�����ĸ�����������,*p������ĵ�һ��Ԫ�صĵ�ֵַ,q��ʱָ�������ĵ�һ��Ԫ��
//		{
//			cout << *q << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}
//��ϰ 3.44:��д��һ����ϰ�еĳ���ʹ�����ͱ���������ѭ�����Ʊ��������͡�
//ʹ�ñ���
//using int_array = int[4];//ʹ�����ͱ���
//int main()
//{
//	int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//	cout << "Ԫ��Ϊ:" << endl;
//	for (auto& i : ia)
//	{
//		for (auto& j : i)
//		{
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int_array* p = ia;p != ia + 3;p++)
//	{
//		for (int* q = *p;q != *p + 4;q++)
//		{
//			cout << *q << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}
//��ϰ4.22:���ڵ�ʾ�����򽫳ɼ����ֳ�)high pass�� pass ��fail ���֣���չ�ó���ʹ���һ���� 60 �ֵ� 75 ��֮��ĳɼ��趨Ϊ low pass��
//Ҫ�������������汾 : һ���汾ֻʹ�����������;����һ���汾ʹ��1 - ������ if ��䡣�ĸ��汾�ĳ������������� ? Ϊʲô ?
//int main()
//{
//	//�汾һ
//	/*grade = (grade > 90) ? high pass : ((grade > 75) ? pass : (grade < 60) ? low pass : pass));*/
//	//�汾��
//	if (grade > 90)
//	{
//		grade = high pass;
//	}
//	else if (75 <grade && grade < 90)
//	{
//		grade = pass;
//	}
//	if (grade < 75 && grade >60)
//	{
//		grade = low pass;
//	}
//	else
//	{
//		grade = fail;
//	}
//}
