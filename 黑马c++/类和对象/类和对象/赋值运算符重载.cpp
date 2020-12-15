#include <iostream>
using namespace std;

class Person{
public:
	Person(int A) {		
		m_Age = new int(A);
	}

	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	Person & operator=(Person &p) {
		if (this->m_Age != NULL) {
			delete this->m_Age;
			this->m_Age = NULL;
		}
		this->m_Age =new int(*p.m_Age);

		return *this;
	}

	int * m_Age;
};



void test04() {

	Person p1(18);
	Person p2(20);
	Person p3(20);
	p3=p2 = p1;

	cout << "P1.age=" <<*p1.m_Age<< endl;
	cout << "p2.age=" <<*p2.m_Age <<endl;
	cout << "p3.age=" << *p3.m_Age << endl;

}
//
//int main()
//{
//	test04();
//
//	system("pause");
//	return 0;
//
//}