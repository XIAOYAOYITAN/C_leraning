///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/ones-and-zeroes/
//
//2. 原题
//474. 一和零
//给你一个二进制字符串数组 strs 和两个整数 m 和 n 。
//
//请你找出并返回 strs 的最大子集的大小，该子集中 最多 有 m 个 0 和 n 个 1 。
//
//如果 x 的所有元素也是 y 的元素，集合 x 是集合 y 的 子集 。
//
//
//
//示例 1：
//
//输入：strs = ["10", "0001", "111001", "1", "0"], m = 5, n = 3
//输出：4
//解释：最多有 5 个 0 和 3 个 1 的最大子集是 {"10","0001","1","0"} ，因此答案是 4 。
//其他满足题意但较小的子集包括 {"0001","1"} 和 {"10","1","0"} 。{"111001"} 不满足题意，因为它含 4 个 1 ，大于 n 的值 3 。
//示例 2：
//
//输入：strs = ["10", "0", "1"], m = 1, n = 1
//输出：2
//解释：最大的子集是 {"0", "1"} ，所以答案是 2 。
//
//3. 归类：贪心，动态规划
//
//4. 解题要点：
//三维背包问题？限制的条件有字符串，0的数目，1的数目，尝试用动态规划去做
//dp[i][j][k]表示在提供前i个字符串，j个0和k个1的容量下，最多的子集个数；
//当i=0时，j，k不管为多少，dp=0；
//当新加的数不能加进集合中时(j<zero|k<ones)，dp[i][j][k]=dp[i-1][j][k]
//当新加的数可以加进集合中，
//	不选：dp[i][j][k]=dp[i-1][j][k]
//	选：dp[i][j][k]=dp[i-1][j-zeros][k-ones]+1
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
////class Solution {
////public:
////	int findMaxForm(vector<string>& strs, int m, int n) {
////		int length = strs.size();
////		vector<vector<vector<int>>> dp(length+1, vector<vector<int>>(m+1, vector<int>(n+1)));
////		for (int i = 0; i < length; i++) {
////			int zeros = 0;
////			int ones = 0;
////			for (int index = 0; index < strs[i].size(); index++) {
////				if (strs[i][index] == '0')zeros++;
////				else ones++;
////			}
////			for (int j = 0; j <=m; j++)
////			{
////				for (int k = 0; k <= n; k++)
////				{
////					if (j < zeros || k < ones) dp[i+1][j][k] = dp[i][j][k];
////					else dp[i+1][j][k] = max(dp[i][j][k], dp[i][j - zeros][k - ones]+1);
////				}
////			}
////		}
////		return dp[length][m ][n ];
////	}
////};
//
////i的空间可以进一步优化
//class Solution {
//public:
//	int findMaxForm(vector<string>& strs, int m, int n) {
//		int length = strs.size();
//		vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//		for (int i = 0; i < length; i++) {
//			int zeros = 0;
//			int ones = 0;
//			for (int index = 0; index < strs[i].size(); index++) {
//				if (strs[i][index] == '0')zeros++;
//				else ones++;
//			}
//			for (int j = m; j >= zeros; j--)
//			{
//				for (int k = n; k >= ones; k--)
//				{
//					 dp[j][k] = max(dp[j][k], dp[j - zeros][k - ones] + 1);
//				}
//			}
//		}
//		return dp[m][n];
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<string> strs = { "10", "0001", "111001", "1", "0" };
//	int m = 5;
//	int n = 3;
//	Solution S;
//	cout<<S.findMaxForm(strs, m, n)<<endl;
//
//	system("pause");
//	return 0;
//}