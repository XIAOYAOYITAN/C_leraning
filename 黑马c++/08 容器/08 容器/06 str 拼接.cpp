//#include <iostream>
//#include <string>
//using namespace std;
//
////string& operator+=(const char* str); //重载+=操作符
////string& operator+=(const char c); //重载+=操作符
////string& operator+=(const string& str); //重载+=操作符
////string& append(const char *s); //把字符串s连接到当前字符串结尾
////string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
////string& append(const string &s); //同operator+=(const string& str)
////string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾
//
//
//void test01() {
//
//	string s1;
//	s1 = "I love ";
//	s1 += "C++";
//	cout << "s1=" << s1<<endl;
//
//	string s2 = " and Python";
//	s1 += s2;
//	cout << "s1=" << s1 << endl;
//
//	s1.append("!");
//	cout << "s1=" << s1 << endl;
//
//	s1.append("ASDFGHJK", 4);
//	cout << "s1=" << s1 << endl;
//
//	s1.append("ASDFGHJK", 5, 4);
//	cout << "s1=" << s1 << endl;
//
//}
//
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}