///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/remove-invalid-parentheses/
//
//2. 原题：
//给你一个由若干括号和字母组成的字符串 s ，删除最小数量的无效括号，使得输入的字符串有效。
//返回所有可能的结果。答案可以按 任意顺序 返回。
//示例 1:
//
//输入: "()())()"
//输出: ["()()()", "(())()"]
//示例 2:
//
//输入: "(a)())()"
//输出: ["(a)()()", "(a())()"]
//示例 3:
//
//输入: ")("
//输出: [""]
//
//3. 归类：dfs,回溯
//
//4. 解题要点：判断当前情况下的不同选择分支进行深度优先递归,对当前情况的判断是本题最重要的地方
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <string>
//#include <list>
//using namespace std;
//
///*************************实现函数*****************************/
//class Solution {
//public:
//	unordered_set<string> out;//不重复的输出，使用set去除冲突项
//	vector<string> removeInvalidParentheses(string s) {
//		int count_left = 0;//多余的‘）’
//		int count_right = 0;//多余的‘（’
//		getspare(s, count_left, count_right);
//		string path ;
//		dfs(path,0, s, 0, count_left, count_right);
//
//		vector<string> ret;
//		for (auto it:out)
//		{
//			ret.push_back(it);
//		}
//
//		return ret;
//
//	}
//	//深度优先遍历来记录整条路径上经过的字符，最后保存到set里
//	//参数：path记录遍历经过的路径，cur是路径最末的index
//	//      s是最初的数组,index记录遍历的位置
//	//      left_count和right_count记录剩余的多余括号数目
//	void dfs(string path,int cur,const string& s, int index, int left_count, int right_count) {
//	
//		//终止条件：left_count和right_count都等于0,把剩下部分的字符串放到已经记录的path里直接给到set
//		if (left_count == 0 && right_count == 0) {
//			string tmp = path.substr(0, cur) + s.substr(index, s.size());
//			int l = 0, r = 0;
//			getspare(tmp,l,r);
//			if (l==0&&r==0)
//			{
//				out.insert(tmp);
//			}
//			return;
//		}
//		if (index==s.size()||cur>=s.size())
//		{
//			return;
//		}
//		if (s[index] == '(') //如果碰到左括号,可以删除，也可以不删除，删除的情况下，left_count-1
//		{
//			path.push_back('(');
//			dfs(path,cur+1, s, index+1, left_count, right_count);
//			if (left_count>0)
//			{
//				path.pop_back();
//				dfs(path,cur,s, index+1, left_count-1, right_count);
//			}
//		}
//		else if (s[index] == ')')
//		{
//			path.push_back(')');
//			dfs(path, cur + 1, s, index + 1, left_count, right_count);
//			if (right_count > 0)
//			{
//				path.pop_back();
//				dfs(path, cur , s, index + 1, left_count, right_count-1);
//			}
//		}
//		else
//		{
//			path.push_back(s[index]);
//			dfs(path, cur + 1, s, index + 1, left_count, right_count);
//		}
//	}
//
//	//计算多余的‘(’和‘）’个数
//	void getspare(const string &s, int& left_count, int &right_count) {
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (s[i]=='(')
//			{
//				left_count++;
//			}
//			else if(s[i]==')')
//			{
//				if (left_count>0)
//				{
//					left_count--;
//				}
//				else
//				{
//					right_count++;
//				}
//			}
//		}
//	}
//};
///*************************main函数 输入输出*****************************/
//
//int main() {
//	string s1 = ")d))";
//	Solution slo;
//	vector<string> out=slo.removeInvalidParentheses(s1);
//	for (auto it : out) {
//		cout << it << endl;
//	}
//
//	system("pause");
//	return 0;
//}