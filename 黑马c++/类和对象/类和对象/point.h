#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	void getX(int x);

	//���x����
	int putX();

	//����Y����
	void getY(int y);

	int putY();

private:
	//������
	int p_x;
	//������
	int p_y;
};