#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;
#include"globalFile.h"
#include<fstream>
#include<functional>
#include<map>
#include<string>
class OrderFile
{
public:
	//���캯��
	OrderFile();
	//����ԤԼ
	void updateOrder();
	//��¼ԤԼ����
	int m_size;
	//��¼����ԤԼ��Ϣ������ key��¼���� value �����¼��ֵ����Ϣ
	map<int, map<string, string>>m_order;
};