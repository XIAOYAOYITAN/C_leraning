///*
//������������5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�
//ʵ�ֲ��裺
//1. ��������ѡ�֣��ŵ�vector��
//2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//4. deque��������һ�飬�ۼ��ܷ�
//5. ��ȡƽ���֣���ֵ��vector�����е�ÿ��ѡ������
//*/
//#include <iostream>
//#include <string>
//#include <vector>
//#include <string>
//#include <deque>
//#include <algorithm>
//#include <ctime>
//
//using namespace std;
//
////ѡ����
//class Person { 
//public:
//	Person(string name, int score) {
//	
//		this->m_name = name;
//		this->m_score = score;
//	}
//	string m_name; 
//	int m_score; 
//};
//
//void PrintVector(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "ѡ������Ϊ��" << (*it).m_name << "   ѡ�ֵ÷�Ϊ��" << (*it).m_score << endl;
//
//	}
//
//}
//
//void CreatePerson(vector<Person> &v) {
//
//
//	string nameplus = "ABCDE";
//	int score = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameplus[i];
//		Person p(name, score);
//		v.push_back(p);//�Ǹ��������������Ǹ�ֵ
//	}
//}
//
//void setScore(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//0��40
//			d.push_back(score);
//		}
//		//���򣬲�ȥ����Сֵ�����ֵ
//		sort(d.begin(), d.end());
//
//		d.pop_back();
//		d.pop_front();
//		////��deque��ӡ��������
//		//cout << (*it).m_name << endl;
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//
//		//��ƽ���ֲ���ֵ��vector����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//		
//			sum += *dit;
//		}
//		int ave = sum / d.size();//ƽ����
//		(*it).m_score = ave;
//	}
//}
//
//int main() {
//	
//	//ƽ��������
//	srand((unsigned int)time(NULL));
//
//	//1.����5��ѡ��
//	vector<Person> v;//���ѡ���õ�vector����v
//	CreatePerson(v);
//	//PrintVector(v);
//	//2.��5��ѡ�ִ��
//	setScore(v);
//
//	//3. ��ʾ���ĵ÷�
//	PrintVector(v);
//
//	system("pause");
//	return 0;
//}