#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	//����뾶
	void get_r(int r);

	//����뾶
	int put_r();

	//����Բ��
	void get_Center(Point Center);

	Point put_Center();

private:
	Point m_Center;
	int c_r;
};