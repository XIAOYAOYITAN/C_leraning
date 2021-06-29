///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/target-sum/
//
//2. 原题：
//494. 目标和
//给你一个整数数组 nums 和一个整数 target 。
//
//向数组中的每个整数前添加 '+' 或 '-' ，然后串联起所有整数，可以构造一个 表达式 ：
//
//例如，nums = [2, 1] ，可以在 2 之前添加 '+' ，在 1 之前添加 '-' ，然后串联起来得到表达式 "+2-1" 。
//返回可以通过上述方法构造的、运算结果等于 target 的不同 表达式 的数目。
//
//示例 1：
//
//输入：nums = [1,1,1,1,1], target = 3
//输出：5
//解释：一共有 5 种方法让最终目标和为 3 。
//-1 + 1 + 1 + 1 + 1 = 3
//+1 - 1 + 1 + 1 + 1 = 3
//+1 + 1 - 1 + 1 + 1 = 3
//+1 + 1 + 1 - 1 + 1 = 3
//+1 + 1 + 1 + 1 - 1 = 3
//示例 2：
//
//输入：nums = [1], target = 1
//输出：1
//
//3. 归类：动态规划
//
//
//4. 解题要点：
//这道题啊，隐藏了很多的关键信息，所以不能拿到手就做，需要进行预处理和转化
//所有nums的和为sum，结果为target，则负的数之和neg为(sum-target)/2
//所以就是在nums中选一些数，这些数之和为neg，把这些数作为-数，结果就为target
//典型的求累加和，选或者不选，是一个问题。
//dp[i][j]，其中i表示nums，j表示当前累加和
//j>=neg时，dp[i][j]=dp[i-1][j]
//j<neg时，dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i]]
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
//#include <numeric>
//using namespace std;
//
///*************************实现函数*****************************/
//class Solution {
//public:
//	int findTargetSumWays(vector<int>& nums, int target) {
//		int n = nums.size();
//		int sum = accumulate(nums.begin(), nums.end(),0);
//		int tmp = sum - target;
//		int neg = tmp / 2;
//		if (tmp%2!=0||tmp<0) return 0;
//		vector<vector<int>> dp(n+1,vector<int>(neg+1));
//		dp[0][0] = 1;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j <= neg; j++) {
//				if (j >= nums[i]) dp[i+1][j] = dp[i][j] + dp[i][j - nums[i]];
//				else dp[i+1][j] = dp[i][j];
//			}
//		}
//		return dp[n][neg];
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = { 7,9,3,8,0,2,4,8,3,9};
//	int target = 0;
//	Solution S;
//	cout<<S.findTargetSumWays(nums, target);
//
//	system("pause");
//	return 0;
//}