#include "identity.h"
#pragma once //��ֹͷ�ļ��ظ�����
#include"computerroom.h"
#include"globalFile.h"
#include"orderFile.h"
class student : public Idenity
{
public:
	//Ĭ�Ϲ���
	student();
	//�вι��� 
	student(int id, string name, string pwd);
	//�˵�����
	virtual void openmenu();
	//����ԤԼ
	void applyorder();
	//�鿴����ԤԼ
	void showmyorder();
	//�鿴����ԤԼ
	void lookorder();
	//ȡ��ԤԼ
	void quxiao();
	int m_id;
	vector<computerroom>vcom;
};