//#include<iostream>
//#include<vector>
//using namespace std;
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
//	//����m���߼��ӵ���n��
//	for (int i = 0;i<v.size();i++)
//	{
//		v[n][i] = luojijia(v[m][i], v[n][i]);
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
//				//����i�мӵ���j��
//				xiangjia(v, i, j);
//			}
//		}
//	}
//}
//void panduan(vector<vector<int>> v1)
//{
//	int size = v1.size();
//	//�ж��Ƿ����Է���
//	bool op = true;
//	cout << "-------------------------" << endl;
//	for (int i = 0;i < v1.size();i++)
//	{
//		if (v1[i][i] == 0)
//		{
//			cout << "�����Է���" << endl;
//			op = false;
//			break;
//		}
//	}
//	if (op)
//	{
//		cout << "���Է���" << endl;
//	}
//	cout << "-------------------------" << endl;
//	op = true;
//	for (int i = 0;i < v1.size();i++)
//	{
//		if (v1[i][i] == 1)
//		{
//			cout << "���Ƿ��Է���" << endl;
//			op = false;
//			break;
//		}
//	}
//	if (op)
//	{
//		cout << "�Ƿ��Է���" << endl;
//	}
//	cout << "-------------------------" << endl;
//	op = true;
//	for (int i = 0;i < v1.size();i++)
//	{
//		for (int j = i + 1;j < v1.size();j++)
//		{
//			if (v1[i][j] != v1[j][i])
//			{
//				cout << "���ǶԳƵ�" << endl;
//				op = false;
//				break;
//			}
//		}
//		if (op == false)
//		{
//			break;
//		}
//	}
//	if (op)
//	{
//		cout << "�ǶԳƵ�" << endl;
//	}
//	cout << "-------------------------" << endl;
//	op = true;
//	for (int i = 0;i < v1.size();i++)
//	{
//		for (int j = 0;j < v1.size();j++)
//		{
//			if (v1[i][j] == v1[j][i] &&v1[i][j] == 1 && i != j)
//			{
//				cout << "���Ƿ��ԳƵ�" << endl;
//				op = false;
//				break;
//			}
//		}
//		if (op == false)
//		{
//			break;
//		}
//	}
//	if (op)
//	{
//		cout << "�Ƿ��ԳƵ�" << endl;
//	}
//	cout << "-------------------------" << endl;
//	vector<vector<int>> v2 = v1;
//	t(v2);
//	if (v2 == v1)
//	{
//		cout << "�Ǵ��ݵ�" << endl;
//	}
//	else
//	{
//		cout << "���Ǵ��ݵ�" << endl;
//	}
//	cout << "-------------------------" << endl;
//}
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
//	panduan(v1);
//}