#include<iostream>
using namespace std;
#include"SpeechManager.h"

int main() {

	while (true)
	{	
		srand((unsigned int)time(NULL));
		//显示开始菜单
		SpeechManager sm;
		sm.showMenu();

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:

			//第一轮比赛

			//1. 抽签
			sm.speakerDraw();

			//2. 比赛
			sm.speakerContest();

			//3. 显示晋级结果
			sm.showScore();

			//第二轮比赛
			sm.m_Index++;

			//1. 抽签
			sm.speakerDraw();

			//2. 比赛
			sm.speakerContest();

			//3. 显示最终分数
			sm.showScore();

			//4. 保存分数
			sm.saveRecord();

			cout << "本届比赛已经结束！" << endl;
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