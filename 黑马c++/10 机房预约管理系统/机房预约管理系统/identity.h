#pragma once
#include<iostream>
#include "globalFile.h"
using namespace std;


//��ݳ�����
class Identity
{
public:

	//�����˵�
	virtual void operMenu() = 0;

	string m_Name; //�û���
	string m_Pwd;  //����
};