/////********************************************************************
////1. 题目来源：https://leetcode-cn.com/problems/last-stone-weight/
////
////2. 原题
////1046. 最后一块石头的重量
////有一堆石头，每块石头的重量都是正整数。
////每一回合，从中选出两块 最重的 石头，然后将它们一起粉碎。假设石头的重量分别为 x 和 y，且 x <= y。那么粉碎的可能结果如下：
////
////如果 x == y，那么两块石头都会被完全粉碎；
////如果 x != y，那么重量为 x 的石头将会完全粉碎，而重量为 y 的石头新重量为 y-x。
////最后，最多只会剩下一块石头。返回此石头的重量。如果没有石头剩下，就返回 0。
////
////
////
////示例：
////
////输入：[2,7,4,1,8,1]
////输出：1
////解释：
////先选出 7 和 8，得到 1，所以数组转换为 [2,4,1,1,1]，
////再选出 2 和 4，得到 2，所以数组转换为 [2,1,1,1]，
////接着是 2 和 1，得到 1，所以数组转换为 [1,1,1]，
////最后选出 1 和 1，得到 0，最终数组转换为 [1]，这就是最后剩下那块石头的重量。
////1 <= stones.length <= 30
////1 <= stones[i] <= 1000
////
////3. 归类：二叉搜索数，每次取出重量最大的两个数并相减，将结果插入到树中
////
////4. 解题要点：使用set，按照题意暴力解
////
////**********************************************************************/
////
/////*************************头文件*****************************/
////#include <iostream>
////#include <vector>
////#include <set>
////#include <algorithm>
////#include <stack>
////#include <map>
////using namespace std;
////
/////*************************实现函数*****************************/
////class Solution {
////public:
////	int lastStoneWeight(vector<int>& stones) {
////		multiset<int,std::greater<int>> st;
////		for (auto stone : stones)
////			st.insert(stone);
////		while (st.size()>1)
////		{
////			int k1 = *st.begin();
////			st.erase(st.begin());
////			int k2= *st.begin();
////			st.erase(st.begin());
////			int tmp = k1 - k2;
////			if (tmp != 0) st.insert(tmp);
////		}
////		return *st.begin();
////	}
////};
/////*************************main函数 输入输出*****************************/
////int main() {
////	vector<int> stones = { 2, 7, 4, 1, 8, 1 };
////	Solution S;
////	cout<<S.lastStoneWeight(stones)<<endl;
////
////	system("pause");
////	return 0;
////}
//
///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/last-stone-weight-ii/
//
//2. 原题
//1049. 最后一块石头的重量 II
//有一堆石头，用整数数组 stones 表示。其中 stones[i] 表示第 i 块石头的重量。
//
//每一回合，从中选出任意两块石头，然后将它们一起粉碎。假设石头的重量分别为 x 和 y，且 x <= y。那么粉碎的可能结果如下：
//
//如果 x == y，那么两块石头都会被完全粉碎；
//如果 x != y，那么重量为 x 的石头将会完全粉碎，而重量为 y 的石头新重量为 y-x。
//最后，最多只会剩下一块 石头。返回此石头 最小的可能重量 。如果没有石头剩下，就返回 0。
//
//示例 1：
//
//输入：stones = [2,7,4,1,8,1]
//输出：1
//解释：
//组合 2 和 4，得到 2，所以数组转化为 [2,7,1,8,1]，
//组合 7 和 8，得到 1，所以数组转化为 [2,1,1,1]，
//组合 2 和 1，得到 1，所以数组转化为 [1,1,1]，
//组合 1 和 1，得到 0，所以数组转化为 [1]，这就是最优值。
//
//1 <= stones.length <= 30
//1 <= stones[i] <= 100
//
//3. 归类：动态规划
//
//4. 解题要点：这道题其实是一道套壳题，实质和昨天的“目标和”问题异曲同工
//在一堆数的前面添加加号或者减号，使得最后得到的结果为最小的正数.其实就是把一堆数分成两摞，我们假设A堆为正，B堆为负
//还是按照目标和的方法做，dp[i][j]表示前i个石子能不能堆出j的目标和，最终结果为遍历dp[n][]=1的j且2*j-sum最小
//if j>=nums[i] dp[i+1][j]=dp[i][j-nums[i]]||dp[i][j]
//else dp[i+1][j]=dp[i][j]
//这个dp数组用来表示bool真是绝了！
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
//	int lastStoneWeightII(vector<int>& stones) {
//		int n = stones.size();
//		int sum = accumulate(stones.begin(), stones.end(),0);
//		vector<vector<bool>> dp((n+1),vector<bool>(sum+1));
//		dp[0][0] = true;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j <= sum; j++)
//			{
//				//新增的数可以被取
//				if (j >= stones[i]) dp[i + 1][j] = dp[i][j - stones[i]] || dp[i][j];
//				else dp[i + 1][j] = dp[i][j];
//			}
//		}
//		for (int k = sum / 2; k <= sum; k++) {
//			if (dp[n][k] == true&&2*k>=sum) return 2*k-sum;
//		}
//		return 0;
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> stones = { 2, 7, 4, 1, 8, 1 };
//	Solution S;
//	cout << S.lastStoneWeightII(stones) << endl;
//
//	system("pause");
//	return 0;
//}
//
