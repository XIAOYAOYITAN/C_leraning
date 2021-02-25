#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
using namespace std;

#define CEHUA  0
#define MEISHU 1
#define YANFA  2


//•	公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
//•	员工信息有 : 姓名 工资组成；部门分为：策划、美术、研发
//•	随机给10名员工分配部门和工资
//•	通过multimap进行信息的插入 key(部门编号) value(员工)
//•	分部门显示员工信息

class Worker {
public:
	Worker(string name, int salary) {
		this->m_name = name;
		this->m_salary = salary;
	}
public:
	string m_name;
	int m_salary;
};

void createWorker(vector<Worker> &v) {

	string NameSeed = "ABCDEFGHIJ";
		for (int i = 0; i < 10; i++)
		{
			string name = "员工";
			name += NameSeed[i];
			
			int salary = rand() % 10000 + 10000;//10000~19999
			Worker w(name, salary);
			v.push_back(w);
		}
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &map) {
	
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
		int groupname = rand() % 3;//0到2
		map.insert(pair<int, Worker>(groupname, *it));
	}

}

void showGroup(multimap<int, Worker> &map) {

	multimap<int, Worker>::iterator pos=map.find(CEHUA);
	int count=0;
	for (; pos != map.end()&&count<map.count(CEHUA); pos++,count++) {
		cout << "策划部门有：" << endl;
		cout << "员工姓名：" << pos->second.m_name << "  员工薪资：" << pos->second.m_salary << endl;
	}

	cout << "---------------------------------" << endl;
	pos = map.find(MEISHU);
    count = 0;
	for (; pos != map.end() && count < map.count(MEISHU); pos++, count++) {
		cout << "美术部门有：" << endl;
		cout << "员工姓名：" << pos->second.m_name << "  员工薪资：" << pos->second.m_salary << endl;
	}

	cout << "---------------------------------" << endl;
	pos = map.find(YANFA);
	count = 0;
	for (; pos != map.end() && count < map.count(YANFA); pos++, count++) {
		cout << "研发部门有：" << endl;
		cout << "员工姓名：" << pos->second.m_name << "  员工薪资：" << pos->second.m_salary << endl;
	}

}

int main() {
	vector<Worker> vWorker;
	multimap<int, Worker> wMap;

	srand((unsigned int)time(NULL));
	//1. 创建10名员工，并对工资进行随机分配
	createWorker(vWorker);
	
	////打印测试
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++) {
	//
	//	cout << "员工姓名：" << it->m_name << "  员工薪资：" << it->m_salary << endl;
	//}

	//2. 对员工进行分组
	setGroup(vWorker,wMap);

	//3.对分组结果进行展示
	showGroup(wMap);

	system("pause");
	return 0;
}