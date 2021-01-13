#include <iostream>
#include  <string>
using namespace std;

//ÀàÄ£°å
template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age);

	void showPerson();

public:
	NameType mName;
	AgeType mAge;

};

template<class NameType, class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age) {
	this->mName = name;
	this->mAge = age;
}

template<class NameType, class AgeType>
void Person<NameType, AgeType>::showPerson() {
	cout << "name: " << this->mName << "age: " << this->mAge << endl;
}