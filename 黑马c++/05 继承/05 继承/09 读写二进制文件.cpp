#include <iostream>
using namespace std;
#include <fstream>
#include <string>

class Person {
public:
	char m_Name[50];
	int m_Age;
};

void write_binary()
{
	Person p = {"张三",18};
	//创建输出流对象
	ofstream ofs;
	//打开文件
	ofs.open("person.txt", ios::out | ios::binary);
	//写文件
	ofs.write((const char *)&p, sizeof(Person));
	ofs.close();
}

void read_binary()
{
	Person p;
	//创建输入流对象
	ifstream ifs;
	//打开文件
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读文件
	ifs.read(( char *)&p, sizeof(Person));

	//关闭文件
	ifs.close();

	cout << p.m_Name << p.m_Age << endl;
}

int main() {
	read_binary();
	system("pause");
	return 0;
}