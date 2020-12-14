//#include <iostream>
//#include <string>
//using namespace std;
//
//	struct student {
//		string name;
//		int age;
//		int score;
//	};
////结构体指针
//	void printStudent1(struct student s)
//	{
//		s.age = 100;
//		cout << "值传递；姓名：" << s.name << "年龄:" << s.age << "分数:" << s.score << endl;
//	}
//	void printStudent2(const student *p) {
//	
//		//加入const，可以将参数变为只读，防止写，避免子函数对原函数造成误操作
//		//p->age = 100;
//		cout << "地址传递;姓名："<<p->name <<"年龄："<< p->age <<"分数："<< p->score << endl;
//	}
//
//int main(){
//	
//	//1.创建学生结构体变量
//	struct student s = { "张三",18,100 };
//
//	//2.通过指针指向结构体变量
//	//int *p = &s;//错误
//	student *p = &s;
//
//	//3.通过指针访问结构体变量中的数据
//	
//	//printStudent1(s);
//	printStudent2(&s);
//	cout << "主函数输出：姓名" << p->name << "年龄" << p->age << "分数" << p->score << endl;
//	system("pause");
//
//	return 0;
//}