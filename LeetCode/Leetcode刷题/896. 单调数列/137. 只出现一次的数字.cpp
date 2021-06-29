///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/single-number/
//
//2. 原题：
//
//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
//
//说明：
//
//你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
//
//示例 1:
//输入: [2,2,1]
//输出: 1
//示例 2:
//
//输入: [4,1,2,1,2]
//输出: 4
//
//3. 归类：
//
//4. 解题方法：
//1. 使用set，需要额外空间，事件复杂度O（N），空间复杂度O（N）
//2. 使用排序，不需要额外空间
//3. 异或运算的性质，这我是真的没想到
//
//5. 思路与步骤：
//
//6. 要点总结：
//亦或预算的三个性质
//1. a^0=a
//2.a^a=0;
//3.交换律和结合律
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
////用时9.58%
////内存5.01%
////可以说是很菜了
////class Solution {
////public:
////	int singleNumber(vector<int>& nums) {
////		set<int> set;
////		for (int i = 0; i < nums.size(); i++)
////		{
////			if (!set.insert(nums[i]).second) {
////				set.erase(nums[i]);
////			}
////		}
////		return *set.begin();
////	}
////};
//
////优化,使用排序思想，找一个数
////class Solution {
////public:
////	int singleNumber(vector<int>& nums) {
////		int ret = 0;
////		for (int it : nums)
////		{
////			ret = ret ^ it;
////		}
////		return ret;
////
////
////	}
////};
//
////升华一下，第二道题
////给你一个整数数组 nums ，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次 。请你找出并返回那个只出现了一次的元素。
//
////解题思路，哈希，排序
///*************************实现函数*****************************/
////class Solution {
////public:
////	int singleNumber(vector<int>& nums) {
////		map<int, int> map;
////		for (int i = 0; i < nums.size(); i++)
////		{
////			int count = 0;
////			if (!map.insert(make_pair(nums[i], count)).second) {
////				map[nums[i]]++;
////			}
////		}
////		for (auto it =map.begin();it!=map.end();it++)
////		{
////			if (it->second==0) return it->first;
////		}
////		return INT_MIN;
////	}
////};
////试试排序
//class Solution {
//public:
//	int singleNumber(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		for (int i = 2; i < nums.size(); i=i+3) {
//			if (!(nums[i] == nums[i - 1] && nums[i - 1] == nums[i - 2])) {
//				return nums[i] ^ nums[i - 1] ^ nums[i - 2];
//			}
//		}
//		return nums[nums.size()-1];
//
//	}
//};
//
//
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//	vector<int> v = { 2,2,3,2 };
//	Solution s1;
//	cout<<s1.singleNumber(v)<<endl;
//
//	system("pause");
//	return 0;
//}