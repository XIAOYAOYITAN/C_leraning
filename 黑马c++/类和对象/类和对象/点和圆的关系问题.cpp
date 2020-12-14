//#include <iostream>
//#include "circle.h"
//#include "point.h"
//using namespace std;
//
//
//void IsinCircle() {
//	//输入一个点
//	Point p1;
//	p1.getX(10);
//	p1.getY(9);
//
//	//输入一个圆，包含圆心和半径
//	Circle c1;
//	c1.get_r(10);
//	Point Center = c1.put_Center();
//	Center.getX(10);
//	Center.getY(0);
//
//	//比较是否在圆上
//	//计算点和圆心之间的距离
//	int r_distance = (p1.putX() - Center.putX())*(p1.putX() - Center.putX()) +
//		(p1.putY() -Center.putY())*(p1.putY() - Center.putY());
//	int r_s = c1.put_r()*c1.put_r();
//
//	if (r_distance == r_s)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (r_distance < r_s)
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout << "点在圆外" << endl;
//	}
//
//}
//
//
//int main() {
//
//	IsinCircle();
//
//	system("pause");
//	return 0;
//}