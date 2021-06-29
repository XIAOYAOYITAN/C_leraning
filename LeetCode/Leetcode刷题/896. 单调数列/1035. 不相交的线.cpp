///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/uncrossed-lines/
//
//2. 原题
//1035. 不相交的线
//在两条独立的水平线上按给定的顺序写下 nums1 和 nums2 中的整数。
//
//现在，可以绘制一些连接两个数字 nums1[i] 和 nums2[j] 的直线，这些直线需要同时满足满足：
//
// nums1[i] == nums2[j]
//且绘制的直线不与任何其他连线（非水平线）相交。
//请注意，连线即使在端点也不能相交：每个数字只能属于一条连线。
//
//以这种方法绘制线条，并返回可以绘制的最大连线数。
//
//
//
//示例 1：
//
//
//输入：nums1 = [1,4,2], nums2 = [1,2,4]
//输出：2
//解释：可以画出两条不交叉的线，如上图所示。
//但无法画出第三条不相交的直线，因为从 nums1[1]=4 到 nums2[2]=4 的直线将与从 nums1[2]=2 到 nums2[1]=2 的直线相交。
//示例 2：
//
//输入：nums1 = [2,5,1,2,5], nums2 = [10,5,2,1,5,2]
//输出：3
//示例 3：
//
//输入：nums1 = [1,3,7,1,7,5], nums2 = [1,9,2,5,1]
//输出：2
//
//3. 归类：动态规划
//
//4. 解题要点：所谓求两个数组中不相交的线的个数，由于顺序不能改变，其实就是求两个序列的最长公共子序列问题
//用动态规划尝试求解
//1. 首先用dp[i][j]来代表序列长度为i和j的两个序列的最长公共子序列长度
//2. 处理边界，dp[0][j]和dp[i][0]都等于0
//3. 找状态转移方程  当nums[i]==nums[j]时，dp[i][j]=dp[i-1][j-1]+1;
//				   当nums[i]!=nums[j]时，dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//遍历解决
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
//	int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
//		int n1 = nums1.size();
//		int n2 = nums2.size();
//		vector<vector<int>> dp(n1+1,vector<int> (n2+1));
//		for (int i = 0; i < n1; i++) {
//			for (int j = 0; j < n2; j++) {
//				if (nums1[i] == nums2[j]) dp[i+1][j+1] = dp[i][j] + 1;
//				else dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
//			}
//		}
//		return dp[n1][n2];
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums1 = { 2,5,1,2,5 };
//	vector<int> nums2 = { 10,5,2,1,5,2 };
//	Solution S;
//	cout<<S.maxUncrossedLines(nums1, nums2)<<endl;
//
//	system("pause");
//	return 0;
//}