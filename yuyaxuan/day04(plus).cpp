//#include<iostream>
//#include<string>
//using namespace std;
//�������Ϊ���Ա
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		p_name = pName;
//	}
//	string p_name;
//};
//class Person
//{
//public:
//	Person(string name, string pName):m_name(name),m_Phone(pName)
//	{
//
//	}
	//��ʼ���б��ʼ������
	//Person(int a,int b,int c) :m_a(a), m_b(b), m_c(c) 
	//{

	//}
	////Person(const Person& p)
	//{
	//	cout << "Person�������캯������" << endl;
	//	m_age = p.m_age;
	//	//m_height = p.m_height; ������Ĭ��ʵ�־������д���
	//	//�������
	//	m_height = new int(*p.m_height);//ʹ�������ָ��ָ��һ���µ��ڴ�ռ�
	//}
	//~Person()
	//{
	//	//�������룬�����������������ͷŲ���
	//	if (m_height != NULL)
	//	{
	//		delete m_height;
	//		m_height = NULL;//����Ұָ��ĳ���
	//	}
	//	cout << "��������" << endl;
	//}
	/*string m_name;
	Phone m_Phone;
	int m_c;
};*/
//��������Ķ�����Ϊ�����Ա������ʱ���ȹ���������ٹ�������������˳���빹���෴
//void test01()
//{
//	Person p("����", "ƻ��MAX");
//	cout << p.m_name << "ʹ�õ���" << p.m_Phone.p_name << endl;
//}
//void dowork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	dowork(p);
//}
////3.ֵ��ʽ���ؾֲ�����
//Person dowork2()
//{
//	Person p1;
//	return p1;
//}
//void test03()
//{
//	Person p = dowork2();
//}
//int main()
//{
//	test01();
//	//test02();
//	//test03()
//	system("pause");
//	return 0;
//}