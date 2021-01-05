//#include<iostream>
//using namespace std;
//
//#include <string>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////普通函数模板
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////函数的具体化
//template<> bool myCompare(Person & a, Person & b)
//{
//	if (a.m_Name == b.m_Name && a.m_Age == b.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//内置数据类型可以直接使用通用的函数模板
//	bool ret = myCompare(a, b);
//	if (ret)
//	{
//		cout << "a == b " << endl;
//	}
//	else
//	{
//		cout << "a != b " << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 11);
//	//自定义数据类型，不会调用普通的函数模板
//	//可以创建具体化的Person数据类型的模板，用于特殊处理这个类型
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1 == p2 " << endl;
//	}
//	else
//	{
//		cout << "p1 != p2 " << endl;
//	}
//}
//
//int main() {
//
////	test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}