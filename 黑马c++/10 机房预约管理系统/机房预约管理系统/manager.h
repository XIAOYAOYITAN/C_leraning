#pragma once
#include<iostream>
using namespace std;
#include "identity.h"

class Manager :public Identity
{
public:

	//Ĭ�Ϲ���
	Manager();

	//�вι���  ����Ա����������
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();

	//����˺�  
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

};


void managerMenu(Identity * &manager);
