#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include<string>
#define FILENAME "empFile.txt"
using namespace std;//ʹ�ñ�׼�����ռ�
#include"worker.h"
#include<fstream>
class WorkerManger
{
public:
	WorkerManger();
	~WorkerManger();
	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void Exit();
	//��¼ְ������
	int m_EmpNUM;
	//ְ������ָ��
	worker** m_EmpArray;
	//���ְ��
	void Add_Emp();
	//�����ļ�
	void save();
	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;
	//ͳ���ļ�������
	int get_EmpNum();
	//��ʼ��Ա��
	void init_Emp();
	//��ʾְ��
	void show_Emp();
	//ɾ��ְ��
	void Del_Emp();
	//�ж�ְ���Ƿ����
	int is_Exit(int id);
	//�޸�ְ��
	void Mod_Emp();
	//�жϱ���Ƿ��ظ�
	int panduan(int x);
	//����
	void find();
	//����
	void sort();
	//���
	void clear();
};