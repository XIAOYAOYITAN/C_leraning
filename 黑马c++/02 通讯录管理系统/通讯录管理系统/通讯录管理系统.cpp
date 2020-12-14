#include <iostream>
using namespace std;
#include <string>
#include <ctype.h>
#define MAX 1000

//设计联系人结构体
struct Person
{
	//姓名
	string m_name;
	//性别 1 男 2女
	int m_sex;
	//年龄 
	int age;
	//电话
	string m_phone;
	//住址
	string m_addr;
};

//设计通信录结构体
struct Addressbooks
{
	//通讯里中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中保存的联系人个数
	int m_Size;
};



//菜单界面
void ShowMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1. 添加联系人 *****" << endl;
	cout << "***** 2. 显示联系人 *****" << endl;
	cout << "***** 3. 删除联系人 *****" << endl;
	cout << "***** 4. 查找联系人 *****" << endl;
	cout << "***** 5. 修改联系人 *****" << endl;
	cout << "***** 6. 清空联系人 *****" << endl;
	cout << "***** 0. 退出通信录 *****" << endl;
	cout << "*************************" << endl;
}

// 带容错功能的控制台整数输入函数
int input_int()
{
	int n;
	// 处理输入字符时的死循环异常
	while (!(std::cin >> n) || std::cin.peek() != '\n')
	{
		std::cin.clear();// 恢复状态标志
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// 略过缓存
		std::cerr << "输入数据错误，请重新输入:" << std::endl;
		system("pause");
		system("cls");
		ShowMenu();
	}
	return n;
}
//1.添加联系人
void Add_Person(struct Addressbooks *abs) {

	//添加姓名
	string name;
	cout << "请输入姓名" << endl;
	cin >> name;
	abs->personArray[abs->m_Size].m_name = name;
	//添加性别
	int sex;
	while (true)
	{
		cout << "请输入性别: 1 男士 2 女士" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[abs->m_Size].m_sex = sex;
			break;
		}
		else
		{
			cout << "输入错误，请重新输入！" << endl;
		}
	}

	//添加年龄
	int age;
	cout << "请输入年龄" << endl;
	cin >> age;
	abs->personArray[abs->m_Size].age = age;
	//添加电话
	string phone;
	cout << "请输入电话" << endl;
	cin >> phone;
	abs->personArray[abs->m_Size].m_phone = phone;
	//添加住址
	string address;
	cout << "请输入住址" << endl;
	cin >> address;
	abs->personArray[abs->m_Size].m_addr = address;

	//通信录index自增
	abs->m_Size++;

	//打印并清屏
	system("pause");
	system("cls");
}
//遍历查找联系人是否存在
int IsExit(Addressbooks *abs, string name) {

	for (int i = 0; i < abs->m_Size; i++) {

		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}

//2.显示所有联系人
void ShowPerson(struct Addressbooks *abs) {

	if (abs->m_Size == 0) {
		cout << "当前通讯录记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			//显示
			cout << "姓名：" << abs->personArray[i].m_name << "\t";
			cout << "性别：" << (abs->personArray[i].m_sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].age << "\t";
			cout << "联系电话：" << abs->personArray[i].m_phone << "\t";
			cout << "住址：" << abs->personArray[i].m_addr << endl;
		}
	}
	system("pause");//请按任意键继续
	system("cls");//清屏
}
//3.删除联系人
void DeletePerson(Addressbooks *abs) {
	string name;
	cout << "请输入联系人姓名：" << endl;
	cin >> name;
	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "查无此人！";
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
			abs->m_Size--;
		}
		cout << "该联系人已删除！" << endl;
	}
	//打印并清屏
	system("pause");
	system("cls");
}

//4.查找联系人
void FindPerson(Addressbooks *abs) {
	string name;
	cout << "请输入联系人姓名：" << endl;
	cin >> name;
	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "查无此人！";
	}
	else
	{
		cout << "姓名：" << abs->personArray[ret].m_name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].age << "\t";
		cout << "联系电话：" << abs->personArray[ret].m_phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_addr << endl;
	}
	//打印并清屏
	system("pause");
	system("cls");
}

//5. 修改联系人
void modifyPerson(Addressbooks *abs) {
	string name;
	cout << "请输入联系人姓名：" << endl;
	cin >> name;
	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "查无此人！";
	}
	else
	{
		//添加姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;
		//添加性别
		int sex;
		while (true)
		{
			cout << "请输入性别: 1 男士 2 女士" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_sex = sex;
				break;
			}
			else
			{
				cout << "输入错误，请重新输入！" << endl;
			}
		}

		//添加年龄
		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personArray[ret].age = age;
		//添加电话
		string phone;
		cout << "请输入电话" << endl;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//添加住址
		string address;
		cout << "请输入住址" << endl;
		cin >> address;
		abs->personArray[ret].m_addr = address;

	}
	//打印并清屏
	system("pause");
	system("cls");
}

//6.清空联系人
void clearBook(Addressbooks *abs)
{
	cout << "你确定要清空通讯录吗？Y:是" << endl;
	string str;
	cin >> str;
	if (str == "Y") {	
		abs->m_Size = 0;
		cout << "通讯里已清空！" << endl;

		//打印并清屏
		system("pause");
		system("cls");
	}
	else
	{
		cout << "取消清空通讯录！" << endl;
		//打印并清屏
		system("pause");
		system("cls");
	}
	
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	abs.m_Size = 0;
	//初始化通讯录中当前人员格式

	int select = 0; //用户选择变量
	while (true)
	{
		//调用提示菜单
		ShowMenu();
		select = input_int();
		switch (select)
		{
		case 1://1. 添加联系人
			Add_Person(&abs);
			break;
		case 2://2. 显示联系人
			ShowPerson(&abs);
			break;
		case 3://3. 删除联系人
			DeletePerson(&abs);
			break;
		case 4://4. 查找联系人
			FindPerson(&abs);
			break;
		case 5://5. 修改联系人
			modifyPerson(&abs);
			break;
		case 6://6. 清空联系人
			clearBook(&abs);
			break;
		case 0:// 0. 退出通信录 
		{
			cout << "欢迎下次使用!" << endl;
			system("pause");
			return 0;
			break;
		}
		default:
			cout << "输入错误，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}

	}
	system("pause");
	return 0;

}
