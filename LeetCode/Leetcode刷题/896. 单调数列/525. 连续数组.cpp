///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/contiguous-array/
//
//2. 原题
//525. 连续数组
//给定一个二进制数组 nums , 找到含有相同数量的 0 和 1 的最长连续子数组，并返回该子数组的长度。
//
//示例 1:
//
//输入: nums = [0,1]
//输出: 2
//说明: [0, 1] 是具有相同数量0和1的最长连续子数组。
//示例 2:
//
//输入: nums = [0,1,0]
//输出: 2
//说明: [0, 1] (或 [1, 0]) 是具有相同数量0和1的最长连续子数组。
//
//3. 归类：前缀和的变种
//
//4. 解题要点：使用一个数组，记录[0,i-1]数中1的个数，其实也就是前缀和
//那么，[i,j]中1的个数就是nums[j]-nums[i]
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
///*************************实现函数*****************************/
////前缀和+暴力遍历，复杂度最差情况下为0（N^2）,超时
//class Solution {
//public:
//	int findMaxLength(vector<int>& nums) {
//		int n = nums.size();
//		vector<int> perfix(n+1);
//		for (int i = 0; i < n; i++)
//		{
//			perfix[i + 1] = perfix[i] + nums[i];
//		}
//
//
//		int max_count = 0;
//		for (int i = 0; i+max_count < n+1; i++) {
//			for (int j = i+1; j < n+1; j++)
//			{
//				if ((perfix[j] - perfix[i]) * 2 == j - i&& (max_count < j - i)) {
//						max_count = j - i;
//				}
//			}
//		}
//		return max_count;
//	}
//};
//
////尝试优化，
////1. 0可以转化成-1，这样判断前缀和的时候只需要维护一个数count，增加一个0会导致前缀和的改变
////2. 使用哈希表记录前缀和，已存在的时候，说明区间内0和1的数目相等
//class Solution {
//public:
//	int findMaxLength(vector<int>& nums) {
//		unordered_map<int, int> mp;//key为count，value为index
//		mp[0] = -1;
//		int n = nums.size();
//		int count = 0;
//		int max_dst=0;
//		for (int i = 0; i < n; i++)
//		{
//			if(nums[i]==0)	count += -1;
//			else  count += 1;
//			if (mp.count(count) >= 1) {
//				if(max_dst < i-mp[count] )		
//					max_dst = i-mp[count];
//			}
//			else {
//				mp[count] = i;
//			}
//		}
//		return max_dst;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = { 0, 1, 0  };
//	Solution S;
//	cout<<S.findMaxLength(nums)<<endl;
//
//	system("pause");
//	return 0;
//}