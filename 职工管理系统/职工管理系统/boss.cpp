#include"boss.h"
//��ʾ������Ϣ
void boss::shpwInfo()
{
	cout << "ְ�����: " << this->m_id << "\tְ������: " << this->name << "\t��λ: " << this->getDeptName() << "\t��λְ��: ����˾��������" << endl;
}
//��ȡ��λ����
string boss::getDeptName()
{
	return string("�ܲ�");
}
boss::boss(int id, string name, int Did)
{
	this->m_id = id;
	this->name = name;
	this->m_Did = Did;
}