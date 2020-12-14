//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//	int  age;
//
//	Person(int age)
//	{
//		//当形参和成员变量同名时，可以用this来区分，this指向当前调用的对象
//		this->age = age;
//	}
//
//	//返回的，如果是引用，那么就是p2在不断累加，如果不是引用，其实是系统在做拷贝生成P2'.P2''
//	//用引用的方式返回的，就是P2，用值的形式返回，返回的是一个this的拷贝
//	Person &PersonAndPerson(Person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//
//	//
//};
//
//void test01()
//{
//	Person p(10);
//	cout << "P_age=" << p.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAndPerson(p1).PersonAndPerson(p1).PersonAndPerson(p1);
//	cout << "P2 age =" << p2.age << endl;
//
//}
//
//int main(){
//
//	test02();
//	system("pause");
//	return 0;
//}