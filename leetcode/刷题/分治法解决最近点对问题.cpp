#include<iostream>
#include<vector>
#include <windows.h>
#include<algorithm>
using namespace std;
void diandui(vector<vector<int>>& v,int n)//n��Ҫ���ɵĵ����
{
	/*srand((unsigned)time(NULL));*/
	for (int i = 0;i < n;i++)
	{
		auto a = rand() % 100;
		auto b = rand() % 100;
		v.push_back({ a,b });
	}
	cout << n << "��������ɳɹ�" << endl;
}
int x11;
int y11;
int x22;
int y22;
//���������ľ���
int length(vector<int> v1, vector<int> v2)
{
	int len = 0;
	len = pow(v1[0] - v2[0], 2) + pow(v2[1] - v1[1], 2);
	return len;
}
void manlifa(vector<vector<int>> v)
{
	int min = INT_MAX;
	int x = 0;
	int y = 0;
	for (int i = 0;i < v.size()-1;i++)
	{
		for (int j = i + 1;j < v.size();j++)
		{
			if (length(v[i], v[j]) < min)
			{
				min = length(v[i], v[j]);
				x = i;
				y = j;
			}
		}
	}
	cout << "��̾�����" << sqrt(min) << endl;
	cout << "��������" << "(" << v[x][0] << "," << v[x][1] << "),"<< "(" << v[y][0] << "," << v[y][1] << ")" << endl;
}
int zhongweishu(vector<vector<int>> &v)//��vector����x�����˳���������
{
	sort(v.begin(), v.end());
	int size = v.size();
	if (size % 2 == 0)
	{
		return v[(size / 2 -1)][0];
	}
	return v[(size/2)][0];
}
int min1(int a, int b)
{
	return a > b ? a : b;
}
double fenzhi(vector<vector<int>> v)
{
	int n = v.size();
	if (n < 2)//nС��2ʱ����
	{
		return 0;
	}
	int m = zhongweishu(v);
	vector<vector<int>> v1;
	vector<vector<int>> v2;
	for (int i = 0;i < v.size();i++)
	{
		if (v[i][0] <= m)
		{
			v1.push_back(v[i]);//v1�е�x��С�ڵ���m
		}
		else
		{
			v2.push_back(v[i]);//v2�е�x������m
		}
	}
	double d1 = fenzhi(v1);
	double d2 = fenzhi(v2);
	double dm;
	if ((d1 == d2) && d1 == 0)
	{
		//˵����ʱ�������ϸ�ֻ��һ����
		dm = (length(v1[0], v2[0]));
		return dm;
	}
	else if (d1 == 0 && d2 != 0)
	{
		dm = d2;
	}
	else if (d1 != 0 && d2 == 0)
	{
		dm = d1;
	}
	else
	{
		dm = min(d1, d2);
	}
	//�ָ���m
	v1.clear();
	v2.clear();
	for (int i = 0;i < v.size();i++)
	{
		if (abs(m - v[i][0]) <sqrt(dm) && v[i][0]<=m)
		{
			v1.push_back(v[i]);//v1�д�ŵ��Ǿ���ָ���m����С��dm�ĵ�
		}
		else if(abs(v[i][0]-m) < sqrt(dm))
		{
			v2.push_back(v[i]);//v2ͬ��
		}
	}
	if (v2.empty() || v1.empty())//v2����v1���п�
	{
		return dm;
	}
	for (int i = 0;i < v1.size();i++)
	{
		for (int j = 0;j < v2.size();j++)
		{
			if (dm > length(v1[i], v2[j]))
			{
				dm = length(v1[i], v2[j]);
				x11 = v1[i][0];
				y11 = v1[i][1];
				x22 = v2[j][0];
				y22 = v2[j][1];
			}
		}
	}
	return dm;
}
//void printf(vector<vector<int>> v)
//{
//	for (auto v1 : v)
//	{
//		cout << "(" << v1[0] << "," << v1[1] << ")" << " ";
//	}
//}
int main()
{
	vector<vector<int>> v;
	diandui(v, 10);//����100�����
	//printf(v);
	DWORD Start = GetTickCount();
	manlifa(v);
	//����������ĳ������
	DWORD End = GetTickCount();
	cout << "����ʱ����" << End - Start << endl;
	DWORD Start1 = GetTickCount();
	int a = fenzhi(v);
	DWORD End1 = GetTickCount();
	cout << "��̾�����" << sqrt(a)<< endl;
	cout << "��������" << "(" << x11 << "," << y11 << ")," << "(" << x22 << "," << y22 << ")" << endl;
	cout << "����ʱ����" << End - Start << endl;
}