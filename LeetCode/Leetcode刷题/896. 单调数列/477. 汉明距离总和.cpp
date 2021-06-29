///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/total-hamming-distance/
//
//2. 原题
//477. 汉明距离总和
//两个整数的 汉明距离 指的是这两个数字的二进制数对应位不同的数量。
//
//计算一个数组中，任意两个数之间汉明距离的总和。
//
//示例:
//
//输入: 4, 14, 2
//
//输出: 6
//
//解释: 在二进制表示中，4表示为0100，14表示为1110，2表示为0010。（这样表示是为了体现后四位之间关系）
//所以答案为：
//HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
//注意:
//
//数组中元素的范围为从 0到 10^9。
//数组的长度不超过 10^4。
//
//3. 归类：
//
//4. 解题要点
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
//////暴力，必然超时
////class Solution {
////public:
////	int totalHammingDistance(vector<int>& nums) {
////		int n = nums.size();
////		int sum=0;
////		for (int i = 0; i < n; i++) {
////			for (int j = i + 1; j < n; j++) {
////				sum = sum + HanmmingDistance(nums[i],nums[j]);
////			}
////		}
////		return sum;
////	}
////	int HanmmingDistance(int num1,int num2) {
////		int count=0;
////		int tmp = num1 ^ num2;
////		while (tmp!=0)
////		{
////			tmp = tmp &(tmp-1);
////			count++;
////		}
////		return count;
////	}
////};
//
////逐位统计，如果第一个数第一位为1，则只需要统计其他数第一位为0的数量，假定每个数都是30位
//class Solution {
//public:
//	int totalHammingDistance(vector<int>& nums) {
//		int n = nums.size();
//		int sum = 0;
//		for (int j = 0; j < 30; j++)
//		{
//			int count_0 = 0;
//			int count_1 = 0;
//			for (int i = 0; i < n; i++)
//			{
//				bool bit = nums[i] & (1 << j);
//				if (bit == 1) count_1++;
//				else count_0++;
//			}
//			sum = sum + count_0 * count_1;
//		}
//		return sum;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = { 4, 14, 2 };
//	Solution S;
//	cout<<S.totalHammingDistance(nums)<<endl;
//
//	system("pause");
//	return 0;
//}
