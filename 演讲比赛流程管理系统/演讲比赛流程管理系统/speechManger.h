#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include<vector>
#include"speaker.h"
#include<map>
#include<string>
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<ctime>
#include<fstream>
using namespace std;
//����ݽ�������
class SpeechManger
{
public:
	//���캯��
	SpeechManger();
	//��������
	~SpeechManger();
	//�˵�����
	void menu();
	//�˳�ϵͳ
	void exitsys();
	//��ʼ������������
	void initspeech();
	//����12��ѡ��
	void createManger();
	void startSpeech();
	//����
	void speechContest();
	//��Ա����
	//�����һ�ֱ���ѡ�ֱ�ŵ�����
	vector<int>v1;
	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;
	//ʤ��ǰ�����Լ���Ӧ����ѡ������
	vector<int>v3;
	map<int, speaker>m_speaker;
	//��ű�������
	int m_index;
	//��ǩ
	void chouqian();
	//��ʾ�������
	void showscore();
	//�����ļ�
	void saveRecord();
	//��ȡ��¼
	void loadRecord();
	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
	//��������¼������
	map<int, vector<string>>m_Record;
	//չʾ�����¼����
	void showrecord();
	//��ռ�¼
	void clearrecord();
};