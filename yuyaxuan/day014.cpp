//#include<iostream>
//#include<string>
//#include<set>
//#include<vector>
//#include<algorithm>
//#include<map>
//#include<time.h>
//using namespace std;
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//class Person
//{
//public:
//	string name;
//	int salary;
//};
////Ա������
//void createWorker(vector<Person>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0;i < 10;i++)
//	{
//		Person person;
//		person.name = "Ա��";
//		person.name += nameSeed[i];
//		person.salary = rand() % 100000 + 10000;
//		v.push_back(person);
//	}
//}
////ʵ��Ա������
//void setGroup(vector<Person> &v,multimap<int, Person>&m)
//{
//	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
//	{
//		//����������ű��
//		int depId = rand() % 3;//0 1 2
//		//��Ա�����뵽������
//		//keyΪ���ű��,valueΪ����Ա��
//		m.insert(make_pair(depId, *it));
//	}
//}
//void show(multimap<int, Person>& m)
//{
//	multimap <int, Person>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA);
//	
//	cout << "�߻�����:" << endl;
//	for(int index = 0;pos != m.end() && index < count;pos++, index++)
//	{
//		cout << "����:" << pos->second.name << "����" << pos->second.salary << endl;
//	}
//	cout << "----------------------" << endl;
//	cout << "��������:" << endl;
//	multimap <int, Person>::iterator kos = m.find(MEISHU);
//	count = m.count(MEISHU);
//	for (int index = 0;kos != m.end() && index < count;kos++, index++)
//	{
//		cout << "����:" << kos->second.name << "����" << kos->second.salary << endl;
//	}
//	cout << "----------------------" << endl;
//	cout << "�з�����:" << endl;
//	multimap <int, Person>::iterator zos = m.find(YANFA);
//	count = m.count(YANFA);
//	for (int index = 0;zos != m.end() && index < count;zos++, index++)
//	{
//		cout << "����:" << zos->second.name << "����" << zos->second.salary << endl;
//	}
//}
//void test01()
//{
//	vector<Person>v;
//	createWorker(v);
//	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << "����" << it->name << "нˮ" << it->salary << endl;
//	}
//	//Ա������
//	multimap<int, Person>m;
//	setGroup(v,m);
//	//������ʾԱ��
//	show(m);
//};
//int main()
//{
//	srand((unsigned)time(NULL));
//	test01();
//	/*test02();*/
//	system("pause");
//	return 0;
//}
