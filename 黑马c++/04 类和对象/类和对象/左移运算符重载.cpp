#include <iostream>
using namespace std;
#include <string>

class Person
{
	//����Ԫ������˽�����ݷ���
	friend ostream & operator<<(ostream &cout, Person p);
public:
	//�޷��ڳ�Ա�����ж������������
	//���������������в�����ʼ������
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
};

//��ȫ�ֺ����ж������������
//��ʽ���˼�룬����ĵ�һ�������ͷ��صĲ���������ͬ��Ϊ�ṹ�����õ���
ostream & operator<<(ostream &cout,Person p) {
	cout << "m_A=" << p.m_A << "\t m_B=" << p.m_B;
	return cout;
}

void test01() {

	Person p(10,10);
	cout << p << endl;

}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//
//} 