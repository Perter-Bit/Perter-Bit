#include "identity.h"
#pragma once //��ֹͷ�ļ��ظ�����
#include<string>
#include"orderFile.h"
class teacher : public Idenity
{
public:
	//Ĭ�Ϲ���
	teacher();
	//�вι��� 
	teacher(int empid, string name, string pwd);
	//�˵�����
	virtual void openmenu();
	//���ԤԼ
	void validmyorder();
	//�鿴����ԤԼ
	void lookorder();
	int m_empod;
};