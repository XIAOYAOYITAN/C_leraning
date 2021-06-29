///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/palindrome-partitioning/
//
//2. 原题
//131. 分割回文串
//给你一个字符串 s，请你将 s 分割成一些子串，使每个子串都是 回文串 。返回 s 所有可能的分割方案。
//回文串 是正着读和反着读都一样的字符串。
//示例 1：
//
//输入：s = "aab"
//输出：[["a","a","b"],["aa","b"]]
//示例 2：
//
//输入：s = "a"
//输出：[["a"]]
//
//3. 归类：DFS
//
//4. 解题要点:不断递归，记录经过的路径，如果是回文可以选择输出，也可以选择不输出
//s到达尾部时，终止
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
//using namespace std;
//
//////做出来了，但是双5%。可以优化
/////*************************实现函数*****************************/
////class Solution {
////public:
////
////	vector<vector<string>> partition(string s) {
////		vector<vector<string>> out;
////		string cur = {};
////		vector<string> path;
////		dfs(path,cur, s,0,out);
////
////		return out;
////
////	}
////	void dfs(vector<string> path, string cur, const string &s,int index, vector<vector<string>> &out) {
////		if (index >= s.length()) {//到达末尾且没有元素暂存
////			if (cur.size() == 0)
////			{
////				out.push_back(path);
////			}
////			return;
////		}
////		cur.push_back(s[index]);
////		//判断cur是否为回文，是回文可以选择输出，或者不输出
////		if (judge(cur)) {
////			//不输出的递归
////			dfs(path, cur, s, index + 1,out);
////
////			path.push_back(cur);//输出的递归
////			cur = {};
////			dfs(path, cur, s, index+1,out);
////		}
////		else //不是回文，继续dfs
////		{
////			dfs(path, cur, s, index+1,out);
////		}
////
////	}
////
////	bool judge(string s) {
////		int i = 0;
////		int j = s.length()-1;
////		while (i<j)
////		{
////			if (s[i] == s[j]) {
////				i++;
////				j--;
////			}
////			else
////			{
////				return false;
////			}
////		}
////		return true;
////	}
////};
//
////官方解法：将全部的dfs变量放在类的我公有变量里，方便迭代更新
//class Solution {
//private:
//	vector<vector<int>> f;
//	vector<vector<string>> ret;
//	vector<string> ans;
//	int n;
//
//public:
//	void dfs(const string& s, int i) {
//		//终止条件，string遍历到终点，将路径上的点全部放入最终结果
//		if (i == n) {
//			ret.push_back(ans);
//			return;
//		}
//		//从当前字符开始，判断回文
//		for (int j = i; j < n; ++j) {
//			if (f[i][j]) {//如果回文
//				ans.push_back(s.substr(i, j - i + 1));//从原本的串中截取一段放入ans中
//				dfs(s, j + 1);//继续dfs,新的起始点为j+1
//				ans.pop_back();//上一个dfs结束，需要回溯
//			}
//		}
//	}
//	//预处理,用一张表存储所有的回文串，标识符为开始点和结束点
//	vector<vector<string>> partition(string s) {
//		n = s.size();
//		f.assign(n, vector<int>(n, true));
//
//		for (int i = n - 1; i >= 0; --i) {
//			for (int j = i + 1; j < n; ++j) {
//				f[i][j] = (s[i] == s[j]) && f[i + 1][j - 1];
//			}
//		}
//
//		dfs(s, 0);
//		return ret;
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	string s = "aab";
//	Solution s1;
//	s1.partition(s);
//
//	system("pause");
//	return 0;
//}
