////给你一个 m * n 的矩阵 grid，矩阵中的元素无论是按行还是按列，都以非递增顺序排列。 
////
////请你统计并返回 grid 中 负数 的数目。
////
////示例 1：
////
////输入：grid = [[4, 3, 2, -1], [3, 2, 1, -1], [1, 1, -1, -2], [-1, -1, -2, -3]]
////输出：8
////解释：矩阵中共有 8 个负数。
////示例 2：
////
////输入：grid = [[3, 2], [1, 0]]
////输出：0
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////暴力
//class Solution {
//public:
//	int countNegatives(vector<vector<int>>& grid) {
//		int row = grid.size();
//		int column = grid[0].size();
//		int count=0;
//		for(int i=0;i<row;i++)
//			for (int j = 0; j <column ; j++)
//			{
//				if (grid[i][j]<0)
//				{
//					count++;
//				}
//			}
//		return count;
//	}
//};
//
////优化暴力，利用行、列的递增原则，找每个行第一个小于0的元素，第一行找完之后，第二行从前面一个元素开始找
//class Solution {
//public:
//	int countNegatives(vector<vector<int>>& grid) {
//		int row = grid.size();
//		int column = grid[0].size();
//		int count=0;
//		int positive_index = column-1;
//		for (int i = 0; i < row; i++)
//		{
//			int tmp = find_positive_binary(grid[i], positive_index);
//			if (tmp != -1)
//			{
//				positive_index = tmp;
//				count = count + column - positive_index;
//			}
//
//		}
//		return count;
//	}
//
//	int find_positive_binary(vector<int> &nums,int end) {
//		//二分法查找第一个小于0的数
//		int l = 0, r = end; int ans = -1;
//		while (l <= r)
//		{
//			int mid = (l + r) / 2;
//			
//			if (nums[mid] >= 0) {
//				l = mid + 1;
//			}
//			else
//			{
//				ans = mid;
//				r = mid - 1;
//			}
//		}
//		return ans;
//	}
//};
//
//
//int main() {
//	vector<vector<int>> grid = { {3,2}, {1,0} };
//	Solution s1;
//	cout<<s1.countNegatives(grid)<<endl;
//
//	system("pause");
//	return 0;
//}
