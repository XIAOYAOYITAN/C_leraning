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
////加法计算器
//class AddCalculator :public AbstructCalculator {
//	
//	int getResult(){
//		return m_Num1 + m_Num2;
//	}
//};
////减法计算器
//class SubCalculator :public AbstructCalculator {
//
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
////乘法计算器
//class MulCalculator :public AbstructCalculator {
//
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//
//void tset02(){
//	//多态使用的条件：父类指针或引用指向子类对象
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