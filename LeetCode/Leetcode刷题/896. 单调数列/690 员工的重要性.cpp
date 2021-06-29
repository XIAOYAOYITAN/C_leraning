///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/employee-importance/
//
//2. 原题：
//690. 员工的重要性
//给定一个保存员工信息的数据结构，它包含了员工 唯一的 id ，重要度 和 直系下属的 id 。
//
//比如，员工 1 是员工 2 的领导，员工 2 是员工 3 的领导。他们相应的重要度为 15 , 10 , 5 。那么员工 1 的数据结构是 [1, 15, [2]] ，员工 2的 数据结构是 [2, 10, [3]] ，员工 3 的数据结构是 [3, 5, []] 。注意虽然员工 3 也是员工 1 的一个下属，但是由于 并不是直系 下属，因此没有体现在员工 1 的数据结构中。
//
//现在输入一个公司的所有员工信息，以及单个员工 id ，返回这个员工和他所有下属的重要度之和。
//
//示例：
//输入：[[1, 5, [2, 3]], [2, 3, []], [3, 3, []]], 1
//输出：11
//解释：
//员工 1 自身的重要度是 5 ，他有两个直系下属 2 和 3 ，而且 2 和 3 的重要度均为 3 。因此员工 1 的总重要度是 5 + 3 + 3 = 11 。
//
//3. 归类：二叉树的遍历，dfs，bfs
//
//4. 解题要点
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//#include <queue>
//using namespace std;
//
///*************************实现函数*****************************/
//
//// Definition for Employee.
//class Employee {
//public:
//	int id;
//	int importance;
//	vector<int> subordinates;
//};
//
////自己最早想到的方法是用dfs做递归，每次找到id之后再去遍历查找id，时间复杂度较高但不花费额外的空间
////class Solution {
////public:
////	int imp_sum;
////	int getImportance(vector<Employee*> employees, int id) {
////		imp_sum = 0;
////		for (int i = 0; i < employees.size(); i++)
////		{
////			if (employees[i]->id==id)
////			{
////				imp_sum += employees[i]->importance;
////				dfs(employees,i);
////			}
////		}
////		return imp_sum;
////	}
////
////	void dfs(vector<Employee*> &employees, int index) {
////		for (auto id : employees[index]->subordinates)
////		{
////			for (int i = 0; i < employees.size(); i++)
////			{
////				if (employees[i]->id == id)
////				{
////					imp_sum += employees[i]->importance;
////					dfs(employees, i);
////				}
////			}	
////		}
////	}
////};
//
//////官方解法1，使用哈希表，先把id作为职员的标识，方便查找，然后用dfs遍历树
////class Solution {
////public:
////	unordered_map<int, Employee *> map;
////	int getImportance(vector<Employee*> employees, int id) {
////		//首先把员工遍历一遍，放到哈希表中
////		for (auto ee : employees) {
////			map.insert(make_pair(ee->id, ee));
////		}
////		//从最初的id开始做dfs
////		return dfs(map, id);
////
////	}
////	int dfs(unordered_map<int, Employee *> &map, int id){
////		int sum=map[id]->importance;
////		for (auto ee : map[id]->subordinates)
////		{
////			sum+=dfs(map,ee);
////		}
////		return sum;
////	}
////};
//
////官方解法2：同样适用哈希表，用BFS广度优先
//class Solution {
//public:
//	int getImportance(vector<Employee *> employees, int id) {
//		unordered_map<int, Employee *> mp;
//		for (auto &employee : employees) {
//			mp[employee->id] = employee;
//		}
//
//		int total = 0;
//		queue<int> que;
//		que.push(id);
//		while (!que.empty()) {
//			int curId = que.front();
//			que.pop();
//			Employee *employee = mp[curId];
//			total += employee->importance;
//			for (int subId : employee->subordinates) {
//				que.push(subId);
//			}
//		}
//		return total;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//	Employee e1 = { 1, 5, {2, 3} };
//	Employee e2 = { 2, 3,{} };
//	Employee e3 = { 3, 3,{} };
//
//	vector<Employee *> employees ;
//	employees.push_back(&e1);
//	employees.push_back(&e2);
//	employees.push_back(&e3);
//
//	int id=1;
//	Solution s1;
//	cout<<s1.getImportance(employees, id);
//
//	system("pause");
//	return 0;
//}