///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/minimum-number-of-days-to-make-m-bouquets/
//
//2. 原题
//1482. 制作 m 束花所需的最少天数
//给你一个整数数组 bloomDay，以及两个整数 m 和 k 。
//
//现需要制作 m 束花。制作花束时，需要使用花园中 相邻的 k 朵花 。
//
//花园中有 n 朵花，第 i 朵花会在 bloomDay[i] 时盛开，恰好 可以用于 一束 花中。
//
//请你返回从花园中摘 m 束花需要等待的最少的天数。如果不能摘到 m 束花则返回 -1 。
//
//示例 1：
//
//输入：bloomDay = [1,10,3,10,2], m = 3, k = 1
//输出：3
//解释：让我们一起观察这三天的花开过程，x 表示花开，而 _ 表示花还未开。
//现在需要制作 3 束花，每束只需要 1 朵。
//1 天后：[x, _, _, _, _]   // 只能制作 1 束花
//2 天后：[x, _, _, _, x]   // 只能制作 2 束花
//3 天后：[x, _, x, _, x]   // 可以制作 3 束花，答案为 3
//示例 2：
//
//输入：bloomDay = [1,10,3,10,2], m = 3, k = 2
//输出：-1
//解释：要制作 3 束花，每束需要 2 朵花，也就是一共需要 6 朵花。而花园中只有 5 朵花，无法满足制作要求，返回 -1 。
//示例 3：
//
//输入：bloomDay = [7,7,7,7,12,7,7], m = 2, k = 3
//输出：12
//解释：要制作 2 束花，每束需要 3 朵。
//花园在 7 天后和 12 天后的情况如下：
//7 天后：[x, x, x, x, _, x, x]
//可以用前 3 朵盛开的花制作第一束花。但不能使用后 3 朵盛开的花，因为它们不相邻。
//12 天后：[x, x, x, x, x, x, x]
//显然，我们可以用不同的方式制作两束花。
//示例 4：
//
//输入：bloomDay = [1000000000,1000000000], m = 1, k = 1
//输出：1000000000
//解释：需要等 1000000000 天才能采到花来制作花束
//示例 5：
//
//输入：bloomDay = [1,10,2,9,3,8,4,7,5,6], m = 4, k = 2
//输出：9
//
//
//提示：
//
//bloomDay.length == n
//1 <= n <= 10^5
//1 <= bloomDay[i] <= 10^9
//1 <= m <= 10^6
//1 <= k <= n
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
//
//////超时，进行二分优化
/////*************************实现函数*****************************/
////class Solution {
////public:
////	int minDays(vector<int>& bloomDay, int m, int k) {
////		if (m*k > bloomDay.size()) return -1;
////		set<int> day_set;
////		for (int i = 0; i < bloomDay.size(); i++) {
////			day_set.insert(bloomDay[i]);
////		}
////		for (auto day : day_set) {
////			if(findgroup(day, bloomDay, m, k)) return day;
////		}
////		return -1;
////	}
////
////	bool findgroup(const int &day,vector<int>& bloomDay, const int &m, const int &k)
////	{
////		int k_tmp = k;
////		int m_tmp = m;
////		for (int i = 0; i < bloomDay.size(); i++) {
////			if (day >= bloomDay[i]) k_tmp--;
////			else k_tmp = k;
////			if (k_tmp == 0) {
////				k_tmp = k;
////				m_tmp--;
////			}
////			if (m_tmp == 0) {
////				return true;
////			}
////		}
////		return false;
////	}
////};
//
////超时，进行二分优化，找到最大值，找到最小值，然后二分找到第一个满足条件的值
///*************************实现函数*****************************/
//class Solution {
//public:
//	int minDays(vector<int>& bloomDay, int m, int k) {
//		if (m*k > bloomDay.size()) return -1;
//		set<int> day_set;
//		int min = *min_element(bloomDay.begin(), bloomDay.end());
//		int max = *max_element(bloomDay.begin(), bloomDay.end());
//		int ans = 0;
//		while (min<=max)
//		{
//			int mid = (min + max) / 2;
//			if (findgroup(mid, bloomDay, m, k) == false) {
//				min = mid + 1;
//			}
//			else
//			{
//				ans = mid;
//				max = mid - 1;
//			}
//		}
//
//		return ans;
//	}
//
//	bool findgroup(const int &day, vector<int>& bloomDay, const int &m, const int &k)
//	{
//		int k_tmp = k;
//		int m_tmp = m;
//		for (int i = 0; i < bloomDay.size(); i++) {
//			if (day >= bloomDay[i]) k_tmp--;
//			else k_tmp = k;
//			if (k_tmp == 0) {
//				k_tmp = k;
//				m_tmp--;
//			}
//			if (m_tmp == 0) {
//				return true;
//			}
//		}
//		return false;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> bloomDay = { 7,7,7,7,12,7,7 };
//	int m = 2;
//	int k = 3;
//	Solution S1;
//	cout<<S1.minDays(bloomDay, m, k)<<endl;
//
//	system("pause");
//	return 0;
//}