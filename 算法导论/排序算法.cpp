#include<iostream>
using namespace std;
//void merge(int arr[], int p, int q, int r)//p��q��rΪλ��
//{
//	int x1 = q - p + 1;//
//	int x2 = r - q;
//	int arr1[100];
//	int arr2[100];
//	int i = 0;
//	int j = 0;
//	for (;i < x1;i++)
//	{
//		arr1[i] = arr[p - 1 + i];
//	}
//	arr1[x1] = 1000;
//	for (;j < x2;j++)
//	{
//		arr2[j] = arr[q + j];
//	}
//	arr2[x2] = 1000;
//	int y1;
//	int y2 = 0;
//	int y3 = 0;
//	for (int y1 = p - 1;y1 < r;y1++)
//	{
//		if (arr1[y2] > arr2[y3])
//		{
//			arr[y1] = arr2[y3];
//			y3++;
//		}
//		else
//		{
//			arr[y1] = arr1[y2];
//			y2++;
//		}
//	}
//}
//void merge_sort(int arr[], int p, int r)
//{
//	if (p < r)
//	{
//		int q = (p + r) / 2;
//		merge_sort(arr, p, q);
//		merge_sort(arr, q + 1, r);
//		merge(arr, p+1, q+1, r+1);
//	}
//}
//void quick(int arr[], int size, int lf, int rg)//rg
//{
//	int if_idx;
//	int rg_inx;
//	if(lf<rg)
//	{
//		if_idx = lf + 1;
//		rg_inx = rg;
//	step:
//		for (int i = if_idx;i < size;i++)
//		{
//			if (arr[i] >= arr[lf])
//			{
//				if_idx = i;//��������ѭ�����ҵ���һ�����ڵ���lf��ֵ				break;
//				break;
//			}
//			if_idx++;//������iͬ���Ӽ�
//		}
//		for (int j = rg_inx;j >= lf + 1;j--)
//		{
//			if (arr[j] <= arr[lf])
//			{
//				rg_inx = j;
//				break;
//			}
//			rg_inx--;//����ͬ������
//		}
//		if (if_idx < rg_inx)
//		{
//			//����
//			int tmp = arr[if_idx];
//			arr[if_idx] = arr[rg_inx];
//			arr[rg_inx] = tmp;
//			if_idx++;
//			rg_inx--;
//			goto step;
//		}
//		else
//		{
//			//��ʱi�����Ķ��Ǵ���lf��,jǰ�Ķ���С��lf��
//			int tmp = arr[lf];
//			arr[lf] = arr[rg_inx];
//			arr[rg_inx] = tmp;
//			quick(arr, size, lf, rg_inx - 1);//lf�Ҳ����
//			quick(arr, size, rg_inx + 1, rg);//lf���
//		}
//	
//	}
//}
void jishu(int arr[], int size)
{
	for (int n = 1;n <= 100;n = n * 10)//nΪ��������n=1��ʼ
	{
		int tmp[10][100] = { 0 };//10��ʾ0-9,100��ʾ��ŵ����ݸ���
		for (int i = 0;i < size;i++)
		{
			int m = (arr[i] / n) % 10;//n����1��ʾ��������ֵĸ�λ������10ʱ�����ʮλ
			tmp[m][i] = arr[i];//�����ݷ��뵽tmp��
		}//��ӵĽ����ݸ��ݸ�λ���ֽ���������
		int k = 0;
		int i = 0;
		for (int i = 0;i < 10;i++)
		{
			for (int j = 0;j < size;j++)
			{
				if (tmp[i][j] != 0)
				{
					//˵����λ�������ݴ���
					arr[k] = tmp[i][j];
					k++;
				}
			}
		}
	}
}
void shuchu(int arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}
int main()
{
	int arr[] = { 16,25,39,27,12,8,45,63 };
	int size = sizeof(arr) / sizeof(arr[0]);
	/*maopao(arr,size);*/
	///*xuanze(arr, size);*/
	//charu(arr, size);
	/*xier(arr, size);*/
	/*merge_sort(arr, 0, 7);*/
	/*quick(arr, 8, 0, 7);*/
	jishu(arr, 8);
	shuchu(arr, size);
}
