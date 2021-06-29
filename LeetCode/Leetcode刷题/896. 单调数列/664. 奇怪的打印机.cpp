///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/strange-printer/
//
//2. 原题
//664. 奇怪的打印机
//有台奇怪的打印机有以下两个特殊要求：
//
//打印机每次只能打印由 同一个字符 组成的序列。
//每次可以在任意起始和结束位置打印新字符，并且会覆盖掉原来已有的字符。
//给你一个字符串 s ，你的任务是计算这个打印机打印它需要的最少打印次数。
//
//
//示例 1：
//
//输入：s = "aaabbb"
//输出：2
//解释：首先打印 "aaa" 然后打印 "bbb"。
//示例 2：
//
//输入：s = "aba"
//输出：2
//解释：首先打印 "aaa" 然后在第二个位置打印 "b" 覆盖掉原来的字符 'a'。
//
//3. 归类：动态规划，滑动窗口
//
//4. 解题要点：若已知区间[i,j]的打印次数，考虑[i,j]的打印次数， 两种情况，
//1.若头尾相同，则f[i][j]=f[i][j-1]
//2.若头尾不同，将区间[i，j]分为两个不同的区间[i,k],[k+1,j],分别计算之后每个区间的最小值
//从大到小枚举i，从小到大枚举j，i<=k<=j
//
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
///*************************实现函数*****************************/
//class Solution {
//public:
//	int strangePrinter(string s) {
//		int length = s.size();
//		vector<vector<int>> pc(length,vector<int>(length));
//		for (int i = length - 1; i >= 0; i--)
//		{
//			pc[i][i] = 1;
//			for (int j = i+1; j < length; j++)
//			{
//				if (s[i] == s[j]) pc[i][j] = pc[i][j - 1];
//				else
//				{
//					int min=INT_MAX;
//					for (int k = i ; k < j; k++) {
//						if (min > pc[i][k] + pc[k + 1][j])
//							min = pc[i][k] + pc[k + 1][j];
//					}
//					pc[i][j] = min;
//				}
//
//			}
//		}
//		return pc[0][length - 1];
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	string s = "abab";
//	Solution S;
//	cout<<S.strangePrinter(s)<<endl;
//
//	system("pause");
//	return 0;
//}