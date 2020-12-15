#include <iostream>
using namespace std;
#include <string>

class Myint {
	friend ostream &operator<<(ostream &cout, Myint a);

public:
	Myint() {
	
		m_A = 10;
	}
	//前置++
	Myint & operator--() {
		this->m_A--;
		return *this;
	}

	//后置++
	Myint operator--(int ) {
		//先定义一个杯子用来装现在的指针
		Myint temp;
		temp = *this;
		this->m_A--;
		return temp;
	}

private:
	int m_A;
};

void test03() {

	Myint a;
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl;
}
//重定义<<运算符，用来输出自定义类Myint
ostream &operator<<(ostream &cout ,Myint a)
{
	cout << a.m_A ;
	return cout;
}
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//
//}