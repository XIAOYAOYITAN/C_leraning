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
	Person p = {"����",18};
	//�������������
	ofstream ofs;
	//���ļ�
	ofs.open("person.txt", ios::out | ios::binary);
	//д�ļ�
	ofs.write((const char *)&p, sizeof(Person));
	ofs.close();
}

void read_binary()
{
	Person p;
	//��������������
	ifstream ifs;
	//���ļ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//���ļ�
	ifs.read(( char *)&p, sizeof(Person));

	//�ر��ļ�
	ifs.close();

	cout << p.m_Name << p.m_Age << endl;
}

int main() {
	read_binary();
	system("pause");
	return 0;
}