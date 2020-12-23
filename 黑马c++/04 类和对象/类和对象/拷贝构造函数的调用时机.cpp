//#include <iostream>
//using namespace std;
//
//
//class Person {
//public:
//	int m_age;
//public:
//	Person() {
//		cout << "这是一个无参构造函数" << endl;
//	}
//	Person(int a) {
//		m_age = a;
//		cout << "这是一个有参构造函数" << endl;
//	}
//	Person(const Person &p) {
//		m_age = p.m_age;
//		cout << "这是一个拷贝构造函数" << endl;
//	}
//	~Person() {
//
//		cout << "这是一个析构函数" << endl;
//	}
//};
//
////使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1;
//	Person p2(p1);
//
//}
//
//void dowork(Person p)//形参在调用的时候，在栈上建立一个类的拷贝
//{
//}
//
////值传递的方式给函数参数传值
//void test02()
//{
//	Person p1;
//	dowork(p1);
//}
//
//Person dowork03(){
//
//	Person p;
//	return p;
//}
//
////以值方式返回局部对象
//void test03()
//{
//	Person p = dowork03();
//
//}
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}
