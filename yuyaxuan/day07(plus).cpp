#include<iostream>
#include<string>
#include<fstream>
//using namespace std;
////�������ļ� ���ļ�
//class Person
//{
//public:
//	char m_Name[50];
//	int m_Age;
//};
//void test01()
//{
//	//1.����ͷ�ļ�
//	//2.����������
//	ifstream ifs;//2��3Ҳ���Ժϲ�Ϊofstream ofs("person.txt", ios::out | ios::binary)
//	//3.���ļ����ж��Ƿ�򿪳ɹ�
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//	}
//	//4.д�ļ�
//	Person p;
//	ifs.read((char *)&p, sizeof(Person));//��һ������ΪҪ�����ģ��ڶ���Ϊ���ݴ�С
//	cout << "����:" << p.m_Name << "����:" << p.m_Age << endl;
//	//5.�ļ��ر�
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}