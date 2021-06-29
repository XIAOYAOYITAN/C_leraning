///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/can-you-eat-your-favorite-candy-on-your-favorite-day/
//
//2. 原题
//1744. 你能在你最喜欢的那天吃到你最喜欢的糖果吗？
//给你一个下标从 0 开始的正整数数组 candiesCount ，其中 candiesCount[i] 表示你拥有的第 i 类糖果的数目。同时给你一个二维数组 queries ，其中 queries[i] = [favoriteTypei, favoriteDayi, dailyCapi] 。
//
//你按照如下规则进行一场游戏：
//
//你从第 0 天开始吃糖果。
//你在吃完 所有 第 i - 1 类糖果之前，不能 吃任何一颗第 i 类糖果。
//在吃完所有糖果之前，你必须每天 至少 吃 一颗 糖果。
//请你构建一个布尔型数组 answer ，满足 answer.length == queries.length 。answer[i] 为 true 的条件是：在每天吃 不超过 dailyCapi 颗糖果的前提下，你可以在第 favoriteDayi 天吃到第 favoriteTypei 类糖果；否则 answer[i] 为 false 。注意，只要满足上面 3 条规则中的第二条规则，你就可以在同一天吃不同类型的糖果。
//
//请你返回得到的数组 answer 。
//
//
//
//示例 1：
//
//输入：candiesCount = [7,4,5,3,8], queries = [[0,2,2],[4,2,4],[2,13,1000000000]]
//输出：[true,false,true]
//提示：
//1- 在第 0 天吃 2 颗糖果(类型 0），第 1 天吃 2 颗糖果（类型 0），第 2 天你可以吃到类型 0 的糖果。
//2- 每天你最多吃 4 颗糖果。即使第 0 天吃 4 颗糖果（类型 0），第 1 天吃 4 颗糖果（类型 0 和类型 1），你也没办法在第 2 天吃到类型 4 的糖果。换言之，你没法在每天吃 4 颗糖果的限制下在第 2 天吃到第 4 类糖果。
//3- 如果你每天吃 1 颗糖果，你可以在第 13 天吃到类型 2 的糖果。
//示例 2：
//
//输入：candiesCount = [5,2,6,4,1], queries = [[3,1,2],[4,10,3],[3,10,100],[4,100,30],[1,3,1]]
//输出：[false,true,true,false,false]
//
//3. 归类：前缀和
//
//4. 解题要点：
//在第i天能吃到的糖果数是一个区间，想要吃的糖果是一个区间，问题就是看这两个区间有没有交集，
//假设这两个区间是[x1,y1],[x2,y2]那么判断两个区间没有交集的简单办法就是x1>y2或y1<x2
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
//	vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
//		// 前缀和
//			vector<long> candy_perfix(candiesCount.size() + 1);
//		for (int i = 0; i < candiesCount.size(); i++) {
//			candy_perfix[i + 1] = (long)(candy_perfix[i] + candiesCount[i]);
//		}
//
//		vector<bool> result(queries.size());
//		for (int i = 0; i < queries.size(); i++) {
//			long candy_max = (long)queries[i][2] * (queries[i][1]+1);
//			long candy_min = (long)queries[i][1]+1;
//			long favorite_min = candy_perfix[queries[i][0]]+1;
//			long favorite_max = candy_perfix[queries[i][0] + 1];
//
//			if (candy_max<favorite_min || candy_min>favorite_max)
//				result[i] = false;
//			else
//				result[i] = true;
//		}
//		return result;
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//
//	vector<int> candiesCount = { 7, 11, 5, 3, 8 };
//	vector<vector<int>> queries = { {2, 2, 6},{4, 2, 4},{2, 13, 1000000000} };
//	Solution S;
//	vector<bool> rst = S.canEat(candiesCount, queries);
//	for (auto it : rst)
//		cout << it << endl;
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
