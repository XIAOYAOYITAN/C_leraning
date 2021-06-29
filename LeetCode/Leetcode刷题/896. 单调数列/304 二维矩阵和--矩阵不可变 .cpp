///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/range-sum-query-2d-immutable/
//
//2. 原题
//304. 二维区域和检索 - 矩阵不可变
//给定一个二维矩阵，计算其子矩形范围内元素的总和，该子矩阵的左上角为 (row1, col1) ，右下角为 (row2, col2) 。
//
//Range Sum Query 2D
//上图子矩阵左上角 (row1, col1) = (2, 1) ，右下角(row2, col2) = (4, 3)，该子矩形内元素的总和为 8。
//
//
//
//示例：
//
//给定 matrix = [
//  [3, 0, 1, 4, 2],
//  [5, 6, 3, 2, 1],
//  [1, 2, 0, 1, 5],
//  [4, 1, 0, 1, 7],
//  [1, 0, 3, 0, 5]
//]
//
//sumRegion(2, 1, 4, 3) -> 8
//sumRegion(1, 1, 2, 2) -> 11
//sumRegion(1, 2, 2, 4) -> 12
//
//3. 归类：前缀和
//
//4. 解题要点：
//首先把二维问题转化为一维问题，我们能够求出每一行的前缀和，用vector保存
//进一步地，通过行的前缀和，用列来做
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
/////*************************实现函数*****************************/
//////方法一：把二维转化成一维的行的前缀和求解
//////首先把二维问题转化为一维问题，我们能够求出每一行的前缀和，用vector保存
//////进一步地，通过行的前缀和，用列来做
////class NumMatrix {
////public:
////	vector<vector<int>> perfix;
////	NumMatrix(vector<vector<int>>& matrix) {
////		int row_num = matrix.size();
////		if (row_num > 0) {
////			int col_num = matrix[0].size();
////			perfix.resize(row_num, vector<int>(col_num + 1));
////			for (int i = 0; i < row_num; i++) {
////				for (int j = 0; j < col_num; j++)
////				{
////					perfix[i][j + 1] = perfix[i][j] + matrix[i][j];
////				}
////			}
////		}
////	}
////
////	int sumRegion(int row1, int col1, int row2, int col2) {
////		int region_sum=0;
////		//行遍历
////		for (int i = row1; i <= row2; i++)
////		{
////			region_sum += perfix[i][col2 + 1] - perfix[i][col1];
////		}
////		return region_sum;
////	}
////};
//
////方法二，区域问题，用区域的前缀和求解
////公式为
//class NumMatrix {
//public:
//	vector<vector<int>> sum;//存储以[0,0,i,j]为下标的前缀和数目
//	NumMatrix(vector<vector<int>>& matrix) {
//		int m = matrix.size();
//		int n = matrix[0].size();
//		sum.resize((m + 1),vector<int>(n + 1));
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++)
//			{
//				sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1]- sum[i][j] + matrix[i][j];
//			}
//		}
//	}
//
//	int sumRegion(int row1, int col1, int row2, int col2) {
//		return sum[row2+1][col2+1] - sum[row1 ][col2+1] - sum[row2+1][col1]+sum[row1][col1];
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<vector<int>> v = {
//	{3, 0, 1, 4, 2},
//	{5, 6, 3, 2, 1},
//	{1, 2, 0, 1, 5},
//	{4, 1, 0, 1, 7},
//	{1, 0, 3, 0, 5}
//};
//	NumMatrix N(v);
//	cout<<N.sumRegion(2, 1, 4, 3)<<endl;
//
//	system("pause");
//	return 0;
//}
