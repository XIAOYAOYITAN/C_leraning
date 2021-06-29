///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/form-largest-integer-with-digits-that-add-up-to-target/
//
//2. 原题
//1449. 数位成本和为目标值的最大数字
//给你一个整数数组 cost 和一个整数 target 。请你返回满足如下规则可以得到的 最大 整数：
//
//给当前结果添加一个数位（i + 1）的成本为 cost[i] （cost 数组下标从 0 开始）。
//总成本必须恰好等于 target 。
//添加的数位中没有数字 0 。
//由于答案可能会很大，请你以字符串形式返回。
//
//如果按照上述要求无法得到任何整数，请你返回 "0" 。
//
//示例 1：
//
//输入：cost = [4,3,2,5,6,7,2,5,5], target = 9
//输出："7772"
//解释：添加数位 '7' 的成本为 2 ，添加数位 '2' 的成本为 3 。所以 "7772" 的代价为 2*3+ 3*1 = 9 。 "977" 也是满足要求的数字，但 "7772" 是较大的数字。
// 数字     成本
//  1  ->   4
//  2  ->   3
//  3  ->   2
//  4  ->   5
//  5  ->   6
//  6  ->   7
//  7  ->   2
//  8  ->   5
//  9  ->   5
//示例 2：
//
//输入：cost = [7,6,5,5,5,6,8,7,8], target = 12
//输出："85"
//解释：添加数位 '8' 的成本是 7 ，添加数位 '5' 的成本是 5 。"85" 的成本为 7 + 5 = 12 。
//示例 3：
//
//输入：cost = [2,4,6,2,4,6,4,4,4], target = 5
//输出："0"
//解释：总成本是 target 的条件下，无法生成任何整数。
//示例 4：
//
//输入：cost = [6,10,15,40,40,40,40,40,40], target = 47
//输出："32211"
//
//3. 归类：背包问题（动态规划）
//
//4. 解题要点：
//本题的限制条件有两个：
//1. target
//2. 最大
//我们暂不考虑最大这个限制，从一个数组里面任意取数，最后得到target，典型的硬币问题，用二维动态规划解决
//以前，我们用dp[i][j]表示前i个数能够得到target的组合种类，但现在我们要的并不是种类数目，而是所有可能的情况
//所以这么设定dp是有问题的！
//所以我们把dp[i][j]设置为前i个数字，组成target=j的最大位数，我们先解决这个问题
//在解决这个问题的过程中，我们需要维护每次选择的数字来源，组成最后的输出
//不能选：  dp[i+1][j]=dp[i][j]
//能选：    dp[i+1][j]=max{dp[i][j],dp[i][j-nums[i]]+1}
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
//#include <string>
//using namespace std;
//
/////*************************实现函数*****************************/
////class Solution {
////public:
////	string largestNumber(vector<int>& cost, int target) {
////		int n = cost.size();
////		vector<vector<int>> dp(n + 1,vector<int> (target + 1));//用来记录前i个数字，组成target=j的最大位数
////		vector<vector<int>> from(n + 1, vector<int>(target + 1));//记录转移来源
////		for (int i = 1; i <= target; i++)
////		{
////			dp[0][i] = INT_MIN;
////		}
////
////
////		for (int i = 0; i < n; i++)
////		{
////			for (int j = 0; j <= target; j++)
////			{
////				if (cost[i] > j) {
////					dp[i + 1][j] = dp[i][j];
////					from[i + 1][j] = j;
////				}
////				else
////				{
////					if (dp[i][j] <= dp[i][j - cost[i]] + 1)
////					{
////						dp[i + 1][j] = dp[i+1][j - cost[i]] + 1;//新的数被添加了进去
////						//如何记录
////						from[i + 1][j] = j - cost[i];
////					}
////					else
////					{
////						dp[i + 1][j] = dp[i][j];
////						from[i + 1][j] = j;
////						
////					}
////				}
////
////			}
////		}
////		//循环结束之后通过from数组进行倒推，得到每一步的选择
////		if (dp[9][target] < 0) {
////			return "0";
////		}
////		string ans;
////		int i = 9, j = target;
////		while (i > 0) {
////			if (j == from[i][j]) {
////				--i;
////			}
////			else {
////				ans += '0' + i;
////				j = from[i][j];
////			}
////		}
////		return ans;
////	}
////
////};
//
//class Solution {
//public:
//	string largestNumber(vector<int> &cost, int target) {
//		vector<vector<int>> dp(10, vector<int>(target + 1, INT_MIN));
//		vector<vector<int>> from(10, vector<int>(target + 1));
//		dp[0][0] = 0;
//		for (int i = 0; i < 9; ++i) {
//			int c = cost[i];
//			for (int j = 0; j <= target; ++j) {
//				if (j < c) {
//					dp[i + 1][j] = dp[i][j];
//					from[i + 1][j] = j;
//				}
//				else {
//					if (dp[i][j] > dp[i + 1][j - c] + 1) {
//						dp[i + 1][j] = dp[i][j];
//						from[i + 1][j] = j;
//					}
//					else {
//						dp[i + 1][j] = dp[i + 1][j - c] + 1;
//						from[i + 1][j] = j - c;
//					}
//				}
//			}
//		}
//		if (dp[9][target] < 0) {
//			return "0";
//		}
//		string ans;
//		int i = 9, j = target;
//		while (i > 0) {
//			if (j == from[i][j]) {
//				--i;
//			}
//			else {
//				ans += '0' + i;
//				j = from[i][j];
//			}
//		}
//		return ans;
//	}
//};
//
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> cost = { 6,10,15,40,40,40,40,40,40 };
//	int target = 47;
//	Solution S;
//	cout<<S.largestNumber(cost, target)<<endl;
//
//	system("pause");
//	return 0;
//}