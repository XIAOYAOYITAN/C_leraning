#include<iostream>
using namespace std;
#include"SpeechManager.h"

int main() {

	while (true)
	{	
		srand((unsigned int)time(NULL));
		//��ʾ��ʼ�˵�
		SpeechManager sm;
		sm.showMenu();

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:

			//��һ�ֱ���

			//1. ��ǩ
			sm.speakerDraw();

			//2. ����
			sm.speakerContest();

			//3. ��ʾ�������
			sm.showScore();

			//�ڶ��ֱ���
			sm.m_Index++;

			//1. ��ǩ
			sm.speakerDraw();

			//2. ����
			sm.speakerContest();

			//3. ��ʾ���շ���
			sm.showScore();

			//4. �������
			sm.saveRecord();

			cout << "��������Ѿ�������" << endl;
			system("pause");
			system("cls");

			break;
		case 2:

			sm.loadRecord();
			sm.showRecord();
			break;
		case 3:
			sm.clearRecord();
			break;
		case 0:
			sm.ExitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}