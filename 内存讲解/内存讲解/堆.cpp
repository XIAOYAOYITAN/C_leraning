//#include <iostream>
//using namespace std;
//
////
//int *func() {
//
//	int *p = new int(10);
//	return p;
//}
//
//int *test02() {
//
//	int *p = new int[10];
//	return p;
//}
//
//int main() {
//
//	int *b = test02();//将返回的地址存到指针p
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(b + i) = 100 + i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *(b + i) << endl;//打印p所指向的内容
//	}
//	delete[] b;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *(b + i) << endl;//打印p所指向的内容
//	}
//
//	system("pause");
//	return 0;
//
//}