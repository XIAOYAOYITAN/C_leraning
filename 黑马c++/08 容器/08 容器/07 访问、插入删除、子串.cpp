#include <iostream>
#include <string>
using namespace std;


//char& operator[](int n); //ͨ��[]��ʽȡ�ַ�
//char& at(int n); //ͨ��at������ȡ�ַ�

void test01() {
	string s1 = "Hello World!";
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	string s2 = "Hello C++!";
	for (int i = 0; i < s2.size(); i++)
	{
		cout << s2.at(i) << " ";
	}
	cout << endl;
	

}

//string& insert(int pos, const char* s); //�����ַ���
//string& insert(int pos, const string& str); //�����ַ���
//string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos); //ɾ����Pos��ʼ��n���ַ�

void test02() {

	string s1 = "Hello ";
	s1.insert(1, "111");
	cout << "s1=" << s1 << endl;

	s1.erase(1, 3);
	cout << "s1=" << s1 << endl;

}

//string substr(int pos = 0, int n = npos) const; //������pos��ʼ��n���ַ���ɵ��ַ���
void test03() {

	string s1 = "Hello World!";
	cout<<s1.substr(0, 5)<<endl;
}

void test04() {

	string s1 = "lahangliang@163.com";
	int pos=s1.find("@");
	string name=s1.substr(0, pos);
	cout << name << endl;
}



int main() {

	test04();
	system("pause");
	return 0;
}