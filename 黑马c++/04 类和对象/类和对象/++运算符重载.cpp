#include <iostream>
using namespace std;
#include <string>

class Myint {
	friend ostream &operator<<(ostream &cout, Myint a);

public:
	Myint() {
	
		m_A = 10;
	}
	//ǰ��++
	Myint & operator--() {
		this->m_A--;
		return *this;
	}

	//����++
	Myint operator--(int ) {
		//�ȶ���һ����������װ���ڵ�ָ��
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
//�ض���<<���������������Զ�����Myint
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