#include<iostream>
using namespace std;
int output[1000] = { 0 };
//int fin(int n)
//{
//	int result;
//	result = output[n];
//	if (result == 0)
//	{
//		//˵����ʱ��δ�ݹ鵽��ֵ
//		if (n == 0)
//		{
//			return 0;
//		}
//		if (n == 1)
//		{
//			return 1;
//		}
//		else
//		{
//			//�����ݹ�
//			return (fin(n - 1) + fin(n - 2));
//		}
//		output[n] = result;//��¼��ֵ�����
//	}
//	return result;//��ʱ˵����ֵ�������,ֱ�ӷ��ؼ���
//}
//int main()
//{
//	int a = fin(4);
//	cout << a << endl;
//}
//�������Թ���Ϸ
//���������ö�ջ,�ߵ���ÿһ����ʹ�ö�ջ��¼����ʱ��ջ��ָ���ָ���������ĵ�ǰλ��,�����λ���ĸ�����������ߣ��򽫸�λ�ñ�ǲ��ҳ�ջ���˻ص���һ��Ԫ�ؼ�������ѡ��
//typedef struct list
//{
//	int x, y;//x,y��������
//	struct list* next;//ָ��
//}Lnode,*linklist;
//linklist push(linklist stack,int x,int y)//������stack�൱��ջ��ָ�룬��Զָ��ջ��Ԫ�أ�Ҳ�����������Ԫ��
//{
//	linklist neonode;
//	neonode = new Lnode;//����һ���µĿռ�
//	if (!neonode)
//	{
//		//����ʧ��
//		cerr << "�ڴ����ʧ��" << endl;
//		return NULL;
//	}
//	neonode->x = x;
//	neonode->y = y;//��ջ
//	neonode->next = stack;
//	stack = neonode;
//	return stack;
//}
//linklist pop(linklist stack, int &x1, int &y1)
//{
//	linklist top;
//	if (stack != NULL)
//	{
//		top = stack;
//		stack = stack->next;
//		x1 = top->x;//����Ԫ������
//		y1 = top->y;
//		free(top);//�ͷŵ��ÿռ�
//		return stack;
//	}
//	else
//	{
//		x1 = -1;
//		return stack;
//	}
//}
//int MAZE[10][12] = { 2,1,1,1,1,0,0,0,1,1,1,1,
//					1,0,0,0,1,1,1,1,1,1,1,1,
//					1,1,1,0,1 ,1,0,0,0,0,1,1,
//					1,1,1,0,1,1,0,1,1,0,1,1,
//					1,1,1,0,0,0,0,1,1,0,1,1,
//					1,1 ,1,0,1,1,0,1 ,1,0,1,1,
//					1,1 ,1,0,1,1,0,1,1,0,1,1,
//					1 ,1 ,1,0,1 ,1,0,0,1,0,1,1,
//					1,1,0,0,0,0,0,0,0,0,0,1,
//					1,1,1,1,1,1 ,1,1,1,1,1,3 };//�����Թ�
//#define Exitx 8
//#define Exity 10//���ڲ�����ζ�������һ��λ��,Ӧ���Ǳ����г��ڵ����Ͻ�Ԫ��
//#define EAST MAZE[x][y+1]
//#define WEST MAZE[x][y-1]
//#define NORTH MAZE[x-1][y]
//#define SORTH MAZE[x+1][y]
//int cheExit(int x, int y, int ex, int ey)//����Ƿ��Ѿ����˳���
//{
//	if (x == ex && y == ey)
//	{
//		return 1;
//	}
//}
////x,y�����궼�Ǵ�1��ʼ��
//int main()
//{
//	linklist path = NULL;
//	int i, j;
//	cout << "�Թ���ʼ��Ϊ:"<<endl;
//	int x = 1;
//	int y = 1;//���������ʱ��λ��Ϊ(1,1),��λ������ʵ������ʼ���Թ���λ��
//	for (int i = 0;i < 10;i++)
//	{
//		for (int j = 0;j < 12;j++)
//		{
//			cout << MAZE[i][j] << " ";
//		}
//		cout << endl;
//	}
//	while (x <= Exitx && y <= Exity)
//	{
//		MAZE[x][y] = 6;//�õ��ֵ����6��˵�����������õ�
//		if (NORTH == 0)
//		{
//			//NORTH��·����
//			x -= 1;
//			path = push(path, x, y);//����λ�ô���������,�˳�����forѭ�������øõ��λ��Ϊ6����������
//		}
//		else if (SORTH == 0)
//		{
//			x += 1;
//			path = push(path, x, y);
//		}
//		else if (EAST == 0)
//		{
//			y += 1;
//			path = push(path, x, y);
//		}
//		else if (WEST == 0)
//		{
//			y -= 1;
//			path = push(path, x, y);
//		}
//		else if (cheExit(x, y, Exitx, Exity) == 1)
//		{
//			break;
//		}
//		//ע�⣬��������ѭ���У������һ��λ��(�����������Ǹ�λ��)���ⶼ��0����ô��ֻ�ܷ��ص���һ��λ��,ִ��
//		else
//		{
//			//˵����λ��û������λ�ÿ��ߣ��˻ص���һ��
//			MAZE[x][y] == 2;//�õ����2����ʾ�õ��޷��ڴ˷��ʣ������Ǹ�����ͬ
//			pop(path, x, y);
//		}
//	}
//	cout << "������" << endl;
//	for (int i = 0;i < 10;i++)
//	{
//		for (int j = 0;j < 12;j++)
//		{
//			cout << MAZE[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int qiuhe(int x)
//{
//	int sum = 1;
//	if (x >= 1)
//	{
//		for (int i = 0;i < x;i++)
//		{
//			sum *= x;
//		}
//		return sum;
//	}
//	else
//	{
//		return x;
//	}
//	
//}
//int main()
//{
//	int x = 5;
//	int z = qiuhe(x);
//	cout << z << endl;
//}
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void maopao(int arr[],int size)
{
	for (int i = size - 1;i > 0;i--)
	{
		for (int j = 0;j < i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void xuanze(int arr[],int size)
{
	
	
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}
void shuchu(int arr[],int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
		
	}
	cout << endl;
}
void charu(int arr[],int size)
{
	for (int i = 1;i < size;i++)//�Ƚϳ��ȼ�ȥһ��
	{
		int tmp = arr[i];//��������²����ֵ,��Ϊ�������ӵ�ֵ��С�����ܻḲ�ǵ�ԭ��λ���ϵ�ֵ�����ʹ��һ����ʱ����tmp����������
		int j = i - 1;
		while (j >= 0 && arr[j] > tmp)
		{
			//��ʱ�����Ԫ��ҪС���ó�i��ռ�ݵĴ�λ��
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = tmp;
	}
}
void xier(int arr[], int size)
{
	int jmp = size / 2;
	while (jmp != 0)
	{
		for (int i = jmp;i < size;i++)
		{
			int tmp = arr[i];
			int j = i - jmp;
			while (j >= 0 && arr[j] > tmp)
			{
				arr[j + jmp] = arr[j];
				j = j - jmp;
			}
			arr[j + jmp] = tmp;
		}
		jmp = jmp / 2;
	}
	
}
int main()
{
	int arr[] = { 16,25,39,27,12,8,45,63 };
	int size = sizeof(arr) / sizeof(arr[0]);
	/*maopao(arr,size);*/
	///*xuanze(arr, size);*/
	//charu(arr, size);
	xier(arr, size);
	shuchu(arr,size);
}