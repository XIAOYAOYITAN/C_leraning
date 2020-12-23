#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	//ÊäÈë°ë¾¶
	void get_r(int r);

	//Êä³ö°ë¾¶
	int put_r();

	//ÊäÈëÔ²ĞÄ
	void get_Center(Point Center);

	Point put_Center();

private:
	Point m_Center;
	int c_r;
};