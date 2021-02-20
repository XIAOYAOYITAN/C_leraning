///*
//案例描述：有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
//实现步骤：
//1. 创建五名选手，放到vector中
//2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//3. sort算法对deque容器中分数排序，去除最高和最低分
//4. deque容器遍历一遍，累加总分
//5. 获取平均分，赋值给vector容器中的每个选手身上
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
////选手类
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
//		cout << "选手姓名为：" << (*it).m_name << "   选手得分为：" << (*it).m_score << endl;
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
//		string name = "选手";
//		name += nameplus[i];
//		Person p(name, score);
//		v.push_back(p);//是给容器中添加项，不是赋值
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
//			int score = rand() % 41 + 60;//0到40
//			d.push_back(score);
//		}
//		//排序，并去掉最小值和最大值
//		sort(d.begin(), d.end());
//
//		d.pop_back();
//		d.pop_front();
//		////把deque打印出来测试
//		//cout << (*it).m_name << endl;
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//
//		//求平均分并赋值给vector容器
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//		
//			sum += *dit;
//		}
//		int ave = sum / d.size();//平均分
//		(*it).m_score = ave;
//	}
//}
//
//int main() {
//	
//	//平均数种子
//	srand((unsigned int)time(NULL));
//
//	//1.创建5名选手
//	vector<Person> v;//存放选手用的vector容器v
//	CreatePerson(v);
//	//PrintVector(v);
//	//2.给5名选手打分
//	setScore(v);
//
//	//3. 显示最后的得分
//	PrintVector(v);
//
//	system("pause");
//	return 0;
//}