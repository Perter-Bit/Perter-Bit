#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include<string>
using namespace std;//ʹ�ñ�׼�����ռ�
class worker
{
public:
	//��ʾ������Ϣ
	virtual void shpwInfo() = 0;
	//��ȡ��λ����
	virtual string getDeptName() = 0;
	//ְ�����
	int m_id;
	//ְ������
	string name;
	//���ű��
	int m_Did;
};