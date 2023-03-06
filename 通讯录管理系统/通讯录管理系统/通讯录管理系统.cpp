#include<iostream>
#include<string>
#define MAX 1000
using namespace std;
void showmenu()
{
	cout <<"****************************"<<endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "****************************" << endl;
}
//�����ϵ�˽ṹ��
struct people
{
	string name;
	int sex;
	int age;
	string tele;
	string add;
};
//���ͨѶ¼
struct book
{
	people s[MAX];
	int num;
};
//�����ϵ��
void addPerson(struct book *stu)
{
	//����
	if (stu->num == MAX)
	{
		cout << "���ʧ�ܣ���������" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		string name;
		cout << "����������" << endl;
		cin >> name;
		stu->s[stu->num].name = name;
		cout << "�������Ա�";
		cout << "�С���1,Ů����2" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				stu->s[stu->num].sex = sex;
				break;
			}
			else
			{
				cout << "��Ǹ���������������������" << endl;
			}
		}
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		stu->s[stu->num].age = age;
		cout << "��������ϵ�绰" << endl;
		string tele;
		cin >> tele;
		stu->s[stu->num].tele = tele;
		cout << "�������ַ" << endl;
		string add;
		cin >> add;
		stu->s[stu->num].add = add;
		stu->num++;
		cout << "��ӳɹ�" << endl;
		system("pause");//�밴���������
		system("cls");//��������
	}
}
//��ʾ��ϵ��
void showperson(book *b)
{
	//��0;
	if (b->num == 0)
	{
		cout << "��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0;i < b->num;i++)
		{
			cout << "����: " << b->s[i].name << "\t";
			cout << "�Ա�: " << (b->s[i].sex == 1 ? "��":"Ů")<< "\t";
			cout << "����: " << b->s[i].age << "\t";
			cout << "�绰: " << b->s[i].tele << "\t";
			cout << "סַ: " << b->s[i].add <<endl;
		}
	}
	system("pause");
	system("cls");
}
//�����ϵ���Ƿ���ڣ����ڷ�������λ�ã������ڷ���-1
int isexist(book *b, string name)
{
	for (int i = 0;i < b->num;i++)
	{
		if (b->s[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
//ɾ����ϵ��
void Delete(book *b)
{
	cout << "������ɾ����ϵ�˵�����" << endl;
	string name;
	cin >> name;
	int ret = isexist(b,name);
	if (ret != -1)
	{
		cout << "�ҵ�����" << endl;
		for (int i = ret;i < b->num;i++)
		{
			//����Ǩ��
			b->s[i] = b->s[i + 1];
		}
		b->num--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
	return;
}
//����ָ������ϵ��
void find(book* b)
{
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isexist(b, name);
	if (ret != -1)
	{
		cout << "�ҵ�����" << endl;
		cout << "����: " << b->s[ret].name << "\t";
		cout << "�Ա�: " << (b->s[ret].sex == 1 ? "��" : "Ů") << "\t";
		cout << "����: " << b->s[ret].age << "\t";
		cout << "�绰: " << b->s[ret].tele << "\t";
		cout << "סַ: " << b->s[ret].add << endl;
	}
	else
	{
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	system("pause");
	system("cls");
}
//�޸���ϵ��
void modify(book* b)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isexist(b, name);
	if (ret != -1)
	{
		string name;
		cout << "����������" << endl;
		cin >> name;
		b->s[ret].name = name;
		cout << "�������Ա�";
		cout << "�С���1,Ů����2" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				b->s[ret].sex = sex;
				break;
			}
			else
			{
				cout << "��Ǹ���������������������" << endl;
			}
		}
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		b->s[ret].age = age;
		cout << "��������ϵ�绰" << endl;
		string tele;
		cin >> tele;
		b->s[ret].tele = tele;
		cout << "�������ַ" << endl;
		string add;
		cin >> add;
		b->s[ret].add = add;
	}
	else
	{
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	system("pause");
	system("cls");

}
//�����ϵ��
void clean(book* b)
{
	b->num = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//����ͨѶ¼�ṹ�����
	book b;
	b.num = 0;
	//�˳�����
	int select = 0;
	while (true)
	{
		//�˵�����
		showmenu();
		cin >> select;
		switch(select)
		{
		case 1://1.�����ϵ��
			addPerson(&b);
			break;
		case 2://2.��ʾ��ϵ��
			showperson(&b);
			break;
		case 3://3.ɾ����ϵ��
		{
			Delete(&b);
			break;
		}
		case 4://4.������ϵ��
			find(&b);
			break;
		case 5://5.�޸���ϵ��
			modify(&b);
			break;
		case 6://6.�����ϵ��
			clean(&b);
			break;
		case 0://0.�˳�ͨѶ¼
			cout << "��ӭ�����´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	return 0;
}