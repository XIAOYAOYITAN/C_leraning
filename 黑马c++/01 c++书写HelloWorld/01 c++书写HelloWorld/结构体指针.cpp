//#include <iostream>
//#include <string>
//using namespace std;
//
//	struct student {
//		string name;
//		int age;
//		int score;
//	};
////�ṹ��ָ��
//	void printStudent1(struct student s)
//	{
//		s.age = 100;
//		cout << "ֵ���ݣ�������" << s.name << "����:" << s.age << "����:" << s.score << endl;
//	}
//	void printStudent2(const student *p) {
//	
//		//����const�����Խ�������Ϊֻ������ֹд�������Ӻ�����ԭ������������
//		//p->age = 100;
//		cout << "��ַ����;������"<<p->name <<"���䣺"<< p->age <<"������"<< p->score << endl;
//	}
//
//int main(){
//	
//	//1.����ѧ���ṹ�����
//	struct student s = { "����",18,100 };
//
//	//2.ͨ��ָ��ָ��ṹ�����
//	//int *p = &s;//����
//	student *p = &s;
//
//	//3.ͨ��ָ����ʽṹ������е�����
//	
//	//printStudent1(s);
//	printStudent2(&s);
//	cout << "���������������" << p->name << "����" << p->age << "����" << p->score << endl;
//	system("pause");
//
//	return 0;
//}