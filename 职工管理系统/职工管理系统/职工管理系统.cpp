#include"WorkerManger.h"
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manger.h"
int main()
{
	//ʵ���������߶���
	WorkerManger wm;
	int choice = 0;
	while (true)
	{
		//����չʾ�˵�����
		wm.Show_Menu();
		cout << "���������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.Exit();
			break;
		case 1://����ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.find();
			break;
		case 6://����ְ��
			wm.sort();
			break;
		case 7://����ĵ�
			wm.clear();
			break;
		}

	}
	system("pause");
	return 0;
}