//#include <iostream>
//using namespace std;
//
////
//int *func() {
//
//	int *p = new int(10);
//	return p;
//}
//
//int *test02() {
//
//	int *p = new int[10];
//	return p;
//}
//
//int main() {
//
//	int *b = test02();//�����صĵ�ַ�浽ָ��p
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(b + i) = 100 + i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *(b + i) << endl;//��ӡp��ָ�������
//	}
//	delete[] b;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *(b + i) << endl;//��ӡp��ָ�������
//	}
//
//	system("pause");
//	return 0;
//
//}