#pragma once
#include<iostream>
#include<vector>
#include "speaker.h"
#include<map>
#include<algorithm>
#include<functional>
#include<deque>
#include<numeric>
#include<fstream>
#include<ctime>
using namespace std;

class SpeechManager {
public:
	//构造函数
	SpeechManager();

	//显示菜单
	void showMenu();

	//退出系统
	void ExitSystem();

	//析构函数
	~SpeechManager();

	//创建选手
	void createSpeakers();

	//成员属性初始化
	void SpeakerInit();

	//抽签函数
	void speakerDraw();

	//开始比赛
	void speakerContest();

	//显示比赛分数
	void showScore();

	//保存分数
	void saveRecord();

	//查看记录
	void loadRecord();
	void showRecord();

	//清空记录
	void clearRecord();

	//文件为空的标志
	bool fileisEmpty;

	//往届记录
	map<int, vector<string>> m_Record;

	//第一轮比赛参加者
	vector<int> v1;

	//第二轮比赛参加着，存储的是选手编号
	vector<int> v2;

	//最终获胜者，前三名
	vector<int> v3;

	//选手编号
	map<int, speaker> m_speaker;

	//比赛进行轮数
	int m_Index;

};
