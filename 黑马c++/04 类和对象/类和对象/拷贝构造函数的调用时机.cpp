//#include <iostream>
//using namespace std;
//
//
//class Person {
//public:
//	int m_age;
//public:
//	Person() {
//		cout << "����һ���޲ι��캯��" << endl;
//	}
//	Person(int a) {
//		m_age = a;
//		cout << "����һ���вι��캯��" << endl;
//	}
//	Person(const Person &p) {
//		m_age = p.m_age;
//		cout << "����һ���������캯��" << endl;
//	}
//	~Person() {
//
//		cout << "����һ����������" << endl;
//	}
//};
//
////ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1;
//	Person p2(p1);
//
//}
//
//void dowork(Person p)//�β��ڵ��õ�ʱ����ջ�Ͻ���һ����Ŀ���
//{
//}
//
////ֵ���ݵķ�ʽ������������ֵ
//void test02()
//{
//	Person p1;
//	dowork(p1);
//}
//
//Person dowork03(){
//
//	Person p;
//	return p;
//}
//
////��ֵ��ʽ���ؾֲ�����
//void test03()
//{
//	Person p = dowork03();
//
//}
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}
