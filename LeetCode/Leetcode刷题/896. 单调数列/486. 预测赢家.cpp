///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/predict-the-winner/
//
//2. 原题
//486. 预测赢家
//给定一个表示分数的非负整数数组。 玩家 1 从数组任意一端拿取一个分数，随后玩家 2 继续从剩余数组任意一端拿取分数，然后玩家 1 拿，…… 。每次一个玩家只能拿取一个分数，分数被拿取之后不再可取。直到没有剩余分数可取时游戏结束。最终获得分数总和最多的玩家获胜。
//
//给定一个表示分数的数组，预测玩家1是否会成为赢家。你可以假设每个玩家的玩法都会使他的分数最大化。
//
//
//
//示例 1：
//
//输入：[1, 5, 2]
//输出：False
//解释：一开始，玩家1可以从1和2中进行选择。
//如果他选择 2（或者 1 ），那么玩家 2 可以从 1（或者 2 ）和 5 中进行选择。如果玩家 2 选择了 5 ，那么玩家 1 则只剩下 1（或者 2 ）可选。
//所以，玩家 1 的最终分数为 1 + 2 = 3，而玩家 2 为 5 。
//因此，玩家 1 永远不会成为赢家，返回 False 。
//示例 2：
//
//输入：[1, 5, 233, 7]
//输出：True
//解释：玩家 1 一开始选择 1 。然后玩家 2 必须从 5 和 7 中进行选择。无论玩家 2 选择了哪个，玩家 1 都可以选择 233 。
//	 最终，玩家 1（234 分）比玩家 2（12 分）获得更多的分数，所以返回 True，表示玩家 1 可以成为赢家。
//
//3. 归类： 方法一：递归  方法二：动态规划
//
//4. 解题要点:找出过程的前后递推关系是动态规划的前提
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
//#include <deque>
//using namespace std;
//
///*************************实现函数*****************************/
//////迭代，第一位玩家和第二位玩家的差值，大于零则第一位胜利，用turn来维护到底是哪位玩家在选择
//////时间与空间消耗较大，需要优化
////class Solution {
////public:
////	bool PredictTheWinner(vector<int>& nums) {
////		return dfs(nums, 0, nums.size()-1, 0);
////	}
////
////	int dfs(vector<int> &nums, int start, int end, int turn) {
////		if (start == end) {
////			return nums[start] * turn;
////		}
////		int Start_sum = nums[start] * turn + dfs(nums, start + 1, end, -turn);
////		int End_sum = nums[end] * turn + dfs(nums, start, end - 1, -turn);
////		
////		if (turn == 1) {
////			return max(Start_sum, End_sum);
////		}
////		else {
////			return min(Start_sum, End_sum);
////		}
////	}
////};
//
//////优化，使用动态规划,用一个二维dp[i][j]矩阵来存储从i到j的最大取值差值，最后的结果极为dp[0][nums.size()-1]
//////状态转移方程书写：dp[i][j]=max((nums[i]-dp[i+1][j]),(nums[j]-dp[i][j-1]);
////class Solution {
////public:
////	bool PredictTheWinner(vector<int>& nums) {
////		int n = nums.size();
////		vector<vector<int>> dp(n, vector<int>(n));
////		for (int i = 0; i < n; i++) {
////			dp[i][i] = nums[i];
////		}
////		for (int i = n-2; i >=0; i--) {
////			for (int j = i+1; j < n; j++) {
////				dp[i][j] = max((nums[i] - dp[i + 1][j]), (nums[j] - dp[i][j - 1]));
////			}
////		}
////		return dp[0][n-1]>=0;
////	}
////};
//
////考虑到真正使用的行只有i和i+1，所以可以将二维空间向一维化简
//class Solution {
//public:
//	bool PredictTheWinner(vector<int>& nums) {
//		int n = nums.size();
//		vector<int> dp(n);
//		for (int i = 0; i < n; i++) {
//			dp[i] = nums[i];
//		}
//		for (int i = n - 2; i >= 0; i--) {
//			for (int j = i + 1; j < n; j++) {
//				dp[j] = max((nums[i] - dp[j]), (nums[j] - dp[j - 1]));
//			}
//		}
//		return dp[n - 1] >= 0;
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> v = { 1,5,3 };
//	Solution S;
//	cout<<S.PredictTheWinner(v)<<endl;
//
//	system("pause");
//	return 0;
//}