//#include <iostream>
//#include  <string>
//using namespace std;
//
////类外实现，先做函数模板声明，下方做全局函数声明，让编译器提前看到
//template<class T1, class T2>
//class Person ;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p);
//
////类模板定义
//template<class T1,class T2>
//class Person {
//
////1. 全局函数的类内实现
//friend void printPerson(Person<T1, T2> &p)
//{
//	cout << "类内实现 ----  Name: " << p.mName << "Age: " << p.mAge << endl;
//}
//
////2. 全局函数的类外实现,声明,需要加尖括号不要忘记！
//friend void printPerson2<>(Person<T1,T2> &p);
//
//public:
//	Person(T1 name, T2 age) {
//		mName = name;
//		mAge = age;
//	}
//private:
//	T1 mName;
//	T2 mAge;
//};
//void test01() {
//
//	Person<string,int> p("xiaoyao",24);
//	printPerson(p);
//	printPerson2(p);
//
//}
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p) {
//	cout << "类外实现 ----  Name: " << p.mName << "Age: " << p.mAge << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}