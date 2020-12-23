#include "circle.h"


//ÊäÈë°ë¾¶
void Circle::get_r(int r)
{
	c_r = r;
}
//Êä³ö°ë¾¶
int Circle::put_r()
{
	return c_r;
}
//ÊäÈëÔ²ĞÄ
void Circle::get_Center(Point Center)
{
	m_Center = Center;
}
Point Circle::put_Center() {
	return m_Center;
}
