///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/brick-wall/
//
//2. 原题
//554. 砖墙
//你的面前有一堵矩形的、由 n 行砖块组成的砖墙。这些砖块高度相同（也就是一个单位高）但是宽度不同。每一行砖块的宽度之和应该相等。
//你现在要画一条 自顶向下 的、穿过 最少 砖块的垂线。如果你画的线只是从砖块的边缘经过，就不算穿过这块砖。你不能沿着墙的两个垂直边缘之一画线，这样显然是没有穿过一块砖的。
//给你一个二维数组 wall ，该数组包含这堵墙的相关信息。其中，wall[i] 是一个代表从左至右每块砖的宽度的数组。你需要找出怎样画才能使这条线 穿过的砖块数量最少 ，并且返回 穿过的砖块数量 。
//
//3. 归类：哈希表
//
//4. 解题要点：哈希表，计数。
//先统计一下每一行的的元素可能组成的值，计入哈希表，然后统计哈希表中出现频率最多的元素
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
//class Solution {
//public:
//	int leastBricks(vector<vector<int>>& wall) {
//		int row = wall.size();//行数
//		//建立一个哈希表，统计每一行的行间隔
//		unordered_map<int, int> map;
//		for (int i = 0; i < row; i++)//行遍历
//		{
//			int sum = 0;
//			for (int j = 0; j < wall[i].size() - 1; j++)
//			{	
//				sum += wall[i][j];
//				if (!map.insert(make_pair(sum, 1)).second) {//插入失败的情况下，count++;
//					map[sum]++;
//				}
//			}
//		}
//		int max = 0;
//		for (auto it : map) {
//			if (it.second >= max) max = it.second;
//		}
//		return row - max;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<vector<int>>  wall = { {1, 2, 2, 1},{3, 1, 2},{1, 3, 2},{2, 4},{3, 1, 2},{1, 3, 1, 1} };
//	Solution s1;
//	cout <<s1.leastBricks(wall);
//
//	system("pause");
//	return 0;
//}
