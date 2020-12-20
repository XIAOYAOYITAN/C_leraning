//#include <iostream>
//using namespace std;
//#include <string>
//
//class animal {
//
//public:
//
//	//animal() 
//	//{
//	//	cout << "animal 构造函数调用" << endl;
//	//}
//	animal()
//	{
//		cout << "animal 构造函数调用！" << endl;
//	}
//	//动物在说话，虚函数
//	virtual void speak() = 0;
//
//	//virtual ~animal() {
//	//	cout << "animal 析构函数调用" << endl;
//	//}
//
//	virtual ~animal() = 0;
//
//};
//
//animal::~animal()
//{
//	cout << "animal 纯虚析构函数调用！" << endl;
//}
//
//class cat : public animal {
//public:
//
//	cat(string name) {
//		//在堆区开辟一块内存用来放name
//		cout << "cat构造函数调用" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak() {
//		cout << *m_name <<"小猫在说话" << endl;
//	}
//
//	~cat() {
//		cout << "cat析构函数调用" << endl;
//		if (m_name != NULL) {	
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	string *m_name;
//};
//
//
//void test04() {
//	animal *animal = new cat("tom");
//	animal->speak();
//	delete animal;//调用时发现cat对象没有析构，~cat没有执行，原因是执行delete父类，没有办法删除子类析构函数
//}//解决方法：在父类的析构函数中加入virtual
//
//int main() {
//
//	test04();
//	system("pause");
//	return 0;
//}
