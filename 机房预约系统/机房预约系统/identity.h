#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>
#include<fstream>
#include"globalFile.h"
#include<vector>
using namespace std;
//��������
class Idenity
{
public:
	//�����˵� ���麯��
	virtual void openmenu() = 0;
	//�û���
	string m_name;
	//����
	string m_pass;
};