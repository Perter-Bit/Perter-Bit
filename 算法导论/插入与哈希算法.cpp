#include<iostream>
using namespace std;
//void bin_search(int data[], int val,int size)//val������Ҫ���ҵ�Ԫ��,size������Ĵ�С
//{
//	int low = 0;
//	int high = size - 1;
//	while (low <= high && val != -1)
//	{
//		int mid = (high + low) / 2;
//		if (val > data[mid])
//		{
//			//��ʱ˵��������midλ�õ��ұ�
//			low = mid + 1;
//		}
//		else if (val < data[mid])
//		{
//			//��ʱ˵����midλ�õ����
//			high = mid - 1;
//		}
//		else
//		{
//			//��ʱ�ҵ�������Ҫ��Ԫ��
//			cout << "�ҵ���,Ԫ��Ϊ" <<data[mid]<< endl;
//			return;
//		}
//	}
//	cout << "��ϧû���ҵ�" << endl;
//}
void bin_search(int data[], int val,int size)//�Ľ��棬��������
{
	int low = 0;
	int high = size - 1;
	while (low <= high && val != -1)
	{
		int mid = low + (high - low) * (val - data[low]) / (data[high] - data[low]);
		if (val > data[mid])
		{
			//��ʱ˵��������midλ�õ��ұ�
			low = mid + 1;
		}
		else if (val < data[mid])
		{
			//��ʱ˵����midλ�õ����
			high = mid - 1;
		}
		else
		{
			//��ʱ�ҵ�������Ҫ��Ԫ��
			cout << "�ҵ���,Ԫ��Ϊ" <<data[mid]<< endl;
			return;
		}
	}
	cout << "��ϧû���ҵ�" << endl;
}
int main()
{
	int arr[] = { 10,20,30,5,12 };
	bin_search(arr, 12, 5);
	return 0;
}