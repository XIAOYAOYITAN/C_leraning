#include <iostream>
using namespace std;
#include <string>




class  person
{

private:
	//姓名 可读可写
	string m_name;
	//年龄 只读
	int m_age=20;
	//密码 只写
	string m_password;

public:
	//修改姓名
	void getname(string name)
	{
		m_name = name;
	}
	//显示姓名
	void showname()
	{
		cout<<"姓名为："<<m_name<<endl;
	}
	//显示年龄
	void showage()
	{
		cout << "年龄为：" << m_age << endl;
	}
	//修改姓名
	void getpassword(string password)
	{
		m_password = password;
	}

};

//int main()
//{
//	//circle circle;
//	//circle.c_r = 10;
//	//cout << "圆的周长为： " << circle.cal_length() << endl;
//
//	person p1;
//	p1.getname ("laihangliang");
//	p1.getpassword ("3150100881");
//	p1.showname();
//	p1.showage();
//
//	system("pause");
//	return 0;
//}