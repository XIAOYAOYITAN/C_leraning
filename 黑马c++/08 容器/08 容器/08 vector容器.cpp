//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//void PrintVector(vector<int> &v) {
//
//	for (vector<int>::iterator it = v.begin(); it<v.end(); it++)
//	{
//		cout << *it <<" ";
//	}
//	cout << endl;
//}
//
////1. vector容器的构造
////• vector<t> v; //采用模板实现类实现，默认构造函数
////• vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
////• vector(n, elem); //构造函数将n个elem拷贝给本身。
////vector(const vector &vec); //拷贝构造函数。
//void test01() {
//	vector<int> v1;//无参构造
//	
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);//成员函数push_back用于尾插，popback用于尾删
//	}
//	PrintVector(v1);
//
//	vector<int> v2(v1.begin(), v1.end());
//	PrintVector(v2);
//
//	vector<int> v3(10, 100);
//	PrintVector(v3);
//
//	vector<int> v4(v1);//拷贝构造
//	PrintVector(v1);
//}
//
////2. vector容器的赋值
////• vector& operator=(const vector &vec);//重载等号操作符
////• assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
////assign(n, elem); //将n个elem拷贝赋值给本身。
//void test02() {
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);//成员函数push_back用于尾插，popback用于尾删
//	}
//	PrintVector(v1);
//
//	vector<int> v2;
//	v2 = v1;//等号运算符重载赋值
//	PrintVector(v2);
//
//	vector<int> v3;
//	v3.assign(v2.begin(), v2.end());
//	PrintVector(v3);//assign赋值
//
//	vector<int> v4;
//	v4.assign(10, 100);
//	PrintVector(v4);
//	
//}
//
////3. vector的容量与大小操作
////• empty(); //判断容器是否为空
////• capacity(); //容器的容量
////size(); //返回容器中元素的个数
//
//void test03() {
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);//成员函数push_back用于尾插，popback用于尾删
//	}
//	if (v1.empty())
//	{
//		cout << "容器是空的" << endl;
//	}
//	else
//	{
//		cout << "容器不是空的" << endl;
//		cout << "容量为：" << v1.capacity() << "元素个数为:" << v1.size() << endl;
//	}
//}
//
////• push_back(ele); //尾部插入元素ele
////• pop_back(); //删除最后一个元素
////• insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
////• insert(const_iterator pos, int count, ele);//迭代器指向位置pos插入count个元素ele
////• erase(const_iterator pos); //删除迭代器指向的元素
////• erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
////clear(); //删除容器中所有元素
//void test04() {
//
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	PrintVector(v1);
//
//	v1.pop_back();
//	PrintVector(v1);
//
//	v1.insert(v1.begin() + 2, 100);
//	PrintVector(v1);
//
//	v1.insert(v1.begin() + 3, 3, 30);
//	PrintVector(v1);
//
//	v1.erase(v1.begin() + 2);
//	PrintVector(v1);
//
//	v1.erase(v1.begin() + 3, v1.end());
//	PrintVector(v1);
//
//}
//
////• at(int idx); //返回索引idx所指的数据
////• operator[]; //返回索引idx所指的数据
////• front(); //返回容器中第一个数据元素
////back(); //返回容器中最后一个数据元素
//void test05() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	PrintVector(v1);
//
//	cout<<v1.at(6)<<endl;
//	cout << v1[6] << endl;
//	cout << v1.front() << endl;
//	cout << v1.back()<< endl;
//}
//
//void test06() {
//	vector<int> v1;
//	int count = 0;
//	int* add = NULL;
//	v1.reserve(100000);
//	for (int i = 0; i < 100000; i++) {
//		v1.push_back(i);
//		if (add != &v1[0]) {
//			add = &v1[0];
//			count++;
//		}
//	}
//	cout << count << endl;
//	cout << "容量为：" << v1.capacity() << "元素个数为:" << v1.size() << endl;
//}
//
////swap(vec); // 将vec与本身的元素互换
//void test07() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	cout << "v的容量为：" << v1.capacity() << endl;
//	cout << "v的大小为"<<v1.size() << endl;
//
//	v1.resize(5);
//	cout << "v的容量为：" << v1.capacity() << endl;
//	cout << "v的大小为" << v1.size() << endl;//大小变了容量没变，怎么减小容量呢？
//
//	vector<int>(v1).swap(v1);//先新建一个匿名对象，容量和大小是v1的拷贝构造，再和现在的v1进行交换，交换后系统自动回收空间
//	cout << "v的容量为：" << v1.capacity() << endl;
//	cout << "v的大小为" << v1.size() << endl;
//}
//
//
//int main() {
//
//	test07();
//	system("pause");
//	return 0;
//}