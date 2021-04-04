//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
////编写一个高效的算法来判断 m x n 矩阵中，是否存在一个目标值。该矩阵具有如下特性：
////每行中的整数从左到右按升序排列。
////每行的第一个整数大于前一行的最后一个整数。
////解题的思路在于先定位行，再定位列，
//
////自己写的版本
//class Solution1 {
//public:
//	bool searchMatrix(vector<vector<int>>& matrix, int target) {
//		int n = matrix[0].size();//列的数目
//		int m = matrix.size();//行的数目
//		int m_tmp=-1;
//		for ( int i = 0; i < m; i++)
//		{
//			if (target >= matrix[i][0] && target <= matrix[i][n - 1])
//				m_tmp = i;
//		}
//		
//		if (m_tmp!=-1)
//		{
//			vector<int>::iterator result;
//			result = find(matrix[m_tmp].begin(), matrix[m_tmp].end(), target);
//				if (result==matrix[m_tmp].end())
//				{
//					if (n==1)
//					{
//						return true;
//					}
//					return false;
//				}
//				else
//				{
//					return true;
//				}
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//class mysort{
//public:
//	bool operator()(const int b, const vector<int> &a) {
//		return b < a[0];
//	}
//
//};
//
////使用STL库
//class Solution2 {
//public:
//	bool searchMatrix(vector<vector<int>>& matrix, int target) {
//		int n = matrix[0].size();//列的数目
//		int m = matrix.size();//行的数目
//		int m_tmp = -1;
//
//		//使用upperbound，返回满足target>行第一个值的上界
//		auto row = upper_bound(matrix.end(), matrix.end(), target, mysort());
//
//		if (row == matrix.begin())
//		{
//			return false;
//		}
//		--row;
//		return binary_search(row->begin(), row->end(), target);
//	}
//};
//
//int main(void) {
//
//	vector<vector<int>> matrix = { {1} };
//	Solution2 s1;
//	cout << s1.searchMatrix(matrix, 1) << endl;
//
//	system("pause");
//	return 0;
//}