#include"employee.h";
//��ʾ������Ϣ
void Employee::shpwInfo()
{
	cout << "ְ�����: " << this->m_id << "\tְ������: " << this->name << "\t��λ: " << this->getDeptName()<<"\t��λְ��: ��ɾ�����������"<<endl;
}
//��ȡ��λ����
string Employee::getDeptName()
{
	return string("Ա��");
}
//���캯��
Employee::Employee(int id, string name, int Did)
{
	this->m_id = id;
	this->name = name;
	this->m_Did = Did;
}