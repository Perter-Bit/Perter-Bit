#include"manger.h"
//��ʾ������Ϣ
void manger::shpwInfo()
{
	cout << "ְ�����: " << this->m_id << "\tְ������: " << this->name << "\t��λ: " << this->getDeptName() << "\t��λְ��: ����ϰ彻�������񣬲��·Ÿ�Ա��" << endl;
}
//��ȡ��λ����
string manger::getDeptName()
{
	return string("����");
}
manger::manger(int id,string name, int Did)
{
	this->m_id = id;
	this->name = name;
	this->m_Did = Did;
}