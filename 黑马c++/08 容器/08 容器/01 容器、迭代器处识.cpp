//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void MyPrint(int val) {
//	cout << val << endl;
//
//}
//
//void test01() {
//
//	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ���������
//	vector<int> v;
//
//	//�������з�����
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ÿһ����������һ���������������������������е�Ԫ��
//	//v.begin()ָ�������еĵ�һ��Ԫ��
//	//v.end()ָ�������е����һ��Ԫ�ص���һ��λ��
//	//vector<int>::iterator �õ�vector<int>���������ĵ���������
//
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//
//	////��һ�ֱ�����ʽ
//	//while (pBegin != pEnd)
//	//{
//	//	cout << *pBegin << endl;
//	//	pBegin++;	
//	//}
//
//	////�ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator pBegin = v.begin(); pBegin !=v.end(); pBegin++)
//	//{
//	//	cout << *pBegin << endl;
//	//}
//	//cout << endl;
//
//
//	//�����ֱ�����ʽ,ʹ��STL�ṩ�ı�׼�����㷨
//	for_each(v.begin(), v.end(), MyPrint);
//
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}