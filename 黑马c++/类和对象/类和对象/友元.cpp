#include <iostream>
using namespace std;
#include <string>


//������Ҫע������ȶ��壬��ʵ�ֵĲ����ַ�

//ȫ�ֺ�������Ԫ

////����һ�������࣬���������������������ԣ��������ʼ��
//class Building {
//	friend void GoodGay(Building *building);
//
//public:
////���޲������������г�ʼ��
//	Building()
//	{
//		this->m_settingRoom = "����";
//		this->m_bedRoom = "����";
//	}
//public:
//	string m_settingRoom;
//private:
//	string m_bedRoom;
//};
//
////����һ��ȫ�ֺ��������ȫ�ֺ������Է���Building���˽������
//void GoodGay(Building *building)
//{ 
//	cout << "�û������ڷ��ʣ�" << building->m_settingRoom << endl;
//	cout << "�û������ڷ��ʣ�" << building->m_bedRoom << endl;
//}
//void test01()
//{
//	Building B;
//	GoodGay(&B);
//}

//������Ԫ
//������һ�£�֮����ʵ��
class Building;

class GoodGay {
public:
	GoodGay();
	void visit();
private:
	Building *building;
};

class Building {
	//friend void GoodGay::visit();//��Ա����������Ϊ��Ԫʵ�ַ���
	friend class GoodGay;//GoodGay��ΪBuilding����Ԫ

public:
	//������һ������������֮��������ʵ��
	Building();
public:
	string m_SettingRoom;
private:
	string m_BedRoom;
};

Building::Building() {
	this->m_BedRoom = "����";
	this->m_SettingRoom = "����";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SettingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom<< endl;
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