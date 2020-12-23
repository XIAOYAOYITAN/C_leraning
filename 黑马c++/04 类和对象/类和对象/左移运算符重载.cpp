#include <iostream>
using namespace std;
#include <string>

class Person
{
	//用友元来进行私密数据访问
	friend ostream & operator<<(ostream &cout, Person p);
public:
	//无法在成员属性中定义左移运算符
	//用析构函数来进行参数初始化传入
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
};

//在全局函数中定义左移运算符
//链式编程思想，输入的第一个参数和返回的参数类型相同，为结构体引用调用
ostream & operator<<(ostream &cout,Person p) {
	cout << "m_A=" << p.m_A << "\t m_B=" << p.m_B;
	return cout;
}

void test01() {

	Person p(10,10);
	cout << p << endl;

}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//
//} 