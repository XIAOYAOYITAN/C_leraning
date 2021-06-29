///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/generate-parentheses/
//
//2. ԭ��
//22. ��������
//���� n �����������ŵĶ������������һ�������������ܹ��������п��ܵĲ��� ��Ч�� ������ϡ�
//ʾ�� 1��
//
//���룺n = 3
//�����["((()))","(()())","(())()","()(())","()()()"]
//ʾ�� 2��
//
//���룺n = 1
//�����["()"]
//
//3. ���ࣺDFS,����
//
//4. ����Ҫ�㣺����һ���������⣬��Ч�Ķ����ǣ������������ŵ�ʱ���ж�Ӧ��������
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <list>
//using namespace std;
//
/////*************************ʵ�ֺ���*****************************/
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
///*************************main���� �������*****************************/
//int main() {
//	int n = 3;
//	Solution s;
//	s.generateParenthesis(n);
//
//	system("pause");
//	return 0;
//}