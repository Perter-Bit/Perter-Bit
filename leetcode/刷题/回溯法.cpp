//#include<iostream>
//#include<vector>
//using namespace std;
////vector<int> lujing;
////vector<int> nowlujing;
////vector<vector<int>> v9;
////int max1 = 0;
////int nowwight = 0;
////int nowmax = 0;
////01��������
////void jiance(vector<int> v)
////{
////	for (int i = 0;i<v.size();i++)
////	{
////		cout <<"����ĵ�"<<i+1<<"����Ʒ��ֵ��:" <<v[i] <<endl;
////	}
////	cout << endl;
////}
////void backtracing(vector<int> v1, vector<int> v2, int num, int capacity,int startindex)//v1�Ǽ�ֵ��v2������
////{
////	if (nowwight > capacity)
////	{
////		cout << endl;
////		cout << "�����" << startindex << "����Ʒʹ�÷������Ʒ���������ڱ�������,���м�֦" << endl;
////		return;
////	}
////	if (nowmax > max1)
////	{
////		lujing = nowlujing;
////		max1 = nowmax;
////	}
////	for (int i = startindex;i < num;i++)
////	{
////		nowmax += v1[i];
////		nowwight += v2[i];
////		nowlujing.push_back(v1[i]);
////		cout << "�����" << i + 1 << "����Ʒ ";
////		backtracing(v1, v2, num, capacity, i+1);
////		cout << "ȡ����" << i + 1 << "����Ʒ" << endl;
////		cout << "----------------------------" << endl;
////		nowlujing.pop_back();
////		nowmax -= v1[i];
////		nowwight -= v2[i];
////	}
////	return;
////}
////int main()
////{
////	int num;
////	int capacity;
////	cout << "��������Ʒ����" << endl;
////	cin >> num;
////	cout << "���������Ʒ�ļ�ֵ" << endl;
////	vector<int> v1;
////	int x = 0;
////	for (int i = 0;i < num;i++)
////	{
////		cin >> x;
////		v1.push_back(x);
////	}
////	vector<int> v2;
////	cout << "���������Ʒ������" << endl;
////	for(int i = 0;i<num;i++)
////	{
////		cin >> x;
////		v2.push_back(x);
////	}
////	cout << "�����뱳������" << endl;
////	cin >> capacity;
////	backtracing(v1, v2, num, capacity, 0);
////	jiance(lujing);
////	cout << "���ֵΪ" << max1 << endl;
////	cout << "��211-212555-������" << endl;
////	cout << endl;
////}
////tsp����
//int count1 = 1;//��¼��ǰ����ĳ�������
//int min1 = INT_MAX;
//int nowlength = 0;
//vector<int> lujing;
//vector<int> nowlujing;
//int length = INT_MAX;
//void clear(vector<int> &v)
//{
//	int x = v.size();
//	for (int i = 0;i < x;i++)
//	{
//		v.pop_back();
//	}
//}
//vector<vector<int>> v9;
//vector<int> v10;
//void backtrace(vector<vector<int>> v,int dingdian,int dangqian,vector<int>& used)
//{
//	if (nowlength > min1 && min1!= INT_MAX)
//	{
//		cout << "����������,���м�֦"<< endl;
//		return;
//	}
//	if (count1 == v.size())
//	{
//		//��ʱ���г��о�����,Ӧ�����س�����
//		nowlength += v[dangqian][dingdian];
//		nowlujing.push_back(dingdian);
//		cout << "��ʱ��һ������·��" << endl;
//		if (nowlength < min1)
//		{
//			min1 = nowlength;
//			lujing = nowlujing;
//		}
//		v9.push_back(nowlujing);
//		v10.push_back(nowlength);
//		nowlujing.pop_back();
//		nowlength -= v[dangqian][dingdian];
//		return;
//	}
//	for (int i = 0;i < v.size();i++)
//	{
//		int x = dangqian;
//		if (used[i] == 1)
//		{
//			continue;
//		}
//		nowlength += v[dangqian][i];
//		count1++;
//		dangqian = i;
//		used[i] = 1;
//		nowlujing.push_back(i);
//		cout << "���붥��" << i + 1 << " ";
//		backtrace(v, dingdian, dangqian, used);
//		cout << "ȥ������" << i + 1 << " ";
//		dangqian = x;
//		nowlength -= v[dangqian][i];
//		nowlujing.pop_back();
//		count1--;
//		used[i] = 0;
//	}
//}
//void lujing1(vector<int> v)
//{
//	for (int i = 0;i < v.size();i++)
//	{
//		if (i != v.size() - 1)
//		{
//			cout << v[i] + 1 << "->";
//		}
//		else
//		{
//			cout << v[i] + 1;
//		}
//	}
//	cout << endl;
//}
//void lujing2(vector<vector<int>> v, vector<int> v1)
//{
//	for (int i = 0;i < v.size();i++)
//	{
//		cout << "��" << i + 1 << "��·��Ϊ" << endl;
//		for (int j = 0;j < v[i].size();j++)
//		{
//			if (j != v[i].size() - 1)
//			{
//				cout << v[i][j] + 1 << "->";
//			}
//			else
//			{
//				cout << v[i][j] + 1;
//			}
//		}
//		cout << endl;
//		cout << "����Ϊ" << v1[i] << endl;
//	}
//	cout << endl;
//}
//void zhiling(vector<int> &v)
//{
//	int x = v.size();
//	for (int i = 0;i<x;i++)
//	{
//		v[i] = 0;
//	}
//}
//int main()
//{
//	int num;
//	cout << "��������и���" << endl;
//	cin >> num;
//	vector<int> v1(num, 0);
//	int x = 0;
//	vector<vector<int>> v2(num, v1);//�ڽӾ���
//	cout << "�������ڽӾ���" << endl;
//	for (int i = 0;i < num;i++)
//	{
//		for (int j = 0;j < num;j++)
//		{
//			cin >> x;
//			v2[i][j] = x;
//		}
//	}
//	vector<int> used(num, 0);
//	for (int i = 0;i < num;i++)
//	{
//		nowlujing.push_back(i);
//		used[i] = 1;//�����Ѿ�ѡ��
//		cout << "�Ӷ���" << i + 1 << "����" << endl;
//		backtrace(v2, i,i,used);
//		cout << endl;
//		cout << "���·����" << endl;
//		lujing1(lujing);
//		cout << "���·������Ϊ" << min1 << endl;
//		count1 = 1;
//		min1 = INT_MAX;
//		nowlength = 0;
//		clear(lujing);
//		clear(nowlujing);
//		zhiling(used);
//	}
//	cout << "��211-212555-������ " << endl;
//}