#include <iostream>
using namespace std;
#include <string>




class  person
{

private:
	//���� �ɶ���д
	string m_name;
	//���� ֻ��
	int m_age=20;
	//���� ֻд
	string m_password;

public:
	//�޸�����
	void getname(string name)
	{
		m_name = name;
	}
	//��ʾ����
	void showname()
	{
		cout<<"����Ϊ��"<<m_name<<endl;
	}
	//��ʾ����
	void showage()
	{
		cout << "����Ϊ��" << m_age << endl;
	}
	//�޸�����
	void getpassword(string password)
	{
		m_password = password;
	}

};

//int main()
//{
//	//circle circle;
//	//circle.c_r = 10;
//	//cout << "Բ���ܳ�Ϊ�� " << circle.cal_length() << endl;
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