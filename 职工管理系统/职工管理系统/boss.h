#include"worker.h"
class boss :public worker
{
public:
	//��ʾ������Ϣ
	virtual void shpwInfo();
	//��ȡ��λ����
	virtual string getDeptName();
	boss(int id, string ame, int Did);
};