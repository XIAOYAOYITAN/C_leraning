#include <iostream>
#include <string>
#include <set>
#include <string>
using namespace std;

class Person {

public:
	Person(string name,int age) {
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

class myCompare {

public:
	bool operator()(const Person &p1, const Person &p2) {
	
		return p1.m_age < p2.m_age;

	}

};

void test01() {

	set<Person,myCompare> s;

	Person p1("����",24);
	Person p2("����", 32);
	Person p3("�ŷ�", 27);
	Person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, myCompare>::iterator it = s.begin(); it != s.end(); it++) {
	
		cout << "����Ϊ��"<<(*it).m_name<<" ����Ϊ��" <<(*it).m_age<< endl;
	}

}

int main() {

	test01();
	system("pause");
	return 0;
}