#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<ctime>
#include<vector>
#include<iterator>
#include<unordered_map>
#define N 25
int arr[N][N]; //�ڽӾ��� 
using namespace std;
int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int main()
{
	int i, j, n;
	vector<int> v;//����������·��
	cout << "��������и�����" << "\n";//������и���n 
	while (cin >> n)
	{
		cout << "�������ڽӾ���" << "\n";//����ڽӾ��� 
		for (i = 0;i < n;i++) //����±��1��ʼ 
			for (j = 0;j < n;j++)
				cin >> arr[i][j];
		vector<vector<int>> v1{ {},{1},{2},{3},{1,2},{1,3},{2,3},{2,3,4} };
		vector<int> temp(8, 0);
		vector<vector<int>> d(n, temp);
		for (int i = 0;i < n;i++)//��ʼ�����ĵ�1�� 
		{
			d[i][0] = arr[i][0];
		}
		int min = 100;
		unordered_map<int, int> m1;
		unordered_map<int, int> m2;
		for (int j = 1;j < v1.size()-1;j++)
		{
			for (int i = 1;i < n;i++)
			{
				if (find(v1[j].begin(), v1[j].end(), i) == v1[j].end())
				{
					int a = 0;int b = 0;
					//Ԫ���ڲ����Ӽ���
					for (auto z : v1[j])
					{
						if (v1[j].size() <= 1)
						{
							d[i][j] = arr[i][j] + d[z][0];
							m1[i] = j;
						}
						else
						{
							//ȡ����
							vector<int> v3(1);
							vector<int> v4{ z };
							set_difference(v1[j].begin(), v1[j].end(), v4.begin(), v4.end(), v3.begin());
							vector<vector<int>>::iterator  it = find(v1.begin(), v1.end(), v3);
							vector<vector<int>>::iterator it1 = v1.begin();
							int a = distance(it1, it);
							if (min > arr[i][z] + d[z][a])
							{
								min = arr[i][z] + d[z][a];
								a = i;
								b = z;
							}
							d[i][j] = min;
							m2[a] = b;
						}
					}
				}
			}
		}
		min = 100;
		int c = 0;
		vector<int> v5{ 1,2,3 };
		for (int i = 1;i < n;i++)
		{
			vector<int> v3(2);
			vector<int> v4{ i };
			set_difference(v5.begin(), v5.end(), v4.begin(), v4.end(), v3.begin());
			vector<vector<int>>::iterator  it = find(v1.begin(), v1.end(), v3);
			vector<vector<int>>::iterator it1 = v1.begin();
			int a = distance(it1, it);
			if (min > arr[0][i] + d[i][a])
			{
				min = arr[0][i] + d[i][a];
				c = i;
			}
		}
		d[0][v1.size() - 1] = min;
		for (int i = 0;i < d.size();i++)
		{
			for (int j = 0;j < d[i].size();j++)
			{
				cout << d[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "������Ϊ:" << endl;
		cout << "0->" << c << "->" << m2[c] << "->" << m1[m2[c]] << "->0" << endl;
		cout << "���·������Ϊ:" <<d[0][v1.size()-1]<<endl;
		cout << "��211 ������ 212555" << endl;
	}
}