//��ְͨ���ļ�
#include"worker.h";
class Employee :public worker
{
public:
	//��д�����麯��
	//��ʾ������Ϣ
	virtual void shpwInfo();
	//��ȡ��λ����
	virtual string getDeptName();
	//���캯��
	Employee(int id,string name,int Did);

};