//#include <iostream>
//#include <string>
//using namespace std;
//#include "MyArray.hpp"
//
//void test01() {
//	MyArray<int> arr(5);
//	MyArray<int> arr1(arr);
//	MyArray<int> arr2(10);
//	arr2 = arr;
//}
//
////打印数组所有元素的函数
//void printArray(MyArray<int> &arr) {
//
//	for (int i = 0; i < arr.get_size(); i++) {
//		cout << arr[i] << endl;
//	}
//}
//
//void test02() {
//	MyArray<int> arr(5);
//	//测试尾插法
//	for (int i = 0; i < arr.get_capacity(); i++)
//	{
//		arr.Push_Back(i);
//	}
//	
//	printArray(arr);
//	
//}
//
//class Person {
//public:
//	Person() {};
//	Person(string name, int age) {
//		this->m_age = age;
//		this->m_name = name;	
//	}
//
//	void printPerson() {
//		cout << "姓名："<<this->m_name<<"年龄："<<this->m_age << endl;
//	}
//
//public:
//	string m_name;
//	int m_age;
//
//};
//
//void printPerson(MyArray<Person> &arr)
//{
//	for (int i = 0; i < arr.get_size(); i++)
//	{
//		arr[i].printPerson();
//	}
//
//}
//
//void test03() {
//
//	MyArray<Person> arr(6);
//	Person P1("孙悟空", 9999);
//	Person P2("唐僧", 999);
//	Person P3("猪八戒", 99);
//	Person P4("沙和尚", 9);
//	Person P5("白龙马", 666);
//
//	arr.Push_Back(P1);
//	arr.Push_Back(P2);
//	arr.Push_Back(P3);
//	arr.Push_Back(P4);
//	arr.Push_Back(P5);
//
//	printPerson(arr);
//
//	arr.Pop_Back();
//
//	printPerson(arr);
//
//	
//}
//
//int main() {
//
//	test03();
//
//	system("pause");
//	return 0;
//}