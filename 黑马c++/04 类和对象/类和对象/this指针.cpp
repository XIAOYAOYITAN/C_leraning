//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//	int  age;
//
//	Person(int age)
//	{
//		//���βκͳ�Ա����ͬ��ʱ��������this�����֣�thisָ��ǰ���õĶ���
//		this->age = age;
//	}
//
//	//���صģ���������ã���ô����p2�ڲ����ۼӣ�����������ã���ʵ��ϵͳ������������P2'.P2''
//	//�����õķ�ʽ���صģ�����P2����ֵ����ʽ���أ����ص���һ��this�Ŀ���
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
//	//��ʽ���˼��
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