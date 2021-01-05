//#include <iostream>
//using namespace std;
//
//class Person1 {
//public:
//	void showPerson1()
//	{
//		cout << "showPerson1 调用" << endl;
//	}
//};
//
//class Person2 {
//public:
//	void showPerson2()
//	{
//		cout << "showPerson2 调用" << endl;
//	}
//};
//
//template<class T>
//class myclass{
//public:
//	T obj;
//
//	void fun1() {
//		obj.showPerson1();
//	}
//
//	void fun2() {
//		obj.showPerson2();
//	}
//
//};
//
//void test01() {
//
//	myclass<Person2> person;
//	//person.fun1();
//	person.fun2();
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}