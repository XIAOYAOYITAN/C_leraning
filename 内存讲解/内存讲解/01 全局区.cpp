#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

//全局静态变量
static int s_g_a = 10;
static int s_g_b = 10;

//变量存放位置
int main1() {

	//局部变量
	int l_a = 10;
	int l_b = 10;

	//局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;

	//局部静态变量
	static int s_l_a = 10;
	static int s_l_b = 10;

	cout << "局部变量l_a  的存放地址为0x" << &l_a << endl;
	cout << "局部变量l_b  的存放地址为0x" << &l_b << endl;

	cout << "局部变量g_a  的存放地址为0x" << &g_a << endl;
	cout << "局部变量g_b  的存放地址为0x" << &g_b << endl;

	cout << "全局常量c_g_a的存放地址为0x" << &c_g_a << endl;
	cout << "全局常量c_g_b的存放地址为0x" << &c_g_b << endl;

	cout << "局部常量c_l_a的存放地址为0x" << &c_l_a << endl;
	cout << "局部常量c_l_b的存放地址为0x" << &c_l_b << endl;

	cout << "全局静态变量s_g_a的存放地址为0x" << &s_g_a << endl;
	cout << "全局静态变量s_g_b的存放地址为0x" << &s_g_b << endl;

	cout << "局部静态变量s_l_a的存放地址为0x" << &s_l_a << endl;
	cout << "局部静态变量s_l_b的存放地址为0x" << &s_l_b << endl;

	system("pause");
	return 0;

}
