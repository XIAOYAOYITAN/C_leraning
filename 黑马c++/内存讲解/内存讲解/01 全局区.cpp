#include <iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;

//ȫ�־�̬����
static int s_g_a = 10;
static int s_g_b = 10;

//�������λ��
int main1() {

	//�ֲ�����
	int l_a = 10;
	int l_b = 10;

	//�ֲ�����
	const int c_l_a = 10;
	const int c_l_b = 10;

	//�ֲ���̬����
	static int s_l_a = 10;
	static int s_l_b = 10;

	cout << "�ֲ�����l_a  �Ĵ�ŵ�ַΪ0x" << &l_a << endl;
	cout << "�ֲ�����l_b  �Ĵ�ŵ�ַΪ0x" << &l_b << endl;

	cout << "�ֲ�����g_a  �Ĵ�ŵ�ַΪ0x" << &g_a << endl;
	cout << "�ֲ�����g_b  �Ĵ�ŵ�ַΪ0x" << &g_b << endl;

	cout << "ȫ�ֳ���c_g_a�Ĵ�ŵ�ַΪ0x" << &c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�Ĵ�ŵ�ַΪ0x" << &c_g_b << endl;

	cout << "�ֲ�����c_l_a�Ĵ�ŵ�ַΪ0x" << &c_l_a << endl;
	cout << "�ֲ�����c_l_b�Ĵ�ŵ�ַΪ0x" << &c_l_b << endl;

	cout << "ȫ�־�̬����s_g_a�Ĵ�ŵ�ַΪ0x" << &s_g_a << endl;
	cout << "ȫ�־�̬����s_g_b�Ĵ�ŵ�ַΪ0x" << &s_g_b << endl;

	cout << "�ֲ���̬����s_l_a�Ĵ�ŵ�ַΪ0x" << &s_l_a << endl;
	cout << "�ֲ���̬����s_l_b�Ĵ�ŵ�ַΪ0x" << &s_l_b << endl;

	system("pause");
	return 0;

}
