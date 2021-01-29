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
//	//创建vector容器对象，并且通过模板参数指定容器中存放的数据类型
//	vector<int> v;
//
//	//向容器中放数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//每一个容器都有一个迭代器，用来遍历容器中所有的元素
//	//v.begin()指向容器中的第一个元素
//	//v.end()指向容器中的最后一个元素的下一个位置
//	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//
//	////第一种遍历方式
//	//while (pBegin != pEnd)
//	//{
//	//	cout << *pBegin << endl;
//	//	pBegin++;	
//	//}
//
//	////第二种遍历方式
//	//for (vector<int>::iterator pBegin = v.begin(); pBegin !=v.end(); pBegin++)
//	//{
//	//	cout << *pBegin << endl;
//	//}
//	//cout << endl;
//
//
//	//第三种遍历方式,使用STL提供的标准遍历算法
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