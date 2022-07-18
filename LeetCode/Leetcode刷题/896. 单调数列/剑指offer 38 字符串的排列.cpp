///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/zi-fu-chuan-de-pai-lie-lcof/
//
//2. 原题
//输入一个字符串，打印出该字符串中字符的所有排列。
//你可以以任意顺序返回这个字符串数组，但里面不能有重复元素。
//示例:
//
//输入：s = "abc"
//输出：["abc","acb","bac","bca","cab","cba"]
// 
//限制：
//
//1 <= s 的长度 <= 8
//
//3. 归类：回溯法
//
//4. 解题要点：
//这道题乍眼看上去很简单，每次选择都有两种可能，选或者不选，先选择后递归，然后回溯，不选择递归，
//得到的记录数据就是全部的可能
//限制条件：不能有重复元素，可以先对字符串去重。
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <string>
//using namespace std;
//
//
////解法正确，但是超时，原因：没有剪枝
///*************************实现函数*****************************/
//class Solution {
//public:
//	set<string> rec;//记录总的输出
//	vector<bool> sec;//记录是否被选择
//	vector<string> permutation(string s) {
//		//进行回溯
//		string curr="";
//		sec.resize(s.size(),false);
//		backtrack(s,0,s.size(),curr);
//		vector<string> out(rec.begin(), rec.end());
//		return out;
//	}
//	//有必要传递的数据
//	void backtrack(string s, int index, int n,string curr)
//	{
//		//结束条件
//		if (index == n) {
//			rec.insert(curr);
//			return;
//		}
//		//每次都可能选到s中任意一个元素
//		for (int i = 0; i < s.size(); i++) {
//			if (sec[i] == false) {
//				//当前元素未被选过的情况下，选择当前的元素
//				curr.push_back(s[i]);
//				//标志位为该元素已经使用过
//				sec[i] = true;
//				backtrack(s, ++index, n, curr);
//
//				//回溯到选择之前，不选择当前元素，递归
//				curr.pop_back();
//				backtrack(s, --index, n, curr);
//				sec[i] = false;
//			}	
//		}
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	string s = "aba";
//	Solution S;
//	vector<string> out= S.permutation(s);
//	for (auto it:out)
//	{
//		cout << it << endl;
//	}
//
//	system("pause");
//	return 0;
//}
