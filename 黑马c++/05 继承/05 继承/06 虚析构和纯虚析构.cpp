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
//	//	cout << "animal ���캯������" << endl;
//	//}
//	animal()
//	{
//		cout << "animal ���캯�����ã�" << endl;
//	}
//	//������˵�����麯��
//	virtual void speak() = 0;
//
//	//virtual ~animal() {
//	//	cout << "animal ������������" << endl;
//	//}
//
//	virtual ~animal() = 0;
//
//};
//
//animal::~animal()
//{
//	cout << "animal ���������������ã�" << endl;
//}
//
//class cat : public animal {
//public:
//
//	cat(string name) {
//		//�ڶ�������һ���ڴ�������name
//		cout << "cat���캯������" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak() {
//		cout << *m_name <<"Сè��˵��" << endl;
//	}
//
//	~cat() {
//		cout << "cat������������" << endl;
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
//	delete animal;//����ʱ����cat����û��������~catû��ִ�У�ԭ����ִ��delete���࣬û�а취ɾ��������������
//}//����������ڸ�������������м���virtual
//
//int main() {
//
//	test04();
//	system("pause");
//	return 0;
//}
