//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<deque>
//#include<time.h>
//#include<stdlib.h>
//#include<algorithm>
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_name = name;
//		this->m_Score = score;
//	}
//	string m_name;
//	int m_Score;
//};
//void createPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0;i < 5;i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//
//}
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
//	{
//		//����ί�ķ������뵽deque������
//		deque<int>d;
//		
//		for (int i = 0;i < 10;i++)
//		{	
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		//����
//		sort(d.begin(), d.end());
//		//ȥ����߷�����ͷ�
//		d.pop_back();
//		d.pop_front();
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin();dit != d.end();dit++)
//		{
//			sum += *dit;//�ۼ�ÿ����ί�ķ���
//		}
//		//����ƽ����
//		int avg = sum / d.size();
//		//��ƽ���ָ�ֵ��ѡ������
//		it->m_Score = avg;
//	}
//}
//void showScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << "����:" << it->m_name << "�ɼ�:" << it->m_Score <<endl;
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	//1.����5��ѡ��
//	vector<Person>v;
//	createPerson(v);
//	//2.��5��ѡ�ִ��
//	setScore(v);
//	//3.��ʾ
//	showScore(v);
//}