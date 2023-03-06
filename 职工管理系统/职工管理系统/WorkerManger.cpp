#include"WorkerManger.h"
#include"employee.h"
#include"boss.h"
#include"manger.h"
WorkerManger::WorkerManger()
{
	//1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		/*cout << "�ļ�������" << endl;*/
		//��ʼ������
		this->m_EmpArray = NULL;
		this->m_EmpNUM = 0;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2.�ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//�ļ�Ϊ��
		/*cout << "�ļ�Ϊ��!" << endl;*/
		//��ʼ����¼����
		this->m_EmpNUM = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3.�ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	/*cout << "ְ������Ϊ:" << num << endl;*/
	this->m_EmpNUM = num;
	//���ٿռ�
	this->m_EmpArray = new worker * [this->m_EmpNUM];
	//���ļ��е����ݴ浽������
	this->init_Emp();
	/*for (int i = 0;i < this->m_EmpNUM;i++)
	{
		cout << "ְ�����:  " << this->m_EmpArray[i]->m_id
			<< "����:  " << this->m_EmpArray[i]->name
			<< "���ű��  " << this->m_EmpArray[i]->m_Did << endl;
	}*/
}
void WorkerManger::Show_Menu()
{
	cout << "*****************************" << endl;
	cout << "****��ӭʹ��ְ������ϵͳ!****" << endl;
	cout << "******* 0.�˳�����ϵͳ********" << endl;
	cout << "******* 1.����ְ����Ϣ********" << endl;
	cout << "******* 2.��ʾְ����Ϣ********" << endl;
	cout << "******* 3.ɾ����ְְ��********" << endl;
	cout << "******* 4.�޸�ְ����Ϣ********" << endl;
	cout << "******* 5.����ְ����Ϣ********" << endl;
	cout << "******* 6.���ձ������********" << endl;
	cout << "******* 7.��������ĵ�********" << endl;
	cout << "******************************" << endl;
	cout << endl;
}
//�˳�ϵͳ
void WorkerManger::Exit()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳����� ϵͳ����
}
WorkerManger::~WorkerManger()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
void WorkerManger::Add_Emp()
{
	cout << "���������ְ��������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//���
		//��������¿ռ��С
		int newSize = this->m_EmpNUM + addNum;
		//�����¿ռ�
		worker** newSpace = new worker * [newSize];
		//��ԭ���ռ��µ����ݣ��������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNUM;i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//���������
		for (int i = 0;i < addNum;i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dSelect;//����ѡ��
			cout << "�������" << i + 1 << "����ְ�����" << endl;
			
			while (true)
			{
				cin >> id;
				if (this->panduan(id) != -1)
				{
					break;
				}
				else
				{
					cout << "������ı���ظ�,����������" << endl;
				}
			}
			cout << "�������" << i + 1 << "����ְ������" << endl;
			cin >> name;
			cout << "��ѡ���ְ����λ: " << endl;
			cout << "***1. ��ְͨ��***" << endl;
			cout << "***2.   ����  ***" << endl;
			cout << "***3.   �ϰ�  ***" << endl;
			while (true)
			{
				cin >> dSelect;
				if (dSelect > 0 && dSelect < 4)
				{
					break;
				}
				else
				{
					cout << "�������ʽ����,����������" << endl;
				}
			}
			worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new manger(id, name, 2);
				break;
			case 3:
				worker = new boss(id, name, 3);
				break;
			default:
				break;
			}
			//������ְ��ְ�𣬱��浽������
			newSpace[this->m_EmpNUM + i] = worker;
		}
		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;
		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;
		//�����µ�ְ������
		this->m_EmpNUM = newSize;
		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;
		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
		this->save();//���ݱ���
	}
	else
	{
		cout << "�������" << endl;
	}
	system("pause");
	system("cls");
}
void WorkerManger::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);//������ķ�ʽ���ļ� ���� д�ļ�
	//��ÿ��������д�뵽�ļ���
	for (int i = 0;i < this->m_EmpNUM;i++)
	{
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->name << " "
			<< this->m_EmpArray[i]->m_Did << endl;
	}
	cout << m_EmpNUM << endl;
	//�ر��ļ�
	ofs.close();
}
int WorkerManger::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		//ͳ����������
		num++;
	}
	return num;
}
void WorkerManger::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		worker* worker = NULL;
		
		if (dId == 1)//��ְͨ��
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)//����
		{
			worker = new manger(id, name, dId);
		}
		else//�ϰ�
		{
			worker = new boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}
void WorkerManger::show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��ļ�Ϊ��" << endl;
	}
	else
	{
		for (int i = 0;i < m_EmpNUM;i++)
		{
			this->m_EmpArray[i]->shpwInfo();
		}
	}
	system("pause");
	system("cls");
}
int WorkerManger::is_Exit(int id)
{
	int index = -1;
	for (int i = 0;i < this->m_EmpNUM;i++)
	{
		if (this->m_EmpArray[i]->m_id == id)
		{
			//�ҵ�ְ��
			index = i;
			break;
		}
	}
	return index;
}
void WorkerManger::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		//���ձ��ɾ��
		cout << "������Ҫɾ���ĳ�Ա���" << endl;
		int id = 0;
		cin >> id;
		int index = this->is_Exit(id);
		//�ж�Ҫɾ���ĳ�Ա�Ƿ����
		if (index != -1)
		{
			for (int i = index;i < this->m_EmpNUM - 1;i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNUM--;
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ��ó�Ա" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkerManger::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		//���ձ���޸�
		cout << "������Ҫ�޸ĵĳ�Ա���" << endl;
		int id = 0;
		cin >> id;
		int index = this->is_Exit(id);
		//�ж�Ҫɾ���ĳ�Ա�Ƿ����
		if (index != -1)
		{
			delete this->m_EmpArray[index];
			int newId = 0;
			string newname;
			int dSelect;
			cout << "�鵽" << id << "��ְ��,��������ְ����:" << endl;
			cin >> newId;
			cout << "������������" << endl;
			cin >> newname;
			cout << "�������ְ����λ: " << endl;
			cout << "***1. ��ְͨ��***" << endl;
			cout << "***2.   ����  ***" << endl;
			cout << "***3.   �ϰ�  ***" << endl;
			while (true)
			{
				cin >> dSelect;
				if (dSelect > 0 && dSelect < 4)
				{
					break;
				}
				else
				{
					cout << "�������ʽ����,����������" << endl;
				}
			}
			worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newname, 1);
				break;
			case 2:
				worker = new manger(newId, newname, 2);
				break;
			case 3:
				worker = new boss(newId, newname, 3);
				break;
			default:
				break;
			}
			//��������
			this->m_EmpArray[index] = worker;
			cout << "���ĳɹ�!" << endl;
			this->save();
		}
		else
		{
			cout << "���޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}
int WorkerManger::panduan(int x)
{
	int index = 0;
	if (this->m_FileIsEmpty)
	{
		return index;
	}
	for (int i = 0;i < this->m_EmpNUM;i++)
	{
		if (this->m_EmpArray[i]->m_id == x)
		{
			return -1;
		}
	}
	return index;
}
void WorkerManger::find()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		cout<<"��ѡ����ҷ�ʽ"<< endl;
		cout<<"1.��ְ����Ų�"<< endl;
		cout << "2.��ְ��������" << endl;
		int x = 0;
		cin >> x;
		if (x == 1)
		{
			//���ձ�Ų���
			cout << "������Ҫ���ҵĳ�Ա���" << endl;
			int id = 0;
			cin >> id;
			int index = this->is_Exit(id);
			if (index != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ�����ְԱ��Ϣ����" << endl;
				this->m_EmpArray[index]->shpwInfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (x == 2)
		{
			//������������
			cout << "������Ҫ���ҵĳ�Ա����" << endl;
			string name;
			cin >> name;
			int x = 0;
			for (int i = 0;i < this->m_EmpNUM;i++)
			{
				if (this->m_EmpArray[i]->name == name)
				{
					cout << "���ҳɹ�,ְԱ���Ϊ" << this->m_EmpArray[i]->m_id
						<< "����Ϣ����" << endl;
					this->m_EmpArray[i]->shpwInfo();
					x = 1;
				}
			}
			if (x==0)
			{
				cout << "δ�ҵ���Ա��" << endl;
			}
		}
	}
	system("pause");
	system("cls");
}
void WorkerManger::sort()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		cout << "  ��ѡ������ʽ " << endl;
		cout << "1.��ְ���������� " << endl;
		cout << "2.��ְ�����Ž��� " << endl;
		int x = 0;
		cin >> x;
		worker* temp = NULL;
		if (x == 1)
		{
			//��������
			for (int i = 0;i < this->m_EmpNUM;i++)
			{
				int min = i;//������Сֵ�±�
				for (int j = i;j < this->m_EmpNUM;j++)
				{
					if (this->m_EmpArray[min]->m_id > this->m_EmpArray[j]->m_id)
					{
						min = j;
					}
				}
				temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[min];
				this->m_EmpArray[min] = temp;
			}
		}
		else if (x == 2)
		{
			//���ս���
			for (int i = 0;i < this->m_EmpNUM;i++)
			{
				int max = i;//�������ֵ�±�
				for (int j = i;j < this->m_EmpNUM;j++)
				{
					if (this->m_EmpArray[max]->m_id < this->m_EmpArray[j]->m_id)
					{
						max = j;
					}
				}
				temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[max];
				this->m_EmpArray[max] = temp;
			}
		}
		else
		{
			cout << "������������,����������" << endl;
		}
		this->save();
		cout << "����ɹ�" << endl;
	}
	system("pause");
	system("cls");
}
void WorkerManger::clear()
{
	cout << "ȷ�����" << endl;
	cout << "1.ȷ�� " << endl;
	cout << "2.���� " << endl;
	int x = 0;
	cin >> x;
	if (x == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0;i < this->m_EmpNUM;i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
		this->m_EmpNUM = 0;
		this->m_FileIsEmpty = true;
		cout << "����ɹ�" << endl;
		system("pause");
		system("cls");
	}
	else if (x == 2)
	{
		cout << "�������" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "�����������,���ܽ���" << endl;
		system("pause");
		system("cls");
	}
}