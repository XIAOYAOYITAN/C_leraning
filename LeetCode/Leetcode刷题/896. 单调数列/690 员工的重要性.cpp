///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/employee-importance/
//
//2. ԭ�⣺
//690. Ա������Ҫ��
//����һ������Ա����Ϣ�����ݽṹ����������Ա�� Ψһ�� id ����Ҫ�� �� ֱϵ������ id ��
//
//���磬Ա�� 1 ��Ա�� 2 ���쵼��Ա�� 2 ��Ա�� 3 ���쵼��������Ӧ����Ҫ��Ϊ 15 , 10 , 5 ����ôԱ�� 1 �����ݽṹ�� [1, 15, [2]] ��Ա�� 2�� ���ݽṹ�� [2, 10, [3]] ��Ա�� 3 �����ݽṹ�� [3, 5, []] ��ע����ȻԱ�� 3 Ҳ��Ա�� 1 ��һ���������������� ������ֱϵ ���������û��������Ա�� 1 �����ݽṹ�С�
//
//��������һ����˾������Ա����Ϣ���Լ�����Ա�� id ���������Ա������������������Ҫ��֮�͡�
//
//ʾ����
//���룺[[1, 5, [2, 3]], [2, 3, []], [3, 3, []]], 1
//�����11
//���ͣ�
//Ա�� 1 �������Ҫ���� 5 ����������ֱϵ���� 2 �� 3 ������ 2 �� 3 ����Ҫ�Ⱦ�Ϊ 3 �����Ա�� 1 ������Ҫ���� 5 + 3 + 3 = 11 ��
//
//3. ���ࣺ�������ı�����dfs��bfs
//
//4. ����Ҫ��
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//#include <queue>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//
//// Definition for Employee.
//class Employee {
//public:
//	int id;
//	int importance;
//	vector<int> subordinates;
//};
//
////�Լ������뵽�ķ�������dfs���ݹ飬ÿ���ҵ�id֮����ȥ��������id��ʱ�临�ӶȽϸߵ������Ѷ���Ŀռ�
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
//////�ٷ��ⷨ1��ʹ�ù�ϣ���Ȱ�id��ΪְԱ�ı�ʶ��������ң�Ȼ����dfs������
////class Solution {
////public:
////	unordered_map<int, Employee *> map;
////	int getImportance(vector<Employee*> employees, int id) {
////		//���Ȱ�Ա������һ�飬�ŵ���ϣ����
////		for (auto ee : employees) {
////			map.insert(make_pair(ee->id, ee));
////		}
////		//�������id��ʼ��dfs
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
////�ٷ��ⷨ2��ͬ�����ù�ϣ����BFS�������
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
///*************************main���� �������*****************************/
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