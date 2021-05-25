///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/
//
//2. 原题
//有一个长度为 arrLen 的数组，开始有一个指针在索引 0 处。
//每一步操作中，你可以将指针向左或向右移动 1 步，或者停在原地（指针不能被移动到数组范围外）。
//给你两个整数 steps 和 arrLen ，请你计算并返回：在恰好执行 steps 次操作以后，指针仍然指向索引 0 处的方案数。
//由于答案可能会很大，请返回方案数 模 10^9 + 7 后的结果。
//
//示例 1：
//
//输入：steps = 3, arrLen = 2
//输出：4
//解释：3 步后，总共有 4 种不同的方法可以停在索引 0 处。
//向右，向左，不动
//不动，向右，向左
//向右，不动，向左
//不动，不动，不动
//示例  2：
//
//输入：steps = 2, arrLen = 4
//输出：2
//解释：2 步后，总共有 2 种不同的方法可以停在索引 0 处。
//向右，向左
//不动，不动
//示例 3：
//
//输入：steps = 4, arrLen = 2
//输出：8
// 
//
//提示：
//
//1 <= steps <= 500
//1 <= arrLen <= 10^6
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//3. 归类：动态规划
//
//4. 解题要点：这道题有很明显的动态规划痕迹，在已经走了i步之后，走，或者不走，是一个问题。
////用一个dp数组来记录所处的位置和走的步数，最后输出的是走了steps步之后，index等于0的情况。
////在这个想法下先做，之后尝试化简
////状态转移方程 dp[i+1][index]=dp[i][index-1]+dp[i][index]+dp[i][index+1]，考虑边界
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
////dp牛逼
////class Solution {
////public:
////	const int MODULO = 1000000007;
////	int numWays(int steps, int arrLen) {
////		int maxColumn = min(arrLen - 1, steps);
////		vector<vector<int>> dp(steps + 1, vector<int>(maxColumn + 1)); 
////		//dp是一个三位数组,dp[steps][index]=nums;记录走step步，走到index的方法数
////		dp[0][0] = 1;
////		for (int step = 1; step <= steps; step++)
////		{
////			for (int index = 0; index <= maxColumn; index++)
////			{
////				dp[step][index] = dp[step - 1][index];
////				if (index - 1 >= 0) dp[step][index] = (dp[step][index] + dp[step - 1][index - 1]) % MODULO;
////				if(index+1<= maxColumn) dp[step][index] = (dp[step][index] + dp[step - 1][index + 1]) % MODULO;
////			}
////		}
////		return dp[steps][0];
////	}
////};
//
////class Solution {
////public:
////	const int MODULO = 1000000007;
////
////	int numWays(int steps, int arrLen) {
////		int maxColumn = min(arrLen - 1, steps);
////		vector<vector<int>> dp(steps + 1, vector<int>(maxColumn + 1));
////		dp[0][0] = 1;
////		for (int i = 1; i <= steps; i++) {
////			for (int j = 0; j <= maxColumn; j++) {
////				dp[i][j] = dp[i - 1][j];
////				if (j - 1 >= 0) {
////					dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MODULO;
////				}
////				if (j + 1 <= maxColumn) {
////					dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MODULO;
////				}
////			}
////		}
////		return dp[steps][0];
////	}
////};
//
////dp牛逼，由于只需要保存前一步的结果，空间上从两维降到一维，进一步优化
//class Solution {
//public:
//	const int MODULO = 1000000007;
//	int numWays(int steps, int arrLen) {
//		int maxColumn = min(arrLen - 1, steps);
//		vector<int> dp(maxColumn + 1);
//		//dp是一个三位数组,dp[steps][index]=nums;记录走step步，走到index的方法数
//		dp[0] = 1;
//		for (int step = 1; step <= steps; step++)
//		{
//			vector<int> dpNext(maxColumn + 1);//用来记录上一步的数据
//			for (int index = 0; index <= maxColumn; index++)
//			{
//				dpNext[index] = dp[index];
//				if (index - 1 >= 0) dpNext[index] = (dpNext[index] + dp[index - 1]) % MODULO;
//				if (index + 1 <= maxColumn) dpNext[index] = (dpNext[index] + dp[index + 1]) % MODULO;
//			}
//			dp = dpNext;
//		}
//		return dp[0];
//	}
//};
//
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int steps = 2;
//	int arrLen = 4;
//	Solution S;
//	cout<<S.numWays(steps, arrLen)<<endl;
//
//	system("pause");
//	return 0;
//}
