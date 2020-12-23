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
//void test()
//{
//	//括号法
//	//Person p1;//无参调用
//	//Person p2(10);//有参调用
//	//Person p3(p2);//拷贝调用
//	//cout << "p2_age=" << p2.m_age << endl;
//	//cout << "p3_age=" << p3.m_age << endl;
//
//
//	//显示法
//	//Person p1;
//	//Person p2 = Person(10);
//	//Person p3 = Person(p2);
//	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构
//	//Person(10);
//	//cout << "aaaa" << endl;
//	//注意2：不能利用拷贝构造函数 初始化匿名对象 编译器认为是对象声明
//	//Person(p3);
//
//	//隐式转换法
//	Person p1;
//	Person p2 = 10;
//	Person P3 = p2;
//
//
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}