///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/continuous-subarray-sum/
//
//2. 原题
//523. 连续的子数组和
//给你一个整数数组 nums 和一个整数 k ，编写一个函数来判断该数组是否含有同时满足下述条件的连续子数组：
//
//子数组大小 至少为 2 ，且
//子数组元素总和为 k 的倍数。
//如果存在，返回 true ；否则，返回 false 。
//
//如果存在一个整数 n ，令整数 x 符合 x = n * k ，则称 x 是 k 的一个倍数。
//
//
//
//示例 1：
//
//输入：nums = [23,2,4,6,7], k = 6
//输出：true
//解释：[2,4] 是一个大小为 2 的子数组，并且和为 6 。
//示例 2：
//
//输入：nums = [23,2,6,4,7], k = 6
//输出：true
//解释：[23, 2, 6, 4, 7] 是大小为 5 的子数组，并且和为 42 。
//42 是 6 的倍数，因为 42 = 7 * 6 且 7 是一个整数。
//示例 3：
//
//输入：nums = [23,2,6,4,7], k = 13
//输出：false
//3. 归类：前缀和，哈希表
//
//4. 解题要点：类似的题前面应该有做过，本题中的连续子数组可以用前缀和解决，怎么可以依靠前缀和
//注意：前缀和必须用long保存
//
//**********************************************************************/
//
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
////
/////*************************实现函数*****************************/
//////第一种方法，
//////1. 求出前缀和   //2. 遍历前缀和，相减，然后看差是否是k的倍数？
//////优化，先遍历所有的数，对k取余，这样计算会更简单点？
////class Solution {
////public:
////	bool checkSubarraySum(vector<int>& nums, int k) {
////		//得到前缀和数组，然后全部变成k的余数
////		int n = nums.size();
////		vector<int> perfix(n + 1);
////		for (int i = 0; i < n; i++) {
////			perfix[i + 1] = (perfix[i] + nums[i]) % k;
////		}
////
////		unordered_map<int, int> mp;//第一个数计value，第二个数计index
////		for (int i = 0; i < n + 1; i++)
////		{
////			auto it = mp.insert(make_pair(perfix[i], i));
////			if (!it.second) {
////				if (mp[perfix[i]] + 1 < i)  return true;
////			}
////		}
////		return false;
////	}
////};
//
////优化，在插入的时候就可以先判断了
//class Solution {
//public:
//	bool checkSubarraySum(vector<int>& nums, int k) {
//		//得到前缀和数组，然后全部变成k的余数
//		unordered_map<int, int> mp;//第一个数计value，第二个数计index
//		int n = nums.size();
//		vector<int> perfix(n + 1);
//		mp[0]=0;
//		for (int i = 0; i < n; i++) {
//			perfix[i + 1] = (perfix[i] + nums[i]) % k;
//			auto it = mp.insert(make_pair(perfix[i+1], i+1));
//			if (!it.second) {
//				if (mp[perfix[i+1]] + 1 < i+1)  return true;
//			}
//		}
//		return false;
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = { 23,2,4,6,6 };
//	int k = 7;
//	Solution S;
//	cout << S.checkSubarraySum(nums,k) << endl;
//
//	system("pause");
//	return 0;
//}