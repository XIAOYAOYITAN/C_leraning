///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/xor-queries-of-a-subarray/
//
//2. 原题
//1310. 子数组异或查询
//有一个正整数数组 arr，现给你一个对应的查询数组 queries，其中 queries[i] = [Li, Ri]。
//
//对于每个查询 i，请你计算从 Li 到 Ri 的 XOR 值（即 arr[Li] xor arr[Li+1] xor ... xor arr[Ri]）作为本次查询的结果。
//
//并返回一个包含给定查询 queries 所有结果的数组。
//
//
//
//示例 1：
//
//输入：arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
//输出：[2,7,14,8]
//解释：
//数组中元素的二进制表示形式是：
//1 = 0001
//3 = 0011
//4 = 0100
//8 = 1000
//查询的 XOR 值为：
//[0,1] = 1 xor 3 = 2
//[1,2] = 3 xor 4 = 7
//[0,3] = 1 xor 3 xor 4 xor 8 = 14
//[3,3] = 8
//示例 2：
//
//输入：arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
//输出：[8,0,4,4]
//
//3. 归类：数学，异或
//
//4. 解题要点：粗粗一看，这题简单，暴力是可以直接做出来的，那先暴力，然后尝试优化
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
////暴力解法，在最后一个测试用例牺牲了
//class Solution {
//public:
//	vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//		vector<int> out;
//		for (int i = 0; i < queries.size(); i++) {
//			int out_tmp = 0;
//			for (int j = queries[i][0]; j <= queries[i][1]; j++)
//			{
//				out_tmp ^= arr[j];
//			}
//			out.push_back(out_tmp);
//		}
//		return out;
//	}
//};
//
////优化暴力，很明显查询的过程中，有大量异或计算是重复的，可以用空间换时间，同时利用异或的前缀性质
////区间[0,left-1]^[left,right]=[0,right]=>[left,right]=[0,left-1]^[0,right]
//class Solution {
//public:
//	vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//		vector<int> xor_pre;
//		vector<int> out;
//		xor_pre.resize(arr.size()+1);
//		xor_pre[0] = 0;
//		for (int i = 1; i <= arr.size(); i++)
//		{
//			xor_pre[i] ^= xor_pre[i - 1] ^ arr[i - 1];
//		}
//		for (int i = 0; i < queries.size(); i++)
//		{
//			int tmp = xor_pre[queries[i][0]] ^ xor_pre[queries[i][1]+1];
//			out.push_back(tmp);
//		}
//		return out;
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> arr = { 1, 3, 4, 8 };
//	vector<vector<int>> queries = {{0,1 }, {1, 2},{0, 3},{3,3} };
//	Solution S;
//	vector<int> out=S.xorQueries(arr, queries);
//	for (auto it : out)
//		cout << it << endl;
//
//	system("pause");
//	return 0;
//}