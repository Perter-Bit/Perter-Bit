#include<iostream>
using namespace std;
//2.3 - 2��д���� MERGE��ʹ֮��ʹ���ڱ�������һ������L��R������Ԫ�ؾ������ƻ�A������ֹͣ������һ�����ʣ�ಿ�ָ��ƻ�A��2��
//ע��:�����p��q��Ϊ�ڼ���Ԫ��
//void merge(int arr[], int p, int q, int r)//p��q�ֱ�Ϊ��������Ŀ�ʼ
//{
//	int x1 = q - p + 1;//[p,q]
//	int x2 = r - q;//[q+1,r]
//	int arr1[100];//�����ڱ�
//	int arr2[100];
//	int i = 0;
//	for (i = 0;i < x1;i++)
//	{
//		arr1[i] = arr[p + i - 1];
//	}
//	//arr1[i] = 1000000;//�ڱ�
//	int j = 0;
//	for (j = 0;j < x2;j++)
//	{
//		arr2[j] = arr[q + j];
//	}
//	//arr2[j] = 1000000;//�ڱ�
//	int x = 0;int y = 0;
//	int z = 0;
//	for (z = p - 1;z < r && x<x1 && y < x2;z++)//���������Ƚϣ���С�ķ��뵽�������У������������ڱ�����˲����ж��Ƿ����
//	{
//		if (arr1[x] > arr2[y])
//		{
//			arr[z] = arr2[y];
//			y++;
//		}
//		else
//		{
//			arr[z] = arr1[x];
//			x++;
//		}
//	}
//	if (x == x1)
//	{
//		//��ʱarr1�����Ѿ�ȫ�����ƹ�ȥ
//		for (int i = y;i < x2;i++)
//		{
//			arr[z] = arr2[i];
//			z++;
//		}
//	}
//	else
//	{
//		for (int i = x;i < x1;i++)
//		{
//			arr[z] = arr1[i];
//			z++;
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
//		merge(arr, p, q, r);
//	}
//}
//void shuchu(int arr[], int length)
//{
//	for (int i = 0;i < length;i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	int arr[] = { 5,2,3,5,2,4,5,7,1,2,3,6,5,9,6 };
//	merge_sort(arr, 0, 15);
//	shuchu(arr, 15);
//}
//��������
//����汾
//void charu(int arr[], int length)
//{
//	for (int i = 1;i < length;i++)
//	{
//		int key = arr[i];
//		int j = i - 1;
//		while(key < arr[j] && i>=0)
//		{
//			arr[j+1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
////���ֲ���
//��ʼ����ָֹ�Ķ����±�
//int search(int nums[], int size, int left,int target) //nums�����飬size������Ĵ�С��target����Ҫ���ҵ�ֵ
//{
//	int right = size - 1;	// ������target������ұյ������ڣ�[left, right]
//	while (left <= right) {	//��left == rightʱ������[left, right]��Ȼ��Ч
//		int middle = left + ((right - left) / 2);//��ͬ�� (left + right) / 2����ֹ���
//		if (nums[middle] > target) {
//			right = middle - 1;	//target�������䣬����[left, middle - 1]
//		}
//		else if (nums[middle] < target) {
//			left = middle + 1;	//target�������䣬����[middle + 1, right]
//		}
//		else {	//�Ȳ�����ߣ�Ҳ�����ұߣ��Ǿ����ҵ�����
//			return middle;
//		}
//	}
//	//û���ҵ�Ŀ��ֵ
//	return -1;
//}
//int binarySearch(int a[], int x, int left, int right)
//{
//	int mid = (left + right) / 2;
//	if (a[mid] < x)
//	binarySearch(a, x, mid + 1, right);
//	else if (a[mid] == x)
//		return mid;
//	else if (a[mid] > x)
//		binarySearch(a, x, left, mid - 1);
//	else if (left > right)
//		return -1;//��ʾû���ҵ�
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6};
//	charu(arr, 6);
//	/*int x = search(arr, 6, 6);*/
//	int x = binarySearch(arr,6,0,5);
//	cout << x << endl;
//}
//2.3 - 7 ����һ������ʱ��Ϊ(nlgn)���㷨������n�������ļ���S����һ������x, ���㷨��ȷ��S���Ƿ����������͸պ�Ϊx��Ԫ�ء�
//��ʹ��merge-sort����ʹ�ö��ֲ���
//���ֲ�����lgn,forѭ����n����˵Ļ���n*lgn,��merge_sortҲ��n*lgn,���������ӣ���������
//int main()
//{
//	int arr[] = { 15,20,12,3,5,6,2,15,18 };
//	merge_sort(arr,0,9);
//	for (int i = 0;i < 9;i++)
//	{
//		if (arr[i] < 18)
//		{
//			int z = search(arr, 9, i + 1, 18 - arr[i]);
//			if (z!=-1)
//			{
//				cout << arr[z] << endl;
//				cout << arr[i] << endl;
//				break;
//			}
//		}
//	}
//}
//���صĶ���ʽ��ֵ��
//int power(int x,int i)//��x��i�η�
//{
//	int s = x;
//	if (i == 0)
//	{
//		return 1;
//	}
//	for (int z = 1;z < i;z++)
//	{
//		x *= s;
//	}
//	return x;
//}
//int qiuhe(int arr[], int x)//����arr�д�ŵ��ǳ���ax
//{
//	int sum = 0;
//	int size = sizeof(arr) / sizeof(int);
//	for (int i = 0;i < size;i++)
//	{
//		sum += arr[i] * power(x, i);
//	}
//}
//2 - 4 ������ԣ� ����A[1...n] ��һ����n����ͬ���õ����顣��i<j��A[i]>A[j], ���ż(i, j) ��ΪA��һ�������(inversion)
//a.�г������5�������
//b.�ɼ����е�Ԫ�ع��ɵ�ʲô���������������ԣ����ж�������ԣ�
//c.�������������ʱ������������������Ե�����֮����ʲô��ϵ��֤����Ļش�
//d.����һ��ȷ����n��Ԫ�ص��κ�������������������㷨��������Ҫnlgn ʱ�䡣����ʾ���޸Ĺ鲢����
//ʹ�ù鲢����
int merge(int arr[], int p, int q, int r)
{
	int sum = 0;
	int x1 = q - p + 1;
	int x2 = r - q;
	int arr1[100];
	int arr2[100];
	int i = 0;
		int j = 0;
	for (int i = 0;i < x1;i++)
	{
		arr1[i] = arr[p - 1 + i];
	}
	for (int j = 0;j < x2;j++)
	{
		arr2[j] = arr[q+i];
	}
	int y1 = 0;
	int y2 = 0;
	int y3 = 0;
	bool x = false;
	for (y1 = p - 1;y1 <= r-1 && y2<x1 && y3<x2 ;)
	{
		/*int z = y3;*/
		while(arr1[y2] > arr2[y3] && y2 < x1 && y3 < x2)
		{
			arr[y1] = arr2[y3];
			/*if (!x)
			{
				arr[y1] = arr2[y3];
			}*/
			x = true;
			y1++;
			y3++;
		}
		if (x)
		{
			sum += y3;
			x = false;
			//y3 = z;
			//y3++;
		}
		if(arr1[y2] <= arr2[y3] && y2 < x1 && y3 < x2)
		{
			arr[y1] = arr1[y2];
			y2++;
			y1++;
		}
	}
	if (x1 == y2)
	{
		for (int i = y3;i < x2;i++)
		{
			arr[y1] = arr2[i];
		}
	}
	else
	{
		for (int i = y2;i < x1;i++)
		{
			arr[y1] = arr1[i];
		}
	}
	return sum;
}
int merge_sort(int arr[], int p, int r)
{
	int sum= 0;
	if (p < r)
	{
		int q = (p + r) / 2;
		sum += merge_sort(arr, p, q);
		sum += merge_sort(arr, q + 1, r);
		sum += merge(arr, p+1, q+1, r+1);
	}
	return sum;
}
int main()
{
	int arr[] = {10,2,5,4,5,6};
	int sum = merge_sort(arr, 0, 5);
	cout << sum << endl;
}

