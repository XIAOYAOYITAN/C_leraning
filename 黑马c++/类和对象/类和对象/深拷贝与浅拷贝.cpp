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
//		cout << "这是一个无参构造函数" << endl;
//	}
//	person(int a,int height) {
//		m_age = a;
//		m_height=new int(height);//在堆区开辟一块空间用来存放height的值，然后用m_height指向它
//		cout << "这是一个有参构造函数" << endl;
//	}
//	person(const person &p) {
//		m_age = p.m_age;
//		m_height=new int(*p.m_height);//重新在堆区开辟一块空间用来存放拷贝构造出的值
//		cout << "这是一个拷贝构造函数" << endl;
//	}
//	~person() {
//		if (m_height != NULL)//用浅拷贝的时候会导致p1和p2对同一块堆区释放两次
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//
//		cout << "这是一个析构函数" << endl;
//	}
//};
//
////浅拷贝
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
