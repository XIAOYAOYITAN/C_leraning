///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/profitable-schemes/
//
//2. 原题
//879. 盈利计划
//集团里有 n 名员工，他们可以完成各种各样的工作创造利润。
//
//第 i 种工作会产生 profit[i] 的利润，它要求 group[i] 名成员共同参与。如果成员参与了其中一项工作，就不能参与另一项工作。
//
//工作的任何至少产生 minProfit 利润的子集称为 盈利计划 。并且工作的成员总数最多为 n 。
//
//有多少种计划可以选择？因为答案很大，所以 返回结果模 10^9 + 7 的值。
//
//
//
//示例 1：
//
//输入：n = 5, minProfit = 3, group = [2,2], profit = [2,3]
//输出：2
//解释：至少产生 3 的利润，该集团可以完成工作 0 和工作 1 ，或仅完成工作 1 。
//总的来说，有两种计划。
//示例 2：
//
//输入：n = 10, minProfit = 5, group = [2,3,5], profit = [6,7,8]
//输出：7
//解释：至少产生 5 的利润，只要完成其中一种工作就行，所以该集团可以完成任何工作。
//有 7 种可能的计划：(0)，(1)，(2)，(0,1)，(0,2)，(1,2)，以及 (0,1,2) 。
//
//3. 归类：动态规划
//
//4. 解题要点：
//第一种想法：
//这道题，总体上还是用常规的动态规划思想去思考。
//dp[i]表示前i个工作，能够产生的获利计划种类，对于新增的nums[i],
//当group[i]>nums[i]时，无论如何都不能选择新的
//当group[i]<=nums[i]时，不考虑任何约束条件，dp[i+1]=dp[i]+dp[i]+1;
//仅考虑group的约束，可以维护一个group_sum[dp[i]]用于记录每个获利计划的成员和，
//记录溢出量=group_sum[]+group[i]的数目，那么
//dp[i+1]=2*dp[i]+1-溢出量
//同时维护一个profit_sum用来记录dp[i]的获利和，
//最后找dp[n]下。profit>minprofit的数目就可以了！
//由于i+1仅和i有关，维护的数组都可以使用滚动形式。
//维护的数组还是过大，宣告失败！
//
//第二种想法：
//dp定义为三维数组，dp[i][j][k]，表示前i个工作中，选择j个员工，并满足最终盈利至少为K的方案数目。
//j的这个选择就很精妙！！最终结果为满足dp[len][j][minProfit]的j从0到n的累加
//dp[0][0][0]=1;并且dp[][][0]=1;
//不能选的情况(group[i]>n) ：dp[i+1][j][k]=dp[i][j][k];
//能选的情况               ：dp[i+1][j][k]=dp[i][j][k]+dp[i][j-group[i]][max(0,k-profit[i])]
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
/////*************************实现函数*****************************/
//////维护的东西过多，最终复杂度过高，因为这种情况是需要维护当前全部盈利方案的profit的，数量很大
////class Solution {
////public:
////	int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
////		int length = group.size();
////		int dp_prev = 0, dp_curr = 0;
////		int MOD = (int)1e9 + 7;
////		vector<int> group_sum, profit_sum;
////		profit_sum.push_back(0);
////		for (int i = 0; i < length; i++)
////		{
////			if (group[i] > n) dp_curr = dp_prev;
////			else
////			{
////				vector<int> group_sum_next = group_sum;
////				dp_curr = dp_prev + 1;//自己独立成一种计划
////				group_sum_next.push_back(group[i]);
////				profit_sum.push_back(profit[i]);
////				for (int j = 0; j < group_sum.size(); j++) {
////					//之前的每一种可能加上新加的数，组成新的计划
////					if (group_sum[j] + group[i] <= n) {
////						group_sum_next.push_back(group_sum[j] + group[i]);
////						profit_sum.push_back(profit_sum[i] + profit[i]);
////						dp_curr++;
////					}
////				}
////				dp_prev = dp_curr;
////				group_sum = group_sum_next;
////			}
////		}
////
////		//筛选掉最后那些不到minprofit的计划
////		int count = 0;
////		for (int k = 0; k < profit_sum.size(); k++) 
////		{
////			if (profit_sum[k] >= minProfit) count++;
////		}
////			return count;
////	}
////};
//
////动态规划，背包问题解决方案
//class Solution {
//public:
//	int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//		int len = group.size();
//		int MOD = (int)1e9 + 7;
//		vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(n + 1, vector<int>(minProfit + 1)));
//		dp[0][0][0] = 1;
//		for (int i = 0; i < len; i++)
//		{
//			for (int j = 0; j <= n; j++)
//			{
//				for (int k = 0; k <= minProfit; k++)
//				{
//					if (group[i] > j) dp[i + 1][j][k] = dp[i][j][k];
//					else dp[i + 1][j][k] = (dp[i][j][k] + dp[i][j - group[i]][max(0, k - profit[i])])%MOD;
//				}
//			}
//		}
//		int sum = 0;
//		for (int i = 0; i <=n; i++)
//		{
//			sum =(sum+dp[len][i][minProfit])%MOD;
//		}
//		return sum;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int n = 95;
//	int minProfit = 53;
//	vector<int> group = {82,7,18,34,1,3,83,56,50,34,39,38,76,92,71,2,6,74,1,82,22,73,88,98,6,71,6,26,100,75,57,88,43,16,22,89,7,9,78,97,22,87,34,81,74,56,49,94,87,71,59,6,20,66,64,37,2,42,30,87,73,16,39,87,28,9,95,78,43,59,87,78,2,93,7,22,21,59,68,67,65,63,78,20,82,35,86 };
//	vector<int> profit = {45,57,38,64,52,92,31,57,31,52,3,12,93,8,11,60,55,92,42,27,40,10,77,53,8,34,87,39,8,35,28,70,32,97,88,54,82,54,54,10,78,23,82,52,10,49,8,36,9,52,81,26,5,2,30,39,89,62,39,100,67,33,86,22,49,15,94,59,47,41,45,17,99,87,77,48,22,77,82,85,97,66,3,38,49,60,66 };
//	Solution S;
//	cout<<S.profitableSchemes(n,minProfit,group,profit)<<endl;
//
//	system("pause");
//	return 0;
//}