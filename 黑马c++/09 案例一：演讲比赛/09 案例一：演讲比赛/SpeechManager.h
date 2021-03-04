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
	//���캯��
	SpeechManager();

	//��ʾ�˵�
	void showMenu();

	//�˳�ϵͳ
	void ExitSystem();

	//��������
	~SpeechManager();

	//����ѡ��
	void createSpeakers();

	//��Ա���Գ�ʼ��
	void SpeakerInit();

	//��ǩ����
	void speakerDraw();

	//��ʼ����
	void speakerContest();

	//��ʾ��������
	void showScore();

	//�������
	void saveRecord();

	//�鿴��¼
	void loadRecord();
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//�ļ�Ϊ�յı�־
	bool fileisEmpty;

	//�����¼
	map<int, vector<string>> m_Record;

	//��һ�ֱ����μ���
	vector<int> v1;

	//�ڶ��ֱ����μ��ţ��洢����ѡ�ֱ��
	vector<int> v2;

	//���ջ�ʤ�ߣ�ǰ����
	vector<int> v3;

	//ѡ�ֱ��
	map<int, speaker> m_speaker;

	//������������
	int m_Index;

};
