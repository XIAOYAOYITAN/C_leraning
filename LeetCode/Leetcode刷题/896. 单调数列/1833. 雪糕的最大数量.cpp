///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/maximum-ice-cream-bars/
//
//2. 原题
//
//夏日炎炎，小男孩 Tony 想买一些雪糕消消暑。
//商店中新到 n 支雪糕，用长度为 n 的数组 costs 表示雪糕的定价，其中 costs[i] 表示第 i 支雪糕的现金价格。
//Tony 一共有 coins 现金可以用于消费，他想要买尽可能多的雪糕。
//给你价格数组 costs 和现金量 coins ，请你计算并返回 Tony 用 coins 现金能够买到的雪糕的 最大数量 。
//注意：Tony 可以按任意顺序购买雪糕。
//
//3. 归类：排序+贪心
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
//class Solution {
//public:
//	int maxIceCream(vector<int>& costs, int coins) {
//		sort(costs.begin(), costs.end());
//		int count = 0;
//		for ( ; count < costs.size(); count++)
//		{
//			coins -= costs[count];
//			if (coins < 0) break;
//		}
//		return count;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> costs = { 1,3,2,4,1 };
//	int coins = 7;
//	Solution S;
//	cout<<S.maxIceCream(costs,coins)<<endl;
//	system("pause");
//	return 0;
//}