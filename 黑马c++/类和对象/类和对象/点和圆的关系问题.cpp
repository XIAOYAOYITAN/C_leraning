//#include <iostream>
//#include "circle.h"
//#include "point.h"
//using namespace std;
//
//
//void IsinCircle() {
//	//����һ����
//	Point p1;
//	p1.getX(10);
//	p1.getY(9);
//
//	//����һ��Բ������Բ�ĺͰ뾶
//	Circle c1;
//	c1.get_r(10);
//	Point Center = c1.put_Center();
//	Center.getX(10);
//	Center.getY(0);
//
//	//�Ƚ��Ƿ���Բ��
//	//������Բ��֮��ľ���
//	int r_distance = (p1.putX() - Center.putX())*(p1.putX() - Center.putX()) +
//		(p1.putY() -Center.putY())*(p1.putY() - Center.putY());
//	int r_s = c1.put_r()*c1.put_r();
//
//	if (r_distance == r_s)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (r_distance < r_s)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
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