#include <iostream>
using namespace std;
#include <string>


//其中需要注意的是先定义，后实现的操作手法

//全局函数做友元

////定义一个建筑类，包含客厅和卧室两个属性，并将其初始化
//class Building {
//	friend void GoodGay(Building *building);
//
//public:
////用无参析构函数进行初始化
//	Building()
//	{
//		this->m_settingRoom = "客厅";
//		this->m_bedRoom = "卧室";
//	}
//public:
//	string m_settingRoom;
//private:
//	string m_bedRoom;
//};
//
////定义一个全局函数，这个全局函数可以访问Building类的私有属性
//void GoodGay(Building *building)
//{ 
//	cout << "好基友正在访问：" << building->m_settingRoom << endl;
//	cout << "好基友正在访问：" << building->m_bedRoom << endl;
//}
//void test01()
//{
//	Building B;
//	GoodGay(&B);
//}

//类做友元
//先声明一下，之后再实现
class Building;

class GoodGay {
public:
	GoodGay();
	void visit();
private:
	Building *building;
};

class Building {
	//friend void GoodGay::visit();//成员函数函数作为友元实现访问
	friend class GoodGay;//GoodGay作为Building的友元

public:
	//先声明一下析构函数，之后在类外实现
	Building();
public:
	string m_SettingRoom;
private:
	string m_BedRoom;
};

Building::Building() {
	this->m_BedRoom = "卧室";
	this->m_SettingRoom = "客厅";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友正在访问：" << building->m_SettingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom<< endl;
}

void test02()
{
	GoodGay gg;
	gg.visit();
}


int main() {
	
	test02();
	system("pause");
	return  0;
}