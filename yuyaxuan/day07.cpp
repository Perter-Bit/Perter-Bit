//#include<iostream>
//#include<string>
//using namespace std;
////������װ
////����CPU��
//class CPU
//{
//public:
//	//����ļ��㺯��
//	virtual void calculate() = 0;
//};
////�����Կ���
//class VideoCard
//{
//public:
//	//�������ʾ����
//	virtual void show() = 0;
//};
////�����ڴ�����
//class Me
//{
//public:
//	//����Ĵ洢����
//	virtual void M() = 0;
//};
////������
//class computer
//{
//public:
//	computer(CPU* cpu, VideoCard* vc, Me* m)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_m = m;
//	}
//	void work()
//	{
//		m_cpu->calculate();
//		m_vc->show();
//		m_m->M();
//	}
//	//�ṩ�������� �ͷ�3���������
//	~computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_m != NULL)
//		{
//			delete m_m;
//			m_m = NULL;
//		}
//	}
//	CPU* m_cpu;
//	VideoCard* m_vc;
//	Me* m_m;
//};
////ʵ�־���ĳ���
//
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "����Intel��CPU" << endl;
//	}
//};
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void show()
//	{
//		cout << "����Intel��videocard" << endl;
//	}
//};
//class IntelMe :public Me
//{
//public:
//	virtual void M()
//	{
//		cout << "����Intel��Me" << endl;
//	}
//};
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "����Lenov0��CPU" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void show()
//	{
//		cout << "����Lenovo��videocard" << endl;
//	}
//};
//class LenovoMe :public Me
//{
//public:
//	virtual void M()
//	{
//		cout << "����Lenovo��Me" << endl;
//	}
//};
//void test01()
//{
//	//��һ̨���Ե����
//	CPU* intelCPU = new IntelCPU;
//	VideoCard* IntelVideoCard = new LenovoVideoCard;
//	Me* intelMe = new IntelMe;
//	computer* c = new computer(intelCPU, IntelVideoCard, intelMe);
//	c->work();
//	delete c;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}