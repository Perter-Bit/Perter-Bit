#include<iostream>
using namespace std;
//�����㷨
//������������
//void shengxu(int* arr,int length)
//{
//	for (int i = 1;i < length;i++)
//	{
//		int key = arr[i];//���Ա���arr[i]��ֵ
//		int	j = i - 1;
//		while(j >= 0 && key < arr[j])//��key��ֵ�ó���i���������е�ÿһ��ֵ���бȽϣ�ֱ���ҵ�һ������С�Ļ��ߵ�ͷΪֹ����ʱ��ԭ��Ϊkey��ֵ
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j+1] = key;//���λ�õ�ֵΪkeyֵ��ʹ��key��ֵ���Է��õ���ȷ��λ��
//	}
//}
////���ս�������
//void jiangxu(int arr[], int length)
//{
//	for (int i = 1;i < length;i++)
//	{
//		int key = arr[i];//���Ա���arr[i]��ֵ
//		int	j = i - 1;
//		while (j >= 0 && key >= arr[j])//��key��ֵ�ó���i���������е�ÿһ��ֵ���бȽϣ�ֱ���ҵ�һ������С�Ļ��ߵ�ͷΪֹ����ʱ��ԭ��Ϊkey��ֵ
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;//���λ�õ�ֵΪkeyֵ��ʹ��key��ֵ���Է��õ���ȷ��λ��
//	}
//}
//void print(int arr[], int length)
//{
//	for (int i = 0;i < length;i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	int arr[10] = { 10,16,2,18,12,12,132,5,6,8 };
//	shengxu(arr, 10);
//	print(arr, 10);
//	jiangxu(arr, 10);
//	print(arr, 10);
//}
//2.1 - 4 ���ǰ�����nλ���������������������⣬�����������ֱ�洢������nԪ����A��B
//�С������������ĺ�Ӧ����������ʽ�洢��һ��(n + 1)Ԫ����C�С���������������ʽ����������д��α���롣
//double power(int x,int n)//���һ����x��n�η��ĺ���
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	while (n>1)
//	{
//		x *= 2;
//		n--;
//	}
//	return x;
//}
////void jiashang(int arr3[], int arr[],int n)
////{
////	int x = sizeof(arr) / 4;
////	for (int i = x;i < n;i++)
////	{
////		arr3[i] = arr[i];
////	}
////}
//void xiangjia(int arr1[], int arr2[], int arr3[], int n)
//{
//	int i = 0;
//	for (;i < n - 1/*(sizeof(arr1) < sizeof(arr2)) ? sizeof(arr1) / 4 : sizeof(arr2) / 4*/;i++)
//	{
//		arr3[i] += (arr1[i] + arr2[i]);
//		if (arr3[i] > 1)//��λ
//		{
//			arr3[i + 1] += 1;
//			arr3[i] = 0;
//		}
//	}
//	/*if (sizeof(arr1) < sizeof(arr2))
//	{
//		jiashang(arr3, arr2,n);
//	}
//	else
//	{
//		jiashang(arr3, arr1, n);
//	}*/
//}
//int shuchu(int arr[],int n)//�������Ƶ���ʮ�������
//{
//	int sum = 0;
//	for (int x = 0;x < n;x++)
//	{
//		sum += arr[x] * power(2, x);
//	}
//	return sum;
//}
//int main()
//{
//	int arr1[5] = { 1,0,1,0,1 };
//	int arr2[5] = { 1,0,1,0,0 };
//	int arr3[6] = { 0,0,0,0,0,0 };
//	xiangjia(arr1, arr2, arr3, 6);
//	double x = shuchu(arr3, 6);
//	cout << x << endl;
//}
//2.2-3��������洢������A�е�n����:�����ҳ�A�е���СԪ�ز�������A[1]�е�Ԫ�ؽ����н��������ţ��ҳ�A�еĴ���СԪ��
//�������� A[2]�е�Ԫ�ؽ��н�������A��ǰn - 1
//��Ԫ�ذ��÷�ʽ���������㷨��Ϊѡ���㷨��д����α���롣���㷨ά�ֵ�ѭ������ʽ��ʲô ?
//  Ϊʲô��ֻ��Ҫ��ǰn - 1��ԪԪ�أ������Ƕ�����n��Ԫ������ ? ���ռǺŸ���ѡ�����������������������ʱ
//void swap(int &x1, int &x2)
//{
//	int temp = x1;
//	x1 = x2;
//	x2 = temp;
//}
//void paixu(int arr[],int n)
//{
//	for (int i = 0;i < n-1;i++)
//	{
//		int minx = arr[i];
//		int xiabiao = i;
//		for (int j = i + 1;j < n - 1;j++)
//		{
//			if (arr[j] < minx)
//			{
//				minx = arr[j];
//				xiabiao = j;
//			}
//		}
//		swap(arr[i], arr[xiabiao]);
//	}
//}
//2. 2 - 3 �ٴο������Բ�������(�μ���ϰ 2.1 - 3)���ٶ�Ҫ���ҵ�Ԫ�صȿ��ܵ�Ϊ�����е�����Ԫ
//�䡣
//�أ�ƽ����Ҫ����������еĶ���Ԫ�� ? ƽ���������������ʱ�䡣֤�����