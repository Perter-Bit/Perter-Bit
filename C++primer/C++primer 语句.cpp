#include<iostream>
using namespace std;
//��ϰ 5.9:��дһ�γ���ʹ��һϵ�� if ���ͳ�ƴ� cin ������ı����ж���Ԫ��ĸ��
//int main()
//{
//	char ch;
//	unsigned int v = 0;
//	cout << "������һ����ĸ" << endl;
//	while (cin >> ch)
//	{
//		if (ch == 'a')
//		{
//			++v;
//		}
//		if (ch == 'e')
//		{
//			++v;
//		}
//		if (ch == 'i')
//		{
//			++v;
//		}
//		if (ch == 'o')
//		{
//			++v;
//		}
//		if (ch == 'u')
//		{
//			++v;
//		}
//	}
//	cout << "��������ı��й���:" << v << "��Ԫ����ĸ" << endl;
//	return 0;
//}
//��ϰ 5.10 : ����֮ǰʵ�ֵ�ͳ��Ԫ����ĸ�ĳ������һ������ : ���Ԫ����ĸ�Դ�д��ʽ���֣����ᱻͳ�����ڡ���дһ�γ��򣬼�ͳ��Ԫ����ĸ��Сд��ʽ��
// Ҳͳ�ƴ�д��ʽ��Ҳ����˵���³�������'a'��'A'��Ӧ�õ��� aCnt ��ֵ���Դ����ơ�
//int main()
//{
//	char ch;
//	unsigned int v = 0;
//	cout << "������һ����ĸ" << endl;
//	while (cin >> ch)
//	{
//		if (ch == 'a' || ch == 'A')
//		{
//			++v;
//		}
//		if (ch == 'e' || ch == 'E')
//		{
//			++v;
//		}
//		if (ch == 'i' || ch == 'I')
//		{
//			++v;
//		}
//		if (ch == 'o' || ch == 'O')
//		{
//			++v;
//		}
//		if (ch == 'u' || ch == 'U')
//		{
//			++v;
//		}
//	}
//	cout << "��������ı��й���:" << v << "��Ԫ����ĸ" << endl;
//	return 0;
//}
//��ϰ 5.11 : �޸�ͳ��Ԫ����ĸ�ĳ���ʹ��Ҳ��ͳ�ƿո��Ʊ���ͻ��з���������
//int main()
//{
//	//��ʼ������Ҫͳ�Ƶ���
//	unsigned int  a = 0, e = 0, i = 0, o = 0, u = 0;
//	unsigned int space = 0, tab = 0, enter = 0;
//	char ch;
//	while (cin.get(ch))
//	{
//		switch (ch)
//		{
//		case 'a':
//		case 'A':
//			a++;
//			break;
//		case 'e':
//		case 'E':
//			e++;
//			break;
//		case 'I':
//		case 'i':
//			i++;
//			break;
//		case 'o':
//		case 'O':
//			o++;
//			break;
//		case 'u':
//		case 'U':
//			u++;
//			break;
//		case ' ':
//			space++;
//			break;
//		case '\n':
//			enter++;
//			break;
//		case '\t':
//			tab++;
//			break;
//		}
//	}
//	cout << "a����Ϊ" << a << endl;
//	cout << "e����Ϊ" << e << endl;
//	cout << "i����Ϊ" << i << endl;
//	cout << "o����Ϊ" << o << endl;
//	cout << "u����Ϊ" << u << endl;
//	cout << "�ո�����Ϊ" << space << endl;
//	cout << "�Ʊ������Ϊ" << tab << endl;
//	cout << "�س�����Ϊ" << enter << endl;
//	return 0;
//}
//��ϰ 5.12 : �޸�ͳ��Ԫ����ĸ�ĳ���, ʹ����ͳ�����º��������ַ����ַ����е����� : ff��fl �� fi��
//int main()
//{
//	unsigned int ff = 0, fl = 0, fi = 0;
//	string s1;
//	char ch;
//	char s = ' ';
//	cout << "������һ���ı�:" << endl;
//	while (cin >> ch)
//	{
//		bool y = true;
//		if (s == 'f')
//		{
//			switch (ch)
//			{
//			case 'f':
//				y = false;
//				ff++;
//				break;
//			case 'l':
//				fl++;
//				break;
//			case 'i':
//				fi++;
//				break;
//			}
//		}
//		if (!y)
//		{
//			s = ' ';
//		}
//		else
//		{
//			s = ch;
//		}
//	}
//	cout << "f1��" << fl << "��" << endl;
//	cout << "ff��" << ff << "��" << endl;
//	cout << "fi��" << fi << "��" << endl;
//}