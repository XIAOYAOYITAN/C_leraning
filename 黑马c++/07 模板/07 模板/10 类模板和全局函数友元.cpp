//#include <iostream>
//#include  <string>
//using namespace std;
//
////����ʵ�֣���������ģ���������·���ȫ�ֺ����������ñ�������ǰ����
//template<class T1, class T2>
//class Person ;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p);
//
////��ģ�嶨��
//template<class T1,class T2>
//class Person {
//
////1. ȫ�ֺ���������ʵ��
//friend void printPerson(Person<T1, T2> &p)
//{
//	cout << "����ʵ�� ----  Name: " << p.mName << "Age: " << p.mAge << endl;
//}
//
////2. ȫ�ֺ���������ʵ��,����,��Ҫ�Ӽ����Ų�Ҫ���ǣ�
//friend void printPerson2<>(Person<T1,T2> &p);
//
//public:
//	Person(T1 name, T2 age) {
//		mName = name;
//		mAge = age;
//	}
//private:
//	T1 mName;
//	T2 mAge;
//};
//void test01() {
//
//	Person<string,int> p("xiaoyao",24);
//	printPerson(p);
//	printPerson2(p);
//
//}
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p) {
//	cout << "����ʵ�� ----  Name: " << p.mName << "Age: " << p.mAge << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}