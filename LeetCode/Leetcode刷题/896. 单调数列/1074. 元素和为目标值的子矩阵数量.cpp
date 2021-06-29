///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/number-of-submatrices-that-sum-to-target/
//
//2. 原题
//1074. 元素和为目标值的子矩阵数量
//给出矩阵 matrix 和目标值 target，返回元素总和等于目标值的非空子矩阵的数量。
//
//子矩阵 x1, y1, x2, y2 是满足 x1 <= x <= x2 且 y1 <= y <= y2 的所有单元 matrix[x][y] 的集合。
//
//如果 (x1, y1, x2, y2) 和 (x1', y1', x2', y2') 两个子矩阵中部分坐标不同（如：x1 != x1'），那么这两个子矩阵也不同。
//
//
//
//示例 1：
//
//
//
//输入：matrix = [[0,1,0],[1,1,1],[0,1,0]], target = 0
//输出：4
//解释：四个只含 0 的 1x1 子矩阵。
//示例 2：
//
//输入：matrix = [[1,-1],[-1,1]], target = 0
//输出：5
//解释：两个 1x2 子矩阵，加上两个 2x1 子矩阵，再加上一个 2x2 子矩阵。
//示例 3：
//
//输入：matrix = [[904]], target = 0
//输出：0
//
//3. 归类：前缀和，哈希表
//
//4. 解题要点：
//方法一：先使用304中的方法，把矩阵所有的值都算出来放入哈希表，然后使用哈希表查询？
//方法二：使用560中的方法，只是一维空间前缀和改为二维空间，
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
//////用例全过，但是超时，说明这个方法不完全适合这个问题
////class Solution {
////public:
////	int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
////		int row_num = matrix.size();
////		int col_num = matrix[0].size();
////		vector<vector<int>> sum;
////		sum.resize((row_num + 1), vector<int>(col_num + 1));
////		for (int i = 0; i < row_num; i++) {
////			for (int j = 0; j < col_num; j++)
////			{
////				sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + matrix[i][j];
////			}
////		}
////		int count=0;
////		for (int i1 = 0; i1 < row_num; i1++) {
////			for (int i2 = i1; i2 < row_num; i2++) {
////				for (int j1 = 0; j1 < col_num; j1++) {
////					for (int j2 = j1; j2 < col_num; j2++)
////					{
////						int region_sum = sum[i2 + 1][j2 + 1] - sum[i1][j2 + 1] - sum[i2 + 1][j1] + sum[i1][j1];
////						if (region_sum == target) count++;
////					}
////				}
////			}
////		}
////		return count;
////	}
////};
//
////枚举上下边界，然后将每列的元素相加，得到的就是一行，就转化为了560题中的问题
//class Solution {
//public:
//	int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
//		int m = matrix.size();
//		int n = matrix[0].size();
//		int count = 0;
//		for (int i1 = 0; i1 < m; i1++) {
//			for (int i2 = i1; i2 < m; i2++) {
//				//用一个vector记录所有列的和
//				vector<int> row_sum(n);
//				for (int j = 0; j < n; j++) {
//					for (int i = i1; i <= i2; i++) {
//						row_sum[j] += matrix[i][j];
//					}
//				}
//				//使用一维前缀和计算
//				count+=subarraySum(row_sum, target);
//			}
//		}
//		return count;
//	}
//	int subarraySum(vector<int>& nums, int k) {
//		unordered_map<int, int> value_count;
//		int count = 0;
//		int sum = 0;
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
//	vector<vector<int>> matrix = { {0, 1, 0},{1, 1, 1},{0, 1, 0} };
//	int target = 0;
//	Solution S;
//	cout <<S.numSubmatrixSumTarget(matrix, target)<<endl;
//
//	system("pause");
//	return 0;
//}
