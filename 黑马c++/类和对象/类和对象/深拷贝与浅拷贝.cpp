//#include <iostream>
//using namespace std;
//
//
//class person {
//public:
//	int m_age;
//	int *m_height;
//public:
//	person() {
//		cout << "����һ���޲ι��캯��" << endl;
//	}
//	person(int a,int height) {
//		m_age = a;
//		m_height=new int(height);//�ڶ�������һ��ռ��������height��ֵ��Ȼ����m_heightָ����
//		cout << "����һ���вι��캯��" << endl;
//	}
//	person(const person &p) {
//		m_age = p.m_age;
//		m_height=new int(*p.m_height);//�����ڶ�������һ��ռ�������ſ����������ֵ
//		cout << "����һ���������캯��" << endl;
//	}
//	~person() {
//		if (m_height != NULL)//��ǳ������ʱ��ᵼ��p1��p2��ͬһ������ͷ�����
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//
//		cout << "����һ����������" << endl;
//	}
//};
//
////ǳ����
//void test01()
//{
//	person p1(10,160);
//	person p2(p1);
//	cout << "p2_age=" << p1.m_age << "p2_height="<<*p2.m_height<<endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
