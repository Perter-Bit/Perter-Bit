#include<stdio.h>
//void menu()
//{
//	printf("#########################\n");
//	printf("***  1.add  2. sub ***   \n");
//	printf("***  3.mul  2. div ***   \n");
//	printf("***     0.exit     ***   \n");
//	printf("*************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input, x, y;
//	do
//	{
//		/*menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		printf("����������������");
//		scanf_s("%d%d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));\
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//		default:
//			printf("ѡ�����,����������\n");
//		}*/
//	//���°�
//		menu();
//		printf("������");
//		scanf_s("%d", &input);
//		int (*pd[5])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������");
//			scanf_s("%d%d", &x, &y);
//			int se = pd[input](x, y);
//			printf("%d\n", se);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//}