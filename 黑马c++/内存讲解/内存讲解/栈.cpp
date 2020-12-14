//#include <iostream>
//using namespace std;
//
////
//int *func() {
//
//	int a = 10;//局部变量
//	return &a;//返回局部变量的地址
//}
//
//int main2() {
//
//	int *p = func();//将返回的地址存到指针p
//
//
//	cout << *p << endl;//打印p所指向的内容，第一次由于编译器保存了，所以打印结果是对的
//	cout << *p << endl;//打印p所指向的内容，第二次，打印错误
//	cout << p << endl;
//
//	system("pause");
//	return 0;
//}