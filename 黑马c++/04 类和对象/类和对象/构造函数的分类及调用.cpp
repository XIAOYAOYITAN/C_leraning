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
//void test()
//{
//	//���ŷ�
//	//Person p1;//�޲ε���
//	//Person p2(10);//�вε���
//	//Person p3(p2);//��������
//	//cout << "p2_age=" << p2.m_age << endl;
//	//cout << "p3_age=" << p3.m_age << endl;
//
//
//	//��ʾ��
//	//Person p1;
//	//Person p2 = Person(10);
//	//Person p3 = Person(p2);
//	//Person(10)����д������������  ��ǰ�н���֮����������
//	//Person(10);
//	//cout << "aaaa" << endl;
//	//ע��2���������ÿ������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������
//	//Person(p3);
//
//	//��ʽת����
//	Person p1;
//	Person p2 = 10;
//	Person P3 = p2;
//
//
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}