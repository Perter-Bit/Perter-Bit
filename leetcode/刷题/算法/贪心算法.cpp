#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class edge
{
public:
	int u, v;//u��v����������
	float quan;//quan�������������Ȩֵ
	edge(int a, int b, float c) :u(a), v(b), quan(c){};
};
bool cmp(edge a, edge b)
{
	return a.quan < b.quan;
}
//Ѱ�ҽ��ĸ��ڵ�
//���������������������ͬ����ͨ����,��ô���ǵĸ��ڵ�Ӧ�ò�ͬ
int findFather(vector<int> father, int x)//���ش��붥��ĸ��ڵ��
{
	int a = x;
	while (x != father[x])//��������x�Ƕ����
	{
		//���������,˵����ʱ��x����.
		x = father[x];
	}
	//��ʱ��x���Ǹ��ڵ�
	 //����father����
	int z;
	while (a != father[a])
	{
		z = a;
		a = father[a];
		father[z] = x;//��ʱfather��¼�ı��Ǹ��ڵ�
	}
	return x;
}

void Kruskal(int n, int m, vector<edge>& E, vector<edge>& res, float& totalCost)
{
	//����n�Ƕ�������m�Ǳ���,E�Ǵ�Ȩ����,res���Ѿ����뵽���Ž������ı�,totalCost�ǵ�ǰ�ܵ�·������
	vector<int> father(n + 1, 0);
	for (int i = 1;i <= n;i++)
	{
		father[i] = i;
	}
	sort(E.begin(), E.end(), cmp);//����Ȩֵ��С��������
	for (int i = 0; i < m; ++i)
	{
		int faU = findFather(father, E[i].u);
		int faV = findFather(father, E[i].v);
		//����u��v�ĸ����
		if (faU != faV)
		{
			//˵����ʱ������㲻��ͬһ����ͬ��
			res.push_back(E[i]);//���뵽���
			father[faV] = faU;//���ĸ����
			totalCost += E[i].quan;
			//            if (NumEdge == n-1) break; // ���ԭͼ���ɶ��������ɣ���ע����һ��
		}
	}
}
int main()
{
	//��ʼ����
	vector<edge> v1{ edge(1,2,6),edge(1,4,5),edge(1,3,1),edge(2,5,3),edge(3,5,6),edge(2,3,5),edge(3,6,4),edge(3,4,5),edge(4,6,2),edge(5,6,6)};
	random_shuffle(v1.begin(), v1.end());
	for (int i = 0;i < v1.size();i++)
	{
		cout << "��" << v1[i].u << "����" << "��" << v1[i].v << "����,������" << v1[i].quan << endl;
	}
	cout << "-------------------------------" << endl;
	int n = 6;
	int m = 10;
	vector<edge> v3;
	float sum = 0;
	Kruskal(n, m, v1, v3, sum);
	cout << "u\t" << "v\t" << "w" << endl;
	for (int i = 0;i < v3.size();i++)
	{
		cout << v3[i].u << "\t" << v3[i].v << "\t" << v3[i].quan << endl;
	}
	cout << "�ܺ�Ϊ:" << endl;
	cout << sum << endl;
	cout << "��211 ������ 212555" << endl;
}