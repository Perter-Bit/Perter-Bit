#include<iostream>
#include<string>
using namespace std;
//��ϰ 3.2:��дһ�γ���ӱ�׼������һ�ζ���һ���У�Ȼ���޸ĸó���ʹ��һ�ζ���һ���ʡ�
//int main()
//{
//	string s;//s��һ�����ַ���
//	cout << "�������ַ���" << endl;
//	while (getline(cin, s))//һ�δӸ����������ж�ȡ���ݣ�ֱ���������з������������ո��Ҳ���Ա���ȡ
//	{
//		cout << s << endl;
//	}
//	cout << "�����뵥��" << endl;
//	//����һ����
//	char c;
//	while (cin >> c)//�����ļ��������߲�������������ʱ����
//	{
//		cout << c << endl;
//	}
//	return 0;
//}
/*��ϰ 3.3:��˵�� string �������������� getline �����ֱ�����δ���հ��ַ���*/
//int main()
//{
//	string word, line;
//	cout << "��������ѡ��Ķ�ȡ�ַ����ķ�ʽ:1.��ʶ�ȡ2.���ж�ȡ" << endl;
//	int i;
//	cin >> i;
//	string s;
//	cin.clear();
//	cin.sync();
//	if (i == 1)
//	{
//		cout << "�������ַ���" << endl;
//		
//		cin >> s;
//		cout << "��Ч�ַ�����:" << s << endl;
//		return 0;//�������
//	}
//	else if (i == 2)
//	{
//		cin.clear();
//		cin.sync();
//		cout << "�������ַ���" << endl;
//		getline(cin, s);
//		cout << "��Ч�ַ�����:" << s << endl;
//		return 0;//�������
//	}
//	else
//	{
//		cout << "������������!" << endl;
//		return 0;
//	}
//}
//��ϰ 3.4:��дһ�γ�����������ַ������Ƚ����Ƿ���Ȳ����������������ȣ�����ϴ���Ǹ��ַ�������д��������
//�Ƚ�����������ַ����Ƿ�ȳ���������ȳ���������Ƚϴ���Ǹ��ַ�����
//int main()
//{
	//���
	/*string l1, l2;
	cout << "��ֱ������һ�����ڶ����ַ���,ʹ�ÿո�ָ" << endl;
	cin >> l1>>l2;
	if (l1 == l2)
	{
		cout << "�����ַ�����С���" << endl;
	}
	else if (l1 > l2)
	{
		cout << "�ַ���l1��" << endl;
	}
	else
	{
		cout << "l2��" << endl;
	}
	return 0;*/
	//�ȳ�
//	string l1, l2;
//	cout << "��ֱ������һ�����ڶ����ַ���,ʹ�ÿո�ָ" << endl;
//	cin >> l1>>l2;
//	//�Ƚϳ���
//	auto len1 = l1.size();//ʹ���Զ��ƶ�����
//	auto len2 = l2.size();
//	if (len1 == len2)
//	{
//		cout << "�����ַ����������" << endl;
//	}
//	else if (len1 > len2)
//	{
//		cout << "�ַ���l1��" << endl;
//	}
//	else
//	{
//		cout << "l2��" << endl;
//	}
//}
//��ϰ 3.5:��дһ�γ���ӱ�׼�����ж������ַ�����������������һ��������ӳɵĴ��ַ�����
//Ȼ���޸����������ÿո������Ķ���ַ����ָ�����
int main()
{
	//char ch;
	//string s, result;
	//cout << "�������һ���ַ���" << endl;
	//while (cin >> s)//��������
	//{
	//	result += s;//��sƴ�ӵ�result����
	//	cout << "�Ƿ��������  ����:y,������:n" << endl;
	//	cin >> ch;
	//	if (ch == 'y')
	//	{
	//		cout << "��������һ���ַ���:" << endl;//����ѭ��
	//	}
	//	else
	//	{
	//		break;//����ѭ��
	//	}
	//}
	//cout << "���յ��ַ�����:" << result << endl;
	//ʹ�ÿո�ָ���
	/*char ch;
	cout << ch <<endl;*/
	//string s, result;
	//cout << "�������һ���ַ���" << endl;
	//while (cin >> s)//��������
	//{
	//	if (result.size())
	//	{
	//		//�ַ�����Ϊ��,���Ͽո�
	//		result += " ";
	//		result += s;
	//	}
	//	else
	//	{
	//		result += s;//��sƴ�ӵ�result����
	//	}
	//	cout << "�Ƿ��������  ����:y,������:n" << endl;
	//	cin >> ch;
	//	if (ch == 'y')
	//	{
	//		cout << "��������һ���ַ���:" << endl;//����ѭ��
	//	}
	//	else
	//	{
	//		break;//����ѭ��
	//	}
	//}
	//cout << "���յ��ַ�����:" << result << endl;
}