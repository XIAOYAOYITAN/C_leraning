#include "circle.h"


//����뾶
void Circle::get_r(int r)
{
	c_r = r;
}
//����뾶
int Circle::put_r()
{
	return c_r;
}
//����Բ��
void Circle::get_Center(Point Center)
{
	m_Center = Center;
}
Point Circle::put_Center() {
	return m_Center;
}
