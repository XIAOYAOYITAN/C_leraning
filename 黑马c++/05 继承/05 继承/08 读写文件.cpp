//#include <iostream>
//using namespace std;
//#include <fstream>
//#include <string>
//
//void write() {
//	//1. 包含头文件
//
//	//2.创建流数据
//	ofstream ofs;
//	//3.打开文件
//	ofs.open("test.txt", ios::out);
//	//4.写数据
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	//5. 关闭文件
//	ofs.close();
//}
//
//
//void write1() {
//	//1. 包含头文件
//
//	//2.创建流数据
//	ofstream ofs;
//	//3.打开文件
//	ofs.open("test.txt", ios::out);
//	//4.写数据
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	//5. 关闭文件
//	ofs.close();
//}
//
//void read1() {
//	//1.包含头文件
//
//	//2.创建流数据
//	ifstream ifs;
//
//	//3.打开文件
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4.读数据
//	//方式一
//	//char buf[1024] = { 0 };
//	//while (ifs>>buf)
//	//{
//	//	cout << buf << endl;
//
//	//}
//
//	//方式二
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//方式三
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//5.关闭文件
//	ifs.close();
//}
//
//int main() {
//
//	read1();
//
//	system("pause");
//	return 0;
//}