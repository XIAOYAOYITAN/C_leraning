//#include <iostream>
//using namespace std;
//#include <fstream>
//#include <string>
//
//void write() {
//	//1. ����ͷ�ļ�
//
//	//2.����������
//	ofstream ofs;
//	//3.���ļ�
//	ofs.open("test.txt", ios::out);
//	//4.д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//	//5. �ر��ļ�
//	ofs.close();
//}
//
//
//void write1() {
//	//1. ����ͷ�ļ�
//
//	//2.����������
//	ofstream ofs;
//	//3.���ļ�
//	ofs.open("test.txt", ios::out);
//	//4.д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//	//5. �ر��ļ�
//	ofs.close();
//}
//
//void read1() {
//	//1.����ͷ�ļ�
//
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4.������
//	//��ʽһ
//	//char buf[1024] = { 0 };
//	//while (ifs>>buf)
//	//{
//	//	cout << buf << endl;
//
//	//}
//
//	//��ʽ��
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//��ʽ��
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main() {
//
//	read1();
//
//	system("pause");
//	return 0;
//}