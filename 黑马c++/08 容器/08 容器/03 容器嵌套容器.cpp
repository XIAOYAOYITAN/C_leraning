//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//
//void test01() {
//	//创建大容器
//	vector<vector<int>> v;
//
//	//创建小容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	//给小容器赋值
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i+1);
//		v2.push_back(i+2);
//		v3.push_back(i+3);
//		v4.push_back(i+4);
//	}
//
//	//给大容器填装
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//打印出来
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//		//*it是<vector<int>类型的容器，需要再循环一次取值
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}