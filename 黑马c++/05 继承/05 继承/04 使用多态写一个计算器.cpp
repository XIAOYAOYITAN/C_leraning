//#include <iostream>
//using namespace std;
//
//class AbstructCalculator {
//public:
//	int m_Num1;
//	int m_Num2;
//
//	virtual int getResult() {
//	
//		return 0;
//	}
//
//};
////�ӷ�������
//class AddCalculator :public AbstructCalculator {
//	
//	int getResult(){
//		return m_Num1 + m_Num2;
//	}
//};
////����������
//class SubCalculator :public AbstructCalculator {
//
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
////�˷�������
//class MulCalculator :public AbstructCalculator {
//
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//
//void tset02(){
//	//��̬ʹ�õ�����������ָ�������ָ���������
//	AbstructCalculator *abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 200;
//	cout << abc->getResult() << endl;
//
//
//}
////int main() {
////	tset02();
////	system("pause");
////	return 0;
////}