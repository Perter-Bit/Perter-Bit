#include"student.h"
//Ĭ�Ϲ���
student::student()
{

}
//�вι��� 
student::student(int id, string name, string pwd)
{
	this->m_id = id;
	this->m_name = name;
	this->m_pass = pwd;
	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	computerroom com;
	while (ifs >> com.m_comid && ifs >> com.m_max)
	{
		//����ȡ����Ϣ���뵽������
		vcom.push_back(com);
	}
	ifs.close();
}
//�˵�����
void student::openmenu()
{
	cout << "��ӭѧ��:" << this->m_name << "��½��" << endl;
	cout << "\t\t--------------------------------\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          1.����ԤԼ          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          2.�鿴�ҵ�ԤԼ      |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          3.�鿴����ԤԼ      |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          4.ȡ��ԤԼ          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t|          0.ע����½          |\n";
	cout << "\t\t|                              |\n";
	cout << "\t\t-------------------------------|\n";
}
//����ԤԼ
void student::applyorder()
{
	cout << "��������ʱ��Ϊ��һ������!" << endl;
	cout << "����������ԤԼ��ʱ�䣺" << endl;
	cout << "1����һ" << endl;
	cout << "2���ܶ�" << endl;
	cout << "3������" << endl;
	cout << "4������" << endl;
	cout << "5������" << endl;
	int date = 0;//����
	int interval = 0;//ʱ���
	int room = 0;//�������
	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		cout << "������������������" << endl;
	}
	cout << "����������ԤԼ��ʱ��" << endl;
	cout << "1.����" << endl;
	cout << "2.����" << endl;
	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		else
		{
			cout << "������������������" << endl;
		}
	}
	cout << "��ѡ�������" << endl;
	for (int i = 0;i < vcom.size();i++)
	{
		cout << vcom[i].m_comid << "�Ż�������Ϊ��" << vcom[i].m_max << endl;
	}
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "������������������" << endl;
	}
	cout << "ԤԼ�ɹ��������" << endl;
	//��Ϣд��'
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);
	ofs << "data:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_id << " ";
	ofs << "stuName:" << this->m_name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;
	ofs.close();
	system("pause");
	system("cls");
	return;
}
//�鿴����ԤԼ
void student::showmyorder()
{
	OrderFile od;
	if (od.m_size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0;i < od.m_size;i++)
	{
		//string תΪ int
		//string ���� .c_str() ת const char*
		//����atoi (const char*) ת int 
		if (this->m_id == atoi(od.m_order[i]["stuId"].c_str()))
		{
			cout << "ԤԼ���ڣ���" << od.m_order[i]["data"];
			cout << "ʱ��Σ�" << (od.m_order[i]["int"] == "1" ? "����" : "����");
			cout << "�����ţ�" << od.m_order[i]["roomId"];
			string status = "״̬��";
			//1 ����� 2 ��ԤԼ -1 ԤԼʧ�� 0 ȡ��ԤԼ
			if (od.m_order[i]["status"] == "1")
			{
				status += "�����";
			}
			else if (od.m_order[i]["status"] == "2")
			{
				status += "ԤԼ�ɹ�";
			}
			else if (od.m_order[i]["status"] == "-1")
			{
				status += "ԤԼʧ�ܣ����δͨ��";
			}
			else
			{
				status += "ԤԼ��ȡ��";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}
//�鿴����ԤԼ
void student::lookorder()
{
	OrderFile od;
	if (od.m_size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0;i < od.m_size;i++)
	{
		cout << i + 1 << "��";
		cout << "ԤԼ���ڣ���" << od.m_order[i]["data"];
		cout << "ʱ��Σ�" << (od.m_order[i]["int"] == "1" ? "����" : "����");
		cout << "ѧ�ţ�" << od.m_order[i]["stuId"];
		cout << "������" << od.m_order[i]["stuName"];
		cout << "�����ţ�" << od.m_order[i]["roomId"];
		string status = "״̬��";
		//1 ����� 2 ��ԤԼ -1 ԤԼʧ�� 0 ȡ��ԤԼ
		if (od.m_order[i]["status"] == "1")
		{
			status += "�����";
		}
		else if (od.m_order[i]["status"] == "2")
		{
			status += "ԤԼ�ɹ�";
		}
		else if (od.m_order[i]["status"] == "-1")
		{
			status += "ԤԼʧ�ܣ����δͨ��";
		}
		else
		{
			status += "ԤԼ��ȡ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}
//ȡ��ԤԼ
void student::quxiao()
{
	OrderFile of;
	if (of.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;
	int index = 1;
	vector<int>v;//�������������е��±���
	for (int i = 0;i < of.m_size;i++)
	{
		//���ж�������ѧ��
		if (this->m_id == atoi(of.m_order[i]["stuId"].c_str()))
		{
			//��ɸѡ״̬������л�ԤԼ�ɹ�
			if (of.m_order[i]["status"] == "1" || of.m_order[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "��";
				cout << "ԤԼ���ڣ���" << of.m_order[i]["data"];
				cout << "ʱ��Σ�" << (of.m_order[i]["interval"] == "1" ? "����" : "����");
				cout << "������ţ�" << of.m_order[i]["roomId"];
				string status;
				if (of.m_order[i]["status"] == "1")
				{
					status += "�����";
				}
				else if (of.m_order[i]["status"] == "1")
				{
					status += "ԤԼ�ɹ�";
				}
				cout << status << endl;
			}
		}
	}
	cout << "������ȡ���ļ�¼��0������" << endl;
	int select = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				of.m_order[v[select - 1]]["status"] = "0";
				of.updateOrder();
				cout << "��ȡ��ԤԼ" << endl;
				break;
			}
		}
		cout << "������������������" << endl;
	}
	system("pause");
	system("cls");
}