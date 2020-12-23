#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	void getX(int x);

	//输出x坐标
	int putX();

	//输入Y坐标
	void getY(int y);

	int putY();

private:
	//横坐标
	int p_x;
	//纵坐标
	int p_y;
};