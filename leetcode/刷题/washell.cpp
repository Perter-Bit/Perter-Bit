//#include<iostream>
//#include<vector>
//using namespace std;
////ʵ��Ҫ��:�Ӽ�������ͼ���ڽӾ����һ������m������������֮�䳤��Ϊm��·����Ŀ����������ͼ������ͼ��
//void printf(vector<vector<int>> v)
//{
//	for (int i = 0;i < v.size();i++)
//	{
//		for (auto z : v[i])
//		{
//			cout << z << " ";
//		}
//		cout << endl;
//	}
//}
//void quni(vector<vector<int>> &v)
//{
//	for (int i = 0;i < v.size();i++)
//	{
//		for (int j = 0;j<i;j++)
//		{
//			if (v[i][j] != v[j][i])
//			{
//				int temp = v[i][j];
//				v[i][j] = v[j][i] ;
//				v[j][i] = temp;
//			}
//
//		}
//	}
//}
//int luojijia(int a, int b)
//{
//	if (a == 1 || b == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void xiangjia(vector<vector<int>> &v, int m, int n)
//{
//	/*����m���߼��ӵ���n��*/
//	for (int i = 0;i<v.size();i++)
//	{
//		v[n][i] = luojijia(v[m][i], v[n][i]);
//	}
//}
//void xiangjia1(vector<vector<int>>& v1, vector<vector<int>> v2)
//{
//	for (int i = 0;i < v1.size();i++)
//	{
//		for (int j = 0;j < v1.size();j++)
//		{
//			v1[i][j] = luojijia(v1[i][j], v2[i][j]);
//		}
//	}
//}
//void t(vector<vector<int>> &v)
//{
//	for (int i = 0;i < v.size();i++)
//	{
//		for (int j = 0;j < v.size();j++)
//		{
//			if (v[j][i] == 1)
//			{
//				/*����i�мӵ���j��*/
//				xiangjia(v, i, j);
//			}
//		}
//	}
//}
//void bibao(vector<vector<int>> v)
//{
//	cout << "-----------------" << endl;
//	cout << "�Է��հ���" << endl;
//	vector<vector<int>> v1 = v;
//	for (int i = 0;i < v.size();i++)
//	{
//		v[i][i] = luojijia(i, 1);
//	}
//	printf(v);
//	cout << "-----------------" << endl;
//	cout << "�ԳƱհ���" << endl;
//	vector<vector<int>> v2 = v1;
//	vector<vector<int>> v3 = v1;
//	quni(v3);
//	xiangjia1(v2, v3);
//	printf(v2);
//	cout << "-----------------" << endl;
//	cout << "���ݱհ���" << endl;
//	vector<vector<int>> v4 = v1;
//	t(v4);
//	printf(v4);
//}
//int main()
//{
//	int n;
//	cout << "�������ϵ���������(����)" << endl;
//	cin >> n;
//	vector<int> v(n, 0);
//	vector<vector<int>> v1(n, v);
//	cout << "�������ϵ����" << endl;
//	int x;
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n;j++)
//		{
//			cin >> x;
//			v1[i][j] = x;
//		}
//	}
//	/*printf(v1);*/
//	bibao(v1);
//}