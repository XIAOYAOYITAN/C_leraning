///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/paint-house-iii/
//
//2. 原题
//在一个小城市里，有 m 个房子排成一排，你需要给每个房子涂上 n 种颜色之一（颜色编号为 1 到 n ）。有的房子去年夏天已经涂过颜色了，所以这些房子不需要被重新涂色。
//
//我们将连续相同颜色尽可能多的房子称为一个街区。（比方说 houses = [1,2,2,3,3,2,1,1] ，它包含 5 个街区  [{1}, {2,2}, {3,3}, {2}, {1,1}] 。）
//
//给你一个数组 houses ，一个 m * n 的矩阵 cost 和一个整数 target ，其中：
//
//houses[i]：是第 i 个房子的颜色，0 表示这个房子还没有被涂色。
//cost[i][j]：是将第 i 个房子涂成颜色 j+1 的花费。
//请你返回房子涂色方案的最小总花费，使得每个房子都被涂色后，恰好组成 target 个街区。如果没有可用的涂色方案，请返回 -1 。
//
//示例 1：
//
//输入：houses = [0,0,0,0,0], cost = [[1,10],[10,1],[10,1],[1,10],[5,1]], m = 5, n = 2, target = 3
//输出：9
//解释：房子涂色方案为 [1,2,2,1,1]
//此方案包含 target = 3 个街区，分别是 [{1}, {2,2}, {1,1}]。
//涂色的总花费为 (1 + 1 + 1 + 1 + 5) = 9。
//示例 2：
//
//输入：houses = [0,2,1,2,0], cost = [[1,10],[10,1],[10,1],[1,10],[5,1]], m = 5, n = 2, target = 3
//输出：11
//解释：有的房子已经被涂色了，在此基础上涂色方案为 [2,2,1,2,2]
//此方案包含 target = 3 个街区，分别是 [{2,2}, {1}, {2,2}]。
//给第一个和最后一个房子涂色的花费为 (10 + 1) = 11。
//示例 3：
//
//输入：houses = [0,0,0,0,0], cost = [[1,10],[10,1],[1,10],[10,1],[1,10]], m = 5, n = 2, target = 5
//输出：5
//示例 4：
//
//输入：houses = [3,1,2,3], cost = [[1,1,1],[1,1,1],[1,1,1],[1,1,1]], m = 4, n = 3, target = 3
//输出：-1
//解释：房子已经被涂色并组成了 4 个街区，分别是 [{3},{1},{2},{3}] ，无法形成 target = 3 个街区。
// 
//提示：
//
//m == houses.length == cost.length
//n == cost[i].length
//1 <= m <= 100
//1 <= n <= 20
//1 <= target <= m
//0 <= houses[i] <= n
//1 <= cost[i][j] <= 10^4
//
//3. 归类：
//
//4. 解题要点:整个问题开一拆分为两个问题，第一个是枚举和筛选成功刷墙的情况，第二是给可能的情况计算价格
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
//
//////暴力法，超时
/////*************************实现函数*****************************/
////class Solution {
////public:
////	vector<vector<int>> All_Possible;
////	vector<int> Possible_Color;
////	int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
////		//枚举和筛选成功刷墙的情况
////		dfs(houses, 0, m, n, target);
////		if (All_Possible.size() == 0) return -1;
////		//给可能的情况计算价格
////		return CalCost(houses,cost, m);
////	}
////
////	int CalCost(vector<int>& houses, vector<vector<int>>& cost, int m) {
////
////		int min = INT_MAX;
////		for (auto it : All_Possible)
////		{
////			int sum = 0;
////			for (int i = 0; i < m; i++) {
////				if (it[i] != houses[i]) {
////					sum += cost[i][it[i] - 1];
////				}
////			}
////			if (min > sum) min = sum;
////		}
////		return min;
////
////
////	}
////
////	void dfs(vector<int>& houses, int index, const int &m, const int &n, const int &target)
////	{
////		if (index == m) {
////			if (JudgeColor(Possible_Color, target)) {
////				All_Possible.push_back(Possible_Color);
////			}
////			return;
////		}
////		if (houses[index] != 0) {
////			Possible_Color.push_back(houses[index]);
////			dfs(houses, index + 1, m, n, target);
////			Possible_Color.pop_back();
////		}
////		else
////		{
////			for (int j = 1; j <= n; j++)
////			{
////				Possible_Color.push_back(j);
////				dfs(houses, index + 1, m, n, target);
////				Possible_Color.pop_back();
////			}
////		}
////	}
////
////	bool JudgeColor(vector<int>& houses,const int &target){
////		int color_count=0;
////		int i=0;
////		while (i < houses.size()-1) {
////			if (houses[i] != houses[i + 1]) color_count++;
////			i++;	
////		}
////		return color_count == target-1;
////	}
////};
//
////官方解法：
//class Solution {
//private:
//	// 极大值
//	// 选择 INT_MAX / 2 的原因是防止整数相加溢出
//	static constexpr int INFTY = INT_MAX / 2;
//
//public:
//	int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
//		// 将颜色调整为从 0 开始编号，没有被涂色标记为 -1
//		for (int& c : houses) {
//			--c;
//		}
//
//		// dp 所有元素初始化为极大值
//		vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(target, INFTY)));
//
//		for (int i = 0; i < m; ++i) {//i是房子,j是颜色
//			for (int j = 0; j < n; ++j) {
//				if (houses[i] != -1 && houses[i] != j) {
//					continue;//原本就是无穷，不用变
//				}
//
//				for (int k = 0; k < target; ++k) {//遍历target
//					for (int j0 = 0; j0 < n; ++j0) {
//						if (j == j0) {
//							if (i == 0) {
//								if (k == 0) {
//									dp[i][j][k] = 0;//对应dp[0,j,0]的情况
//								}
//							}
//							else {
//								dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j][k]);
//							}
//						}
//						else if (i > 0 && k > 0) {
//							dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j0][k - 1]);
//						}
//					}
//
//					if (dp[i][j][k] != INFTY && houses[i] == -1) {
//						dp[i][j][k] += cost[i][j];//最后加上花费
//					}
//				}
//			}
//		}
//
//		int ans = INFTY;
//		for (int j = 0; j < n; ++j) {
//			ans = min(ans, dp[m - 1][j][target - 1]);
//		}
//		return ans == INFTY ? -1 : ans;
//	}
//};
//
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> houses = { 0,2,1,2,0 };
//	vector<vector<int>> cost = { {1,10 }, { 10,1 }, { 10,1 }, { 1,10} ,{5,1} };
//	int m = 5;
//	int n = 2;
//	int target = 3;
//	Solution s;
//	cout<<s.minCost(houses, cost, m, n, target)<<endl;
//
//	system("pause");
//	return 0;
//}
