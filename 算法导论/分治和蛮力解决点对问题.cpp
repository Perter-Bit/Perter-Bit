//#include<iostream>
//#include<vector>
//using namespace std;
///*����������*/
//#include<stdlib.h>
//#include<iostream>
//#include<algorithm>
//#include<math.h>
//#include<ctime>
//using namespace std;
////����(x,y)
//struct node {
//	int x;
//	int y;
//};
//
////���������
//void creatpoint(node s[], int num)
//{
//	/*srand((unsigned)time(NULL));*/
//	for (int i = 0;i < num;i++)
//	{
//		s[i].x = rand() % 1000;
//		s[i].y = rand() % 1000;
//	}
//	cout << "���������ɳɹ�" << endl;
//	/*for (int i = 0;i < num;i++)
//	{
//		cout << "(" << s[i].x << "," << s[i].y << ")  ";
//	}*/
//	cout << endl;
//}
//
////������
//double distances(node a, node b)
//{
//	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));//sqrt�������ƽ����
//}
//
///*��������������*/
//bool cmpx(node& a, node& b)
//{
//	return a.x < b.x;
//}
//
///*��y������������*/
//bool cmpy(node& a, node& b)
//{
//	return a.y < b.y;
//}
//
////���η�
//double fenzhi(node s[], int low, int high)
//{
//
//	double d1, d2, d3, d;
//	int mid, i, j, index;
//	node p[101];//�ܵ㼯
//	node minp1, minp2;
//	if (high - low == 1)
//	{
//		return distances(s[low], s[high]);
//	}
//	if (high - low == 2)
//	{
//		d1 = distances(s[low], s[low + 1]);
//		d2 = distances(s[low + 1], s[high]);
//		d3 = distances(s[low], s[high]);
//		if ((d1 < d2) && (d1 < d3))
//			return d1;
//		else if (d2 < d3) return d2;
//		else return d3;
//	}
//	mid = (low + high) / 2;//�����м��
//	d1 = fenzhi(s, low, mid);//�ݹ������
//	d2 = fenzhi(s, mid + 1, high);//�ݹ������
//	if (d1 < d2) d = d1;
//	else d = d2;
//	index = 0;
//	for (i = mid;(i >= low) && (s[mid].x - s[i].x < d);i--)//����p1 
//	{
//		p[index++] = s[i];
//	}
//	for (i = mid + 1;(i <= high) && (s[i].x - s[mid].x < d);i++)//����p2 
//	{
//		p[index++] = s[i];
//	}
//	sort(p, p + index, cmpy);//�Լ���p1��p2��y������������ 
//	for (i = 0;i < index;i++)
//	{
//		for (j = i + 1;j < index;j++)
//		{
//			if (p[j].y - p[i].y >= d)
//				break;
//			else {
//				d3 = distances(p[i], p[j]);
//				if (d3 < d)
//				{
//					d = d3;
//					minp1 = p[i];
//					minp2 = p[j];
//				}
//			}
//		}
//		return d;
//	}
//
//}
//
///*���������*/
//void force(node p[], int length)
//{
//	int i, j;
//	double min, temp;
//
//	node minp1 = p[0];
//	node minp2 = p[1];
//
//	min = distances(p[0], p[1]);
//	for (i = 0;i < length - 1;i++)
//	{
//		for (j = i + 1;j < length;j++)
//		{
//			temp = distances(p[i], p[j]);
//			if (temp < min) {
//				min = temp;
//				minp1 = p[i];
//				minp2 = p[j];
//			}
//		}
//	}
//	cout << endl;
//	cout << endl;
//	cout << "������Ϊ" << endl;
//	cout << "(" << minp1.x << ")" << "(" << minp1.y << ")��" << "(" << minp2.x << ")" << "(" << minp2.y << ")" << endl;
//	cout << "******" << endl;
//	cout << "������" << endl;
//	cout << "******" << endl;
//	cout << "�������Ϊ: " << min << endl;
//	cout << endl;
//}
//int main()
//{
//	node s[1001];
//	creatpoint(s, 1000);//�������100����
//
//	//���������
//	time_t b1, e1;
//	double t1;
//	b1 = clock();
//
//	force(s, 1000);
//
//	int m = 10000000;
//	while (m)
//	{
//		m--;
//	}
//	e1 = clock();
//	t1 = double(e1 - b1);
//
//	cout << "����ʱ�� " << t1 << "ms" << endl;
//	//���η� 
//	time_t b2, e2;
//	double t2;
//	b2 = clock();
//	cout << "******" << endl;
//	cout << "���η�" << endl;
//	cout << "******" << endl;
//	double n;
//	sort(s, s + 1000, cmpx);//��x���򽫵㼯���� 
//	 n = fenzhi(s, 0, 1000);
//	cout << "�������Ϊ " << endl;
//	cout << n << endl;
//	int k = 10000000;
//	while (k)
//	{
//		k--;
//	}
//	e2 = clock();
//	t2 = double(e2 - b2);
//	cout << "����ʱ�� " << t2 << "ms" << endl;
//	cout << "��211" << " " << "������" << " " << "212555" << endl;
//	return 0;
//}