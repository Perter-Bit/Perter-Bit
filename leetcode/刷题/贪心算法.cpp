//#include <iostream>
//#include<vector>
//using namespace std;
//#define N 5
//#define M 9999999 
//void tanxin(int n, int v, int dist[], int p[], int c[][N + 1])//v��Դ��
//{
//	bool s[N + 1];//���㼯��S
//	for (int i = 1; i <= n; i++) {
//		dist[i] = c[v][i];//��Դ�㵽����i���������·������
//		s[i] = false;
//		if (dist[i] == M) 
//		{
//			p[i] = 0;//��Դ�㵽����i�����·����ǧһ������ 
//		}
//		else
//		{
//			p[i] = v;
//		}
//	}
//	dist[v] = 0;//��Դ�㵽Դ��ľ���Ϊ0
//	s[v] = true;//s[i]Ϊtrue����ö����Ѿ����뵽���ǵĽ������
//	for (int i = 1; i < n; i++) {
//		int temp = M;
//		int u = v;//��һ����
//		//�ҵ������������·�����ȵĶ���u
//		for (int j = 1; j <= n; j++) {
//			if ((!s[j]) && (dist[j] < temp))
//			{
//				u = j;//��Ϊ��һ������
//				temp = dist[j];
//			}
//		}
//		s[u] = true;//��ʾ���ö����·���Ѿ������
//		//����distֵ
//		for (int j = 1; j <= n; j++) 
//		{
//			if ((!s[j]) && c[u][j] < M)
//			{
//				int newdist = dist[u] + c[u][j];
//				if (newdist < dist[j]) 
//				{
//					dist[j] = newdist;
//					p[j] = u;
//				}
//			}
//		}
//	}
//}
////������·��vԴ�㣬i�յ� 
//void Traceback(int v, int i, int p[])
//{
//	//Դ������յ㣬���ҳ�ȫ��·��
//	if (v == i) 
//	{
//		cout << i;
//		return;
//	}
//	Traceback(v, p[i], p);
//	cout << "->" << i;
//}
//int main() 
//{
//	int v = 1;//��Դ��Ϊ1
//	int dist[N + 1];//��Դ�㵽����i���������·������,dist[i]��ʾ��Դ�㵽����i�����·��
//	int p[N + 1]; //��¼����·���µĶ���ĸ��ӹ�ϵ
//	//�����Ȩ����ͼ���ڽӾ���,�к��д��±��1��ʼ 
//	int c[N + 1][N + 1];
//	//�����Ȩ����,����ô���ֵΪ-1��ʾ����֮���ޱ�
//	cout << "��Ȩ����ͼ���ڽӾ���Ϊ��" << endl;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> c[i][j];
//			if (c[i][j] == -1) {
//				c[i][j] = M;
//			}
//		}
//	}
//	//Ѱ�����·�� 
//	tanxin(N, v, dist, p, c);
//	//���
//	for (int i = 1;i < 5;i++)
//	{
//		cout << "Դ��1��Դ��"<<i+1<<"�����·������Ϊ��" << dist[i+1] << endl;
//		cout << "·��Ϊ��" << endl;
//		Traceback(1, i+1, p);
//		cout << endl;
//	}
//	cout << "��211-212555-������" << endl;
//	return 0;
//}