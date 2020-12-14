#include <iostream>
using namespace std;
#include <string>
#include <ctype.h>
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_name;
	//�Ա� 1 �� 2Ů
	int m_sex;
	//���� 
	int age;
	//�绰
	string m_phone;
	//סַ
	string m_addr;
};

//���ͨ��¼�ṹ��
struct Addressbooks
{
	//ͨѶ���б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�б������ϵ�˸���
	int m_Size;
};



//�˵�����
void ShowMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1. �����ϵ�� *****" << endl;
	cout << "***** 2. ��ʾ��ϵ�� *****" << endl;
	cout << "***** 3. ɾ����ϵ�� *****" << endl;
	cout << "***** 4. ������ϵ�� *****" << endl;
	cout << "***** 5. �޸���ϵ�� *****" << endl;
	cout << "***** 6. �����ϵ�� *****" << endl;
	cout << "***** 0. �˳�ͨ��¼ *****" << endl;
	cout << "*************************" << endl;
}

// ���ݴ��ܵĿ���̨�������뺯��
int input_int()
{
	int n;
	// ���������ַ�ʱ����ѭ���쳣
	while (!(std::cin >> n) || std::cin.peek() != '\n')
	{
		std::cin.clear();// �ָ�״̬��־
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// �Թ�����
		std::cerr << "�������ݴ�������������:" << std::endl;
		system("pause");
		system("cls");
		ShowMenu();
	}
	return n;
}
//1.�����ϵ��
void Add_Person(struct Addressbooks *abs) {

	//�������
	string name;
	cout << "����������" << endl;
	cin >> name;
	abs->personArray[abs->m_Size].m_name = name;
	//����Ա�
	int sex;
	while (true)
	{
		cout << "�������Ա�: 1 ��ʿ 2 Ůʿ" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[abs->m_Size].m_sex = sex;
			break;
		}
		else
		{
			cout << "����������������룡" << endl;
		}
	}

	//�������
	int age;
	cout << "����������" << endl;
	cin >> age;
	abs->personArray[abs->m_Size].age = age;
	//��ӵ绰
	string phone;
	cout << "������绰" << endl;
	cin >> phone;
	abs->personArray[abs->m_Size].m_phone = phone;
	//���סַ
	string address;
	cout << "������סַ" << endl;
	cin >> address;
	abs->personArray[abs->m_Size].m_addr = address;

	//ͨ��¼index����
	abs->m_Size++;

	//��ӡ������
	system("pause");
	system("cls");
}
//����������ϵ���Ƿ����
int IsExit(Addressbooks *abs, string name) {

	for (int i = 0; i < abs->m_Size; i++) {

		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}

//2.��ʾ������ϵ��
void ShowPerson(struct Addressbooks *abs) {

	if (abs->m_Size == 0) {
		cout << "��ǰͨѶ¼��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			//��ʾ
			cout << "������" << abs->personArray[i].m_name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].age << "\t";
			cout << "��ϵ�绰��" << abs->personArray[i].m_phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_addr << endl;
		}
	}
	system("pause");//�밴���������
	system("cls");//����
}
//3.ɾ����ϵ��
void DeletePerson(Addressbooks *abs) {
	string name;
	cout << "��������ϵ��������" << endl;
	cin >> name;
	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "���޴��ˣ�";
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
			abs->m_Size--;
		}
		cout << "����ϵ����ɾ����" << endl;
	}
	//��ӡ������
	system("pause");
	system("cls");
}

//4.������ϵ��
void FindPerson(Addressbooks *abs) {
	string name;
	cout << "��������ϵ��������" << endl;
	cin >> name;
	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "���޴��ˣ�";
	}
	else
	{
		cout << "������" << abs->personArray[ret].m_name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].age << "\t";
		cout << "��ϵ�绰��" << abs->personArray[ret].m_phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_addr << endl;
	}
	//��ӡ������
	system("pause");
	system("cls");
}

//5. �޸���ϵ��
void modifyPerson(Addressbooks *abs) {
	string name;
	cout << "��������ϵ��������" << endl;
	cin >> name;
	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "���޴��ˣ�";
	}
	else
	{
		//�������
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;
		//����Ա�
		int sex;
		while (true)
		{
			cout << "�������Ա�: 1 ��ʿ 2 Ůʿ" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_sex = sex;
				break;
			}
			else
			{
				cout << "����������������룡" << endl;
			}
		}

		//�������
		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->personArray[ret].age = age;
		//��ӵ绰
		string phone;
		cout << "������绰" << endl;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//���סַ
		string address;
		cout << "������סַ" << endl;
		cin >> address;
		abs->personArray[ret].m_addr = address;

	}
	//��ӡ������
	system("pause");
	system("cls");
}

//6.�����ϵ��
void clearBook(Addressbooks *abs)
{
	cout << "��ȷ��Ҫ���ͨѶ¼��Y:��" << endl;
	string str;
	cin >> str;
	if (str == "Y") {	
		abs->m_Size = 0;
		cout << "ͨѶ������գ�" << endl;

		//��ӡ������
		system("pause");
		system("cls");
	}
	else
	{
		cout << "ȡ�����ͨѶ¼��" << endl;
		//��ӡ������
		system("pause");
		system("cls");
	}
	
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	abs.m_Size = 0;
	//��ʼ��ͨѶ¼�е�ǰ��Ա��ʽ

	int select = 0; //�û�ѡ�����
	while (true)
	{
		//������ʾ�˵�
		ShowMenu();
		select = input_int();
		switch (select)
		{
		case 1://1. �����ϵ��
			Add_Person(&abs);
			break;
		case 2://2. ��ʾ��ϵ��
			ShowPerson(&abs);
			break;
		case 3://3. ɾ����ϵ��
			DeletePerson(&abs);
			break;
		case 4://4. ������ϵ��
			FindPerson(&abs);
			break;
		case 5://5. �޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6. �����ϵ��
			clearBook(&abs);
			break;
		case 0:// 0. �˳�ͨ��¼ 
		{
			cout << "��ӭ�´�ʹ��!" << endl;
			system("pause");
			return 0;
			break;
		}
		default:
			cout << "����������������룡" << endl;
			system("pause");
			system("cls");
			break;
		}

	}
	system("pause");
	return 0;

}
