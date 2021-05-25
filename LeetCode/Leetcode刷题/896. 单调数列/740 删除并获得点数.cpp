///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/delete-and-earn/
//
//2. 原题
//740. 删除并获得点数
//给你一个整数数组 nums ，你可以对它进行一些操作。
//
//每次操作中，选择任意一个 nums[i] ，删除它并获得 nums[i] 的点数。之后，你必须删除每个等于 nums[i] - 1 或 nums[i] + 1 的元素。
//
//开始你拥有 0 个点数。返回你能通过这些操作获得的最大点数。
//
//示例 1：
//
//输入：nums = [3,4,2]
//输出：6
//解释：
//删除 4 获得 4 个点数，因此 3 也被删除。
//之后，删除 2 获得 2 个点数。总共获得 6 个点数。
//示例 2：
//
//输入：nums = [2,2,3,3,3,4]
//输出：9
//解释：
//删除 3 获得 3 个点数，接着要删除两个 2 和 4 。
//之后，再次删除 3 获得 3 个点数，再次删除 3 获得 3 个点数。
//总共获得 9 个点数。
//
//3. 归类：贪心
//
//4. 解题要点：用数组存储所有的数字和对应的count，把问题转化成打家劫舍问题，用动态规划求解
//dp[i]=max(dp[i-1],dp[i-2]+i*sum[i])
//选或者不选，仍旧是一个问题
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
//	int deleteAndEarn(vector<int>& nums) {
//		//用于统计每一个数字的个数
//		int n = *max_element(nums.begin(),nums.end());
//		vector<int> sum(n+1,0);
//		vector<int> dp;
//		for (int i = 0; i < nums.size(); i++) {
//			sum[nums[i]]++;
//		}
//		dp.resize(sum.size());
//		dp[0] = 0;
//		dp[1] = sum[1];
//		for (int i = 2; i < sum.size(); i++) {
//			dp[i] = max(dp[i - 1], dp[i - 2] + i * sum[i]);
//		}
//		return dp[sum.size() - 1];
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = { 3,2,4 };
//	Solution S;
//	cout<<S.deleteAndEarn(nums)<<endl;
//
//	system("pause");
//	return 0;
//}