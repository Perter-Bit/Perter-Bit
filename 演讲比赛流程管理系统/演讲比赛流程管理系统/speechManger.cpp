#include"speechManger.h"
using namespace std;
//���캯��
SpeechManger::SpeechManger()
{
	this->initspeech();
	//����12��ѡ��
	this->createManger();
	//���������¼
	this->loadRecord();
}
//��������
SpeechManger::~SpeechManger()
{

}
//�˵�����
void SpeechManger::menu()
{
	cout << "************************************" << endl;
	cout << "**********��ӭ�μ��ݽ�����**********" << endl;
	cout << "********** 1.��ʼ�ݽ����� **********" << endl;
	cout << "********** 2.�鿴�����¼ **********" << endl;
	cout << "********** 3.��ձ�����¼ **********" << endl;
	cout << "********** 0.�˳��������� **********" << endl;
	cout << "************************************" << endl;
	cout << endl;

}
void SpeechManger::exitsys()
{
	cout << "��ӭ���´�ʹ��" << endl;
	exit(0);
}
void SpeechManger::initspeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m_speaker.clear();
	this->m_Record.clear();
	//��ʼ����������
	this->m_index = 1;
}
void SpeechManger::createManger()
{
	string nameseed = "ABCDEFGHIJKL";
	for (int i = 0;i < nameseed.size();i++)
	{
		string name = "ѡ��";
		name += nameseed[i];
		speaker sp;
		sp.m_name = name;
		for (int j = 0;j < 2;j++)
		{
			sp.m_score[j] = 0;
		}
		//����ѡ�ֱ���Լ���Ӧ���� ���뵽map������
		this->v1.push_back(i + 10001);
		//ѡ�ֱ���Լ���Ӧѡ�� ���뵽map������
		this->m_speaker.insert(make_pair((i + 10001), sp));
	}
}
//��ǩ
void SpeechManger::chouqian()
{
	cout << "��<<" << this->m_index << ">>��ѡ�����ڳ�ǩ" << endl;
	cout << "----------------------------" << endl;
	cout << "��ǩ�������" << endl;
	if (this->m_index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin();it != v1.end();it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin();it != v2.end();it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "----------------------" << endl;
	system("pause");
	cout << endl;
}
void SpeechManger::speechContest()
{
	cout << "-------��" << this->m_index << "�ֱ�����ʽ��ʼ--------" << endl;
	vector<int>v_src;//ѡ�ֱ�������
	//׼����ʱ���� ���С��ɼ�
	int num = 0;
	multimap<double, int, greater<double>>groupScore;//keyֵ�������ظ��ģ������Ҫʹ��multimap������
	if (this->m_index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}
	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_src.begin();it != v_src.end();it++)
	{
		//��ί���
		//����Ƕ������
		
		deque<double>d;//��¼6��һ��
		num++;
		for (int i = 0;i < 10;i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//.f��ʾ�����һ��������
			/*cout << score << " ";*/
			d.push_back(score);
		}
		sort(d.begin(), d.end(),greater<double>());//����
		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�
		double sum = accumulate(d.begin(), d.end(), 0.0f);//�ܷ�
		double avg = sum / (double)d.size();//ƽ����
		/*cout << avg << " ";*/
		//��ӡƽ����
		/*cout << "���" << *it << "����:" << this->m_speaker[*it].m_name << "��ȡƽ����" << avg << endl;*/
		//��ƽ���ַ��뵽map������
		this->m_speaker[*it].m_score[this->m_index - 1] = avg;
		//��������� ���뵽��ʱС��������
		groupScore.insert(make_pair(avg, *it));//key�ǵ÷֣�value�Ǿ���ѡ�ֱ��
		if (num % 6 == 0)//��ʱ������СΪ6
		{
			cout << "��" << num / 6 << "С���������: " << endl;
			for (multimap<double, int, greater<double>>::iterator zit = groupScore.begin();zit != groupScore.end();zit++)
			{
				cout << "��ţ�" << zit->second << "������" << this->m_speaker[zit->second].m_name << "�ɼ�:" << zit->first << endl;
			}
			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator sit = groupScore.begin();sit != groupScore.end() && count < 3;sit++, count++)
			{
				if (this->m_index == 1)
				{
					v2.push_back(sit->second);
				}
				else
				{
					v3.push_back(sit->second);
				}
			}
			groupScore.clear();//�������
		}
	}
	cout << "-------��" << this->m_index << "�ֱ������!-------" << endl;
	system("pause");
}
void SpeechManger::showscore()
{
	cout << "-------��" << this->m_index << "�ֽ���ѡ����Ϣ����--------" << endl;
	vector<int>v;
	if (this->m_index == 1)
	{
		v = v2;
	}
	else
	{
		v = v3;
	}
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "ѡ�ֱ�ţ�" << *it << "������" << this->m_speaker[*it].m_name << "�÷֣�" << this->m_speaker[*it].m_score[this->m_index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->menu();
}
void SpeechManger::saveRecord()
{
	ofstream ofs;
	ofs.open("D:\\niu\\speech.csv", ios::out | ios::app);//��׷�ӵķ�ʽд�ļ�
	//��ÿ��ѡ������ д�뵽�ļ���
	for (vector<int>::iterator it = v3.begin();it != v3.end();it++)
	{
		ofs << *it << "," << this->m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;
	cout << "��Ϣ�������" << endl;
	//�ر�
	ofs.close();
	//�����ļ���Ϊ�յ�״̬
	this->fileIsEmpty = false;
}
void SpeechManger::startSpeech()
{
	//��һ�ֿ�ʼ����
	//1.��ǩ
	this->chouqian();
	//2.����
	this->speechContest();
	//3.��ʾ�������
	this->showscore();
	//�ڶ��ֱ���
	this->m_index++;
	//1.��ǩ
	this->chouqian();
	//2.����
	this->speechContest();
	//3.��ʾ�������
	this->showscore();
	//4.�����¼
	this->saveRecord();
	cout << "�������������" << endl;
	this->initspeech();
	//����12��ѡ��
	this->createManger();
	//���������¼
	this->loadRecord();
	system("pause");
	system("cls");
}
void SpeechManger::loadRecord()
{
	int index = 0;
	ifstream ifs("D:\\niu\\speech.csv", ios::in);
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		/*cout << "�ļ�������" << endl;*/
		ifs.close();
		return;
	}
	//�ļ�������
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		/*cout << "�ļ�Ϊ��" << endl;*/
		this->fileIsEmpty = true;
		return;
	}
	//�ļ���Ϊ��
	ifs.putback(ch);//�������ȡ�ĵ����ַ��Ż�
	string data;
	while (ifs >> data)
	{
		/*cout << data << endl;*/
		vector<string>v;//���6���ַ���
		int pos = -1;//�鵽����λ��
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ�
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
	for (map<int, vector<string>>::iterator it = m_Record.begin();it != m_Record.end();it++)
	{
		cout << it->first << "�ھ���ţ�" << it->second[0] << "������" << it->second[1] << endl;
	}
}
void SpeechManger::showrecord()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ��߲�����" << endl;
	}
	else
	{
		for (int i = 0;i < this->m_Record.size();i++)
		{
			cout << "��" << i + 1 << "��" << "�ھ���ţ�" << this->m_Record[i][0] << "�÷�" << this->m_Record[i][1] << " "
				<< "�Ǿ���ţ�" << this->m_Record[i][2] << "�÷�" << this->m_Record[i][3] << " "
				<< "�ھ���ţ�" << this->m_Record[i][4] << "�÷�" << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}
void SpeechManger::clearrecord()
{
	cout << "�Ƿ�����ļ�" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//ȷ�����
		ofstream ofs("D:\\niu\\speech.csv", ios::trunc);//trunc�ļ�������ڱ�ᱻ���
		ofs.clear();
		this->initspeech();
		//����12��ѡ��
		this->createManger();
		//���������¼
		this->loadRecord();
	}
	system("pause");
	system("cls");
}