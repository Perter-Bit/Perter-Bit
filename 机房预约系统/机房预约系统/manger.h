#include"identity.h"
#include<string>
#include"student.h"
#include"teacher.h"
#include<algorithm>
#include"computerroom.h"
#pragma once //��ֹͷ�ļ��ظ�����
class manger : public Idenity
{
public:
	//Ĭ�Ϲ���
	manger();
	//�вι��� 
	manger(string name, string pwd);
	//�˵�����
	virtual void openmenu();
	//����˺�
	void addperson();
	//�鿴�˺�
	void showperson();
	//�鿴������Ϣ
	void showcpm();
	//���ԤԼ��¼
	void clean();
	//��ʼ������
	void initvector();
	//����ظ� ����1 ���ѧ��/ְ���� ����2 �������
	bool checkPepeat(int id, int type);
	//ѧ������
	vector<student>vstu;
	//��ʦ����
	vector<teacher>vtea;
	vector<computerroom>vcom;
};