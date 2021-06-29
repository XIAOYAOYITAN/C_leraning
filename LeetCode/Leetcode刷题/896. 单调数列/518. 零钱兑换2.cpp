///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/coin-change-2/
//
//2. 原题
//518. 零钱兑换 II
//给定不同面额的硬币和一个总金额。写出函数来计算可以凑成总金额的硬币组合数。假设每一种面额的硬币有无限个。
//
//示例 1:
//
//输入: amount = 5, coins = [1, 2, 5]
//输出: 4
//解释: 有四种方式可以凑成总金额:
//5=5
//5=2+2+1
//5=2+1+1+1
//5=1+1+1+1+1
//示例 2:
//
//输入: amount = 3, coins = [2]
//输出: 0
//解释: 只用面额2的硬币不能凑成总金额3。
//示例 3:
//
//输入: amount = 10, coins = [10]
//输出: 1
//
//3. 归类：动态规划
//
//4. 解题思路：
//用dp[i][j]来维护前i种面额的硬币可以得到j金额的组合数,最终返回值为dp[n][amount];
//不能选：coin>amount =》dp[i+1][j]=dp[i][j]
//能选：coin<=amount => dp[i+1][j]=dp[i][j]+dp[i][j-coins[i]*k](k<j/coins[i])
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
////class Solution {
////public:
////	int change(int amount, vector<int>& coins) {
////		int n = coins.size();
////		vector<vector<int>> dp(n+1,vector<int>(amount+1));
////		//amount=0;没有coin的时候，也有1种，此为边界条件
////		dp[0][0] = 1;
////		for (int i = 0; i < n; i++)
////		{
////			for (int j = 0; j <= amount; j++)
////			{
////				dp[i + 1][j] += dp[i][j];
////				if (coins[i] <= amount) {
////					int num = j / coins[i];
////					for (int k = 1; k <= num; k++)
////					{
////						dp[i + 1][j] +=  dp[i][j - coins[i] * k];
////					}
////				}
////			}
////		}
////		return dp[n][amount];
////	}
////};
//
////优化
////其实并不需要维护coin这个维度
////dp[i]用来表示当前coins组成金额为i的硬币的组合数
////初始dp[0]=1
////dp[i+1]=dp[i]+dp[i-coin],先计算小的coin组合，再逐步增大
//class Solution {
//public:
//	int change(int amount, vector<int>& coins) {
//		vector<int> dp(amount + 1);
//		dp[0] = 1;
//		for (int i = 0; i < coins.size(); i++)
//		{
//			for (int j = 0; j <= amount; j++)
//			{
//				dp[j] += dp[j - coins[i]];
//			}
//		}
//		return dp[amount];
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	int  amount = 5;
//	vector<int> coins = { 1, 2, 5 };
//	Solution S;
//	cout<<S.change(amount, coins)<<endl;
//
//	system("pause");
//	return 0;
//}