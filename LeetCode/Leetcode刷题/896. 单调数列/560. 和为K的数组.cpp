///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/subarray-sum-equals-k/
//
//2. 原题
//560. 和为K的子数组
//给定一个整数数组和一个整数 k，你需要找到该数组中和为 k 的连续的子数组的个数。
//
//示例 1 :
//
//输入:nums = [1,1,1], k = 2
//输出: 2 , [1,1] 与 [1,1] 为两种不同的情况。
//说明 :
//
//数组的长度为 [1, 20,000]。
//数组中元素的范围是 [-1000, 1000] ，且整数 k 的范围是 [-1e7, 1e7]。
//
//3. 归类：前缀和、哈希表
//
//4. 解题要点：对于数组连续求和问题，前缀和肯定是有的，那怎么找k呢？
//用哈希表来保存已经计算过的前缀和，每添加一个数，计算前缀和，并通过哈希表查找是否会出现等于k的区块，
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
//
///*************************实现函数*****************************/
//class Solution {
//public:
//	int subarraySum(vector<int>& nums, int k) {
//		unordered_map<int, int> value_count;
//		int count = 0;
//		int sum=0;
//		value_count[0] = 1;
//		for (int i = 0; i < nums.size(); i++) {
//			sum += nums[i];
//			if (value_count.find(sum - k) != value_count.end()) {
//				count += value_count[sum - k];
//			}
//			value_count[sum]++;
//		}
//		return count;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = { -1,-1,1 };
//	int k = 1;
//	Solution S;
//	cout<<S.subarraySum(nums, k);
//
//	system("pause");
//	return 0;
//}
