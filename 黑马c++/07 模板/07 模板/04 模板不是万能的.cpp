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
////��ͨ����ģ��
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
////�����ľ��廯
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
//	//�����������Ϳ���ֱ��ʹ��ͨ�õĺ���ģ��
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
//	//�Զ����������ͣ����������ͨ�ĺ���ģ��
//	//���Դ������廯��Person�������͵�ģ�壬�������⴦���������
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