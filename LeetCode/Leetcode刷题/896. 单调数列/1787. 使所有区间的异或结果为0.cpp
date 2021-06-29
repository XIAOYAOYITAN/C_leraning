///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/make-the-xor-of-all-segments-equal-to-zero/
//
//2. 原题
//给你一个整数数组 nums​​​ 和一个整数 k​​​​​ 。区间 [left, right]（left <= right）的 异或结果 
//是对下标位于 left 和 right（包括 left 和 right ）之间所有元素进行 XOR 运算的结果：
//nums[left] XOR nums[left+1] XOR ... XOR nums[right] 。
//返回数组中 要更改的最小元素数 ，以使所有长度为 k 的区间异或结果等于零。
//
//示例 1：
//
//输入：nums = [1,2,0,3,0], k = 1
//输出：3
//解释：将数组 [1,2,0,3,0] 修改为 [0,0,0,0,0]
//示例 2：
//
//输入：nums = [3,4,5,2,1,7,3,4,7], k = 3
//输出：3
//解释：将数组 [3,4,5,2,1,7,3,4,7] 修改为 [3,4,7,3,4,7,3,4,7]
//示例 3：
//
//输入：nums = [1,2,4,1,2,5,1,2,6], k = 3
//输出：3
//解释：将数组[1,2,4,1,2,5,1,2,6] 修改为 [1,2,3,1,2,3,1,2,3]
//。
//3. 归类：异或问题 ，动态规划
//
//4. 解题要点：很明显，修改结束后的数组是一个周期数组，其中nums[i]=ums[i+k];
//若第i个数不变，则nums[i+k]必须=nums[i],不等则需要修改
//所以整个数组有两种性质：异或性和周期性
//我们可以将所有数排列成一个数组，那么需要解决的问题有两个：
//1.所有列的元素必须相等
//2.首行元素的异或和为0；
//
//用f（i，xor）代表第i列元素修改成cur，并且第一行元素到i的异或和为xor所需的修改次数
//最后的结果就是f（n-1，0），第一个值的复杂度是k，第二个值的复杂度是1024，所以不能直接枚举
//下面考虑f[i][xor]如何转移：用一个哈希表记录每一列的元素分别出现了多少次
//第一列                          f[0][xor]=cnt-map.get(xor)
//对每一列进行部分修改，将该列的值修改为cur：  f[i][xor]=f[i-1][xor^cur]+cnt-map.get(cur)
//如果需要对整列进行修改：        f[i][xor]=f[i-1][xor']+cnt
//可以用一个prev来维护f[i-1][xor']的最小值
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
/////*************************实现函数*****************************/
//////尝试自己实现一下
////class Solution {
////public:
////	int minChanges(vector<int>& nums, int k) {
////		int n = nums.size();
////		int max = 1 << 10;
////		vector<vector<int>> dp(k, vector<int>(max,INT_MAX/2));
////		vector<int> prev(k,INTPTR_MAX/2);
////		
////		//对列做一个大循环，循环单元为每一列
////		for (int i = 0; i < k; i++) {
////			int cnt=0;//这一列总的行数
////			//首先用map存储每一列的数
////			unordered_map<int,int> map_col;//第一个int是列中出现的值，第二个int是出现的次数
////			for (int j = i; j < n; j = j + k) {
////				map_col[nums[j]]++;
////				cnt++;
////			}
////			//处理第一列
////			if (i == 0) {
////				for (int x = 0; x < max; x++) {
////					dp[0][x] = min(dp[0][k],cnt - map_col[x]);
////					prev[0] = min(prev[0],dp[0][x]);
////				}
////			}
////			else
////			{
////				for (int x = 0; x < max; x++) {
////					dp[i][x] = prev[i - 1] + cnt;//最坏的情况，要将整列都修改
////					//遍历修改列中的每一个元素成其中一个出现过的元素
////					for (auto it : map_col) {
////						dp[i][x] = min(dp[i][x], dp[i - 1][x^(it.first)] + cnt - it.second);
////					}
////					prev[i] = min(prev[i], dp[i][x]);
////				}		
////			}		
////		}
////		return dp[k - 1][0];
////	}
////};
//
//
////参考题解
//class Solution {
//public:
//	int minChanges(vector<int>& nums, int k) {
//		// 最后为周期为k的数组 nums[i] = nums[i+k]
//		// 考虑前k个数，后面是对前k个数的重复, 转化为 k 列的二维数组
//		// dp[i][xor] 表示前i列异或 = xor的最小修改次数 i：0~k-1， xor：0~2^10
//		// map<int, int> 记录第key列的数字x出现了多少次
//		// cnt记录第key列一共几个数字，if 最后一行不满足k个
//		// dp[0][xor] = cnt - map[xor]
//		// dp[i][xor] = min(dp[i][xor], f[i-1][xor^cur] + cnt - map[cur])， cur遍历map, 替换部分
//		// dp[i][xor] = min(dp[i][xor], f[i-1][xxor] + cnt)， cur遍历map， 替换全部
//		static constexpr int maxXor = 1 << 10; // 2 ^ 10 = 1024
//		static constexpr int MaxHalf = INT_MAX / 2;
//
//		int n = nums.size();
//		vector<vector<int>> dp(k, vector<int>(maxXor, MaxHalf));
//		vector<int> prev(k, MaxHalf); // 记录前一列的最小更改数
//
//		for (int i = 0; i < k; i++) {
//			int cnt = 0; // 第i列的数字个数
//			unordered_map<int, int> dict; // 第i列 各个数出现次数
//			for (int j = i; j < n; j += k) {
//				dict[nums[j]] += 1;
//				cnt++;
//			}
//
//			if (i == 0) {
//				// 第0列不考虑前面
//				for (int x = 0; x < maxXor; x++) {
//					dp[0][x] = min(dp[0][x], cnt - dict[x]);
//					prev[0] = min(prev[0], dp[0][x]);
//				}
//			}
//			else {
//				// 和前i-1列相关
//				for (int x = 0; x < maxXor; x++) {
//					dp[i][x] = prev[i - 1] + cnt; // 第i列的cnt个数统统替换成xor
//					for (auto& it : dict) {
//						// 部分替换，遍历当前列的各个数字
//						dp[i][x] = min(dp[i][x], dp[i - 1][x ^ (it.first)] + cnt - it.second);
//					}
//					prev[i] = min(prev[i], dp[i][x]);
//				}
//			}
//		}
//		return dp[k - 1][0];
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = {3,4,5,2,1,7,3,4,7};
//	int k = 3;
//	Solution S;
//	cout << S.minChanges(nums, k) << endl;
//
//	system("pause");
//	return 0;
//}