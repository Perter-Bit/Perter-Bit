//#include<iostream>;
//#include<deque>
//#include<algorithm>//��׼�㷨ͷ�ļ�
//using namespace std;
////deque��������
//void printf(const deque<int>&d)//ֻ��
//{
//	for (deque<int> ::const_iterator it = d.begin();it != d.end();it++)
//	{
//		//*it = 100; ʧ�ܣ������������޸�
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	printf(d1);
//	cout << "�����" << endl;
//	sort(d1.begin(), d1.end());
//	printf(d1);//Ĭ�ϴ�С���� ����
//	//����֧��������ʵĵ�����������������sort�㷨����������� ����vector
//}
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printf(d1);
//	d1.insert(d1.begin(), 1000);
//	printf(d1);
//	d1.insert(d1.begin(),2,10000);
//	printf(d1);
//	//����������в���
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d1.insert(d1.begin(), d2.begin(), d2.end());//d1 begin��λ�ÿ�ʼ����
//	printf(d1);
//}
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20 
//	//ɾ��
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printf(d1);	//200 10 20
//	d1.erase(d1.begin(), d1.end());
//	//���
//	d1.clear();
//}//�����ɾ���ṩ��λ���ǵ�����!
//int main()
//{
//	test01();
//	/*test02();*/
//	/*test03();*/
//	system("pause");
//	return 0;
//}