#include<iostream>
#include<fstream>
using namespace std;
#include"identity.h"
#include"globalFile.h"
#include"student.h"
#include"teacher.h"
#include"manger.h"
//��¼����
void mangerMenu(Idenity*& m);
void studentMenu(Idenity*& s);
void teacherMenu(Idenity*& t);
void Login(string filename,int type)
{
	//����ָ�룬����ָ���������
	Idenity* person = NULL;
	//���ļ�
	ifstream ifs;
	ifs.open(filename, ios::in);
	//�ж��ļ��Ƿ����
	if (!ifs)
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	//׼���û���Ϣ
	int id = 0;
	string name;
	string pwd;
	if (type == 1)
	{
		cout << "���������ѧ��" << endl;
		cin >> id;
	}
	else if(type == 2)
	{
		cout << "����������ְ����" << endl;
		cin >> id;
	}
	cout << "�������û�����" << endl;
	cin >> name;
	cout << "����������"<<endl;
	cin >> pwd;
	if (type == 1)
	{
		//ѧ����Ϣ��֤
		int fid;//���ļ��ж�ȡ��id����
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >>fpwd)
		{
			//���û���Ϣ���Ա�
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "ѧ����֤��½�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new student(id,name,pwd);
				//����ѧ������Ӳ˵�
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		//��ʦ��Ϣ��֤
		int fid;//���ļ��ж�ȡ��id����
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			//���û���Ϣ���Ա�
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "��ʦ��֤��½�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new teacher(id, name, pwd);
				//�����ʦ����Ӳ˵�
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա��Ϣ��֤
		string fname;
		string fpwd;
		while (ifs >> fname && ifs >> fpwd)
		{
			//���û���Ϣ���Ա�
			if (fname == name && fpwd == pwd)
			{
				cout << "����Ա��֤��½�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new manger(name, pwd);
				//�������Ա����Ӳ˵�
				mangerMenu(person);
				return;
			}
		}
	}
	cout << "��½��֤ʧ��" << endl;
	system("pause");
	system("cls");
	return;
}
//�������Ա����˵�����
void mangerMenu(Idenity*& m)
{
	while (true)
	{
		//��̬
		//���ù���Ա�Ӳ˵�
		m->openmenu();
		//������ָ��תΪ����ָ�룬��������������ӿ�
		manger *man = (manger*)m;
		int select = 0;
		//�����û�ѡ��
		cout << "����������ѡ��" << endl;
		cin >> select;
		if (select == 1)
		{
			cout << "����˺�" << endl;
			//����˺�
			man->addperson();

		}
		else if(select == 2)
		{
			cout << "�鿴�˺�" << endl;
			//�鿴�˺�
			man->showperson();
		}
		else if(select == 3)
		{
			cout << "�鿴����" << endl;
			//�鿴����
			man->showcpm();
		}
		else if (select == 4)
		{
			//���ԤԼ
			man->clean();
		}
		else
		{
			delete man;//���ٵ���������
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}

	}
}
//����ѧ���Ӳ˵�����
//�������Ա����˵�����
void studentMenu(Idenity*& s)
{
	while (true)
	{
		//��̬
		//���ù���Ա�Ӳ˵�
		s->openmenu();
		//������ָ��תΪ����ָ�룬��������������ӿ�
		student* stu = (student*)s;
		int select = 0;
		//�����û�ѡ��
		cout << "����������ѡ��" << endl;
		cin >> select;
		if (select == 1)//����ԤԼ
		{
			stu->applyorder();
		}
		else if (select == 2)//�鿴����ԤԼ
		{
			stu->showmyorder();
		}
		else if (select == 3)//�鿴��������Ϣ
		{
			stu->lookorder();
		}
		else if (select == 4)//ȡ��ԤԼ
		{
			stu->quxiao();
		}
		else
		{
			//ע����½
			delete stu;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}

	}
}
//�����ʦ�Ӳ˵�����
void teacherMenu(Idenity*& t)
{
	while (true)
	{
		t->openmenu();
		teacher* tea = (teacher*) t;
		int select = 0;//�����û�ѡ��
		cout << "����������ѡ��" << endl;
		cin >> select;
		if (select == 1)//�鿴����ԤԼ
		{
			tea->lookorder();
		}
		else if (select == 2)
		{
			tea->validmyorder();
		}
		else
		{
			delete tea;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
		}
	}
}
int main()
{
	int select = 0;
	while (true)
	{
		cout << "=========��ӭ�������ǲ��ͻ���ԤԼϵͳ========" << endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t-----------------------------\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|          1.ѧ������        |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|          2.��     ʦ       |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|          3.��  ��   Ա     |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|          0.��      ��      |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t-----------------------------\n";
		cout << "���������ѡ��" << endl;
		cin >> select;
		switch (select)
		{
		case 1://ѧ��
			Login(STUDENT_FILE, 1);
			break;
		case 2://��ʦ
			Login(TEACHER_FILE, 2);
			break;
		case 3://����Ա
			Login(ADMIN_FILE, 3);
			break;
		case 0://�˳�ϵͳ
			cout << "��ӭ���´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "������������������" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	return 0;
}