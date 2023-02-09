#include"manger.h"
//Ĭ�Ϲ���
manger::manger()
{

}
//�вι��� 
manger::manger(string name, string pwd)
{
	this->m_name = name;
	this->m_pass = pwd;
	//��ʼ������ ��ȡ�������ļ��� ѧ������ʦ��Ϣ
	this->initvector();
	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	computerroom com;
	while (ifs >> com.m_comid && ifs >> com.m_max)
	{
		vcom.push_back(com);
	}
	ifs.close();
	cout << "����������Ϊ��" << vcom.size() << endl;
}
//�˵�����
void manger::openmenu()
{
	cout << "��ӭ����Ա:" << this->m_name << "��½��" << endl;
	cout << "\t\t--------------------------------\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          1.����˺�          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          2.�鿴�˺�          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          3.�鿴����          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          4.���ԤԼ          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          0.ע����½          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t-------------------------------|\n";
}
//����˺�
void manger::addperson()
{
	cout << "����������˺ŵ�����" << endl;
	cout << "1.���ѧ��" << endl;
	cout << "2.�����ʦ" << endl;
	int select = 0;
	cin >> select;
	string filename;//�����ļ���
	string tip;//��ʾid��
	string errortip;
	ofstream ofs;//�ļ���������
	if (select == 1)
	{
		//���ѧ��
		filename = STUDENT_FILE;
		tip = "������ѧ��";
		errortip = "ѧ���ظ�������������";
	}
	else
	{
		filename = TEACHER_FILE;
		tip = "������ְ����";
		errortip = "ְ�����ظ�������������";
	}
	//����׷�ӵķ�ʽ д�ļ�
	ofs.open(filename, ios::out | ios::app);
	int id;
	string name;
	string pwd;
	cout << tip << endl;
	while (true)
	{
		cin >> id;
		bool ret = checkPepeat(id, select);
		if (ret)
		{
			//���ظ�
			cout << errortip << endl;
		}
		else
		{
			break;
		}
	}
	cout << "����������" << endl;
	cin >> name;
	cout << "����������" << endl;
	cin >> pwd;
	//���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�" <<endl;
	system("pause");
	system("cls");
	ofs.close();
	//���ó�ʼ�������ӿ�
	this->initvector();
}
//�鿴�˺�
void printstu(student& s);
void printtea(teacher& t);
void manger::showperson()
{
	cout << "��ѡ��鿴����:" << endl;
	cout << "1.�鿴����ѧ��" << endl;
	cout << "2.�鿴������ʦ" << endl;
	int select = 0;//�����û�ѡ��
	cin >> select;
	if (select == 1)
	{
		//�鿴ѧ��
		cout << "����ѧ����Ϣ����" << endl;
		for_each(vstu.begin(), vstu.end(), printstu);
	}
	else
	{
		//�鿴��ʦ
		cout << "������ʦ��Ϣ����" << endl;
		for_each(vtea.begin(), vtea.end(), printtea);
	}
	system("pause");
	system("cls");
}
void printtea(teacher& t)
{
	cout << "ְ���ţ�" << t.m_empod << "������" << t.m_name << "���룺" << t.m_pass << endl;
}
//�鿴������Ϣ
void manger::showcpm()
{
	cout << "������Ϣ����" << endl;
	for (vector<computerroom>::iterator it = vcom.begin();it != vcom.end();it++)
	{
		cout << "�������:" << it->m_comid << "�������������" << it->m_max << endl;
	}
	system("pause");
	system("cls");
}
//���ԤԼ��¼
void manger::clean()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "��ճɹ�" << endl;
	system("pause");
	system("cls");
}
//��ʼ������
void manger::initvector()
{
	//ȷ���������״̬
	vstu.clear();
	vtea.clear();
	//��ȡ��Ϣ ѧ������ʦ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}
	student s;
	while (ifs >> s.m_id && ifs >> s.m_name && ifs >> s.m_pass)
	{
		//��Ϣ����
		vstu.push_back(s);
	}
	cout << "��ǰѧ������Ϊ:" << vstu.size() << endl;
	ifs.close();
	//��ȡ��Ϣ
	ifs.open(TEACHER_FILE, ios::in);
	teacher t;
	while (ifs >>t.m_empod && ifs >> t.m_name && ifs >>t.m_pass)
	{
		//��Ϣ����
		vtea.push_back(t);
	}
	cout << "��ǰ��ʦ����Ϊ:" << vtea.size() << endl;
	ifs.close();
}
void printstu(student& s)
{
	cout << "ѧ�ţ�" << s.m_id << "������" << s.m_name << "���룺" << s.m_pass << endl;
}
//����ظ� ����1 ���ѧ��/ְ���� ����2 �������
bool  manger::checkPepeat(int id, int type)
{
	if (type == 1)
	{
		//���ѧ��
		for (vector<student>::iterator it = vstu.begin();it != vstu.end();it++)
		{
			if (id == it->m_id)
			{
				return true;
			}
		}
	}
	else
	{
		//�����ʦ
		for (vector<teacher>::iterator it = vtea.begin();it != vtea.end();it++)
		{
			if (id == it->m_empod)
			{
				return true;
			}
		}

	}
	return false;
}