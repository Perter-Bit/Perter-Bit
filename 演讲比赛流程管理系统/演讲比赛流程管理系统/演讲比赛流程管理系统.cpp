#include"speechManger.h"
int main()
{
	srand((unsigned int)time(NULL));
	//�������������
	SpeechManger sm;
	int choice = 0;
	while (true)
	{
		sm.menu();
		cout << "����������ѡ��" << endl;
	    cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴���������¼
			sm.showrecord();
			break;
		case 3://���������¼
			sm.clearrecord();
			break;
		case 0://�˳�ϵͳ
			sm.exitsys();
			break;
		default:
			system("cls");//����
		}
	}
	system("pause");
	return 0;
}