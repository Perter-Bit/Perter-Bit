#include"worker.h"
class manger :public worker
{
public:
	//��ʾ������Ϣ
	virtual void shpwInfo();
	//��ȡ��λ����
	virtual string getDeptName();
	//���캯��
	manger(int id, string name, int Did);
};