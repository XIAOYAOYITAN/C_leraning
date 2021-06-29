///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/generate-parentheses/
//
//2. 原题
//22. 括号生成
//数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
//示例 1：
//
//输入：n = 3
//输出：["((()))","(()())","(())()","()(())","()()()"]
//示例 2：
//
//输入：n = 1
//输出：["()"]
//
//3. 归类：DFS,回溯
//
//4. 解题要点：又是一个括号问题，有效的定义是，在遇到右括号的时候，有对应的左括号
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <list>
//using namespace std;
//
/////*************************实现函数*****************************/
////class Solution {
////public:
////	int sum_left;
////	int sum_right;
////	vector<string> out;
////	vector<string> generateParenthesis(int n) {
////		sum_left = n;
////		sum_right = n;
////		string path = {};
////		dfs(path);
////		return out;
////	}
////
////	void dfs(string &path) {
////		if (sum_left == 0 && sum_right == 0)
////		{
////			out.push_back(path);
////			return;
////		}
////		if (sum_left <= sum_right) {
////			if (sum_left > 0) {
////				sum_left--; path.push_back('('); dfs(path);
////				path.pop_back(); sum_left++;
////			}
////			if (sum_right > 0) {
////				sum_right--; path.push_back(')'); dfs(path);
////				path.pop_back(); sum_right++;
////			}
////		}
////	}
////};
//
//class Solution {
//	shared_ptr<vector<string>> cache[100] = { nullptr };
//public:
//	shared_ptr<vector<string>> generate(int n) {
//		if (cache[n] != nullptr)
//			return cache[n];
//		if (n == 0) {
//			cache[0] = shared_ptr<vector<string>>(new vector<string>{ "" });
//		}
//		else {
//			auto result = shared_ptr<vector<string>>(new vector<string>);
//			for (int i = 0; i != n; ++i) {
//				auto lefts = generate(i);
//				auto rights = generate(n - i - 1);
//				for (const string& left : *lefts)
//					for (const string& right : *rights)
//						result->push_back("(" + left + ")" + right);
//			}
//			cache[n] = result;
//		}
//		return cache[n];
//	}
//	vector<string> generateParenthesis(int n) {
//		return *generate(n);
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int n = 3;
//	Solution s;
//	s.generateParenthesis(n);
//
//	system("pause");
//	return 0;
//}