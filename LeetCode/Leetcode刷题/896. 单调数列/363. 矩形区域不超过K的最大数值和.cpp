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
//		int m = matrix.size();     //����Ŀ
//		int n = matrix[0].size();  //����Ŀ
//		int sum[110][110] = {0};
//		//�ȱ����������󣬻�ȡ�ӣ�0,0������i��j�����������ֵ
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <=n; j++)
//			{
//				sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
//			}
//		}
//		//��¼��ǰ�����е��ۼ�ֵ
//		int max = -8363239;
//		for (int il = 1; il <= m; il++) {//������
//			for (int jl = 1; jl <= n; jl++) {//������
//				for (int ir = il; ir <= m; ir++) {//������
//					for (int jr = jl; jr <= n; jr++) {//������
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
////�ٷ��ⷨ
//class Solution {
//public:
//	int maxSumSubmatrix(vector<vector<int>> &matrix, int k) {
//		int ans = INT_MIN;
//		int m = matrix.size(), n = matrix[0].size();
//		for (int i = 0; i < m; ++i) { // ö���ϱ߽�
//			vector<int> sum(n);
//			for (int j = i; j < m; ++j) { // ö���±߽�
//				for (int c = 0; c < n; ++c) {
//					sum[c] += matrix[j][c]; // ����ÿ�е�Ԫ�غͣ��뷨�ܰ���һά��
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
////��ˮ��Ҷ�ⷨ��˼��Ϊ����֮��+��άǰ׺��
//class Solution {
//public:
//	int maxSumSubmatrix(vector<vector<int>>& mat, int k) {
//		int m = mat.size(), n = mat[0].size();
//		int sum[110][110] = { 0 };
//		//�ȱ����������󣬻�ȡ�ӣ�0,0������i��j�����������ֵ�����ǳ�֮Ϊǰ׺�;���
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + mat[i - 1][j - 1];
//			}
//		}
//		int ans = INT_MIN;
//		for (int top = 1; top <= m; top++) {//�б������ϱ߽�
//			for (int bot = top; bot <= m; bot++) {//�б������±߽�
//				set<int> st;//ʹ��һ��������������¼���������к�,��Ϊ����Ҫֱ����߽�ľ���λ�ã�ֻ��Ҫֵ�ͣ�������set�͹�
//				st.insert(0);
//				for (int r = 1; r <= n; r++) {//�б������ұ߽�
//					int right = sum[bot][r] - sum[top - 1][r];//�������������Χ�Ĳ��ֵļ����ͣ���߲���
//					auto left = st.lower_bound(right - k);//����߽磬��߽�Ӧ��ѡ��Ϊ����right-k��ֵ������right-left�Ż�С��k
//					if (left != st.end()) {//�ҵ�����߽�
//						int cur = right - *left;//�ı߰�Χ���ּ�����
//						ans = max(ans, cur);//�������ļ�����
//					}
//					st.insert(right);//���ҹ�����߲��ֵ�ֵ�����������
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