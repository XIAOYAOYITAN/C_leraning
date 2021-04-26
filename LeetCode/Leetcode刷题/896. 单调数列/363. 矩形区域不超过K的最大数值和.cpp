#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;

//class Solution {
//public:
//	int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
//		int m = matrix.size();     //行数目
//		int n = matrix[0].size();  //列数目
//		int sum[110][110] = {0};
//		//先遍历整个矩阵，获取从（0,0）到（i，j）的所有求和值
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <=n; j++)
//			{
//				sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
//			}
//		}
//		//记录当前矩形中的累加值
//		int max = -8363239;
//		for (int il = 1; il <= m; il++) {//左上行
//			for (int jl = 1; jl <= n; jl++) {//左上列
//				for (int ir = il; ir <= m; ir++) {//右下行
//					for (int jr = jl; jr <= n; jr++) {//右下列
//						int cur = sum[ir][jr] - sum[il-1][jr] - sum[ir][jl-1] + sum[il-1][jl-1];
//						if (cur == k) return cur;
//						if (cur < k && cur > max) max = cur;
//					}
//				}
//			}
//		}
//		return max;
//	}
//};
//
////官方解法
//class Solution {
//public:
//	int maxSumSubmatrix(vector<vector<int>> &matrix, int k) {
//		int ans = INT_MIN;
//		int m = matrix.size(), n = matrix[0].size();
//		for (int i = 0; i < m; ++i) { // 枚举上边界
//			vector<int> sum(n);
//			for (int j = i; j < m; ++j) { // 枚举下边界
//				for (int c = 0; c < n; ++c) {
//					sum[c] += matrix[j][c]; // 更新每列的元素和，想法很棒，一维化
//				}
//				set<int> sumSet{ 0 };
//				int s = 0;
//				for (int v : sum) {
//					s += v;
//					auto lb = sumSet.lower_bound(s - k);
//					if (lb != sumSet.end()) {
//						ans = max(ans, s - *lb);
//					}
//					sumSet.insert(s);
//				}
//			}
//		}
//		return ans;
//	}
//};
//
////宫水三叶解法，思想为两数之和+二维前缀和
//class Solution {
//public:
//	int maxSumSubmatrix(vector<vector<int>>& mat, int k) {
//		int m = mat.size(), n = mat[0].size();
//		int sum[110][110] = { 0 };
//		//先遍历整个矩阵，获取从（0,0）到（i，j）的所有求和值，我们称之为前缀和矩阵
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + mat[i - 1][j - 1];
//			}
//		}
//		int ans = INT_MIN;
//		for (int top = 1; top <= m; top++) {//行遍历，上边界
//			for (int bot = top; bot <= m; bot++) {//行遍历，下边界
//				set<int> st;//使用一个有序容器来记录遍历过的列和,因为不需要直到左边界的具体位置，只需要值和，所以用set就够
//				st.insert(0);
//				for (int r = 1; r <= n; r++) {//列遍历，右边界
//					int right = sum[bot][r] - sum[top - 1][r];//计算三个区间包围的部分的计数和，左边部分
//					auto left = st.lower_bound(right - k);//找左边界，左边界应该选择为大于right-k的值，这样right-left才会小于k
//					if (left != st.end()) {//找到了左边界
//						int cur = right - *left;//四边包围部分计数和
//						ans = max(ans, cur);//更新最大的计数和
//					}
//					st.insert(right);//把找过的左边部分的值插进有序数组
//				}
//			}
//		}
//		return ans;
//	}
//};
//
//int main() {
//	vector<vector<int>> matrix = { {1,0,1} ,{0,-2,3} };
//	Solution s1;
//	cout << s1.maxSumSubmatrix(matrix, 2) << endl;
//
//	system("pause");
//	return 0;
//}