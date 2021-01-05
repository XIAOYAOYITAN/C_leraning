//#include <iostream>
//#include  <string>
//using namespace std;
//
//template<typename T>
//class Base{
//public:
//	T m;
//};
//
//class Son :public Base<int> //必须指定一个类型
//{
//
//};
//
//void test01() {
//	Son s1;
//}
//
//template<class T1>
//class Son2 :Base<T1>
//{
//public:
//	Son2() {
//
//		cout << typeid(T1).name() << endl;
//		//cout << typeid(T2).name << endl;
//	}
//};
//
//void test02() {
//
//	Son2<int> s2; //指定T1的同时，也指定了T，灵活使用
//	
//}
//
//
//
//
//int main() {
//	test02();
//
//	system("pause");
//	return 0;
//}