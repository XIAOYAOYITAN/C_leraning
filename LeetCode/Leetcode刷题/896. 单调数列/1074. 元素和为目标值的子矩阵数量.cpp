///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/number-of-submatrices-that-sum-to-target/
//
//2. ԭ��
//1074. Ԫ�غ�ΪĿ��ֵ���Ӿ�������
//�������� matrix ��Ŀ��ֵ target������Ԫ���ܺ͵���Ŀ��ֵ�ķǿ��Ӿ����������
//
//�Ӿ��� x1, y1, x2, y2 ������ x1 <= x <= x2 �� y1 <= y <= y2 �����е�Ԫ matrix[x][y] �ļ��ϡ�
//
//��� (x1, y1, x2, y2) �� (x1', y1', x2', y2') �����Ӿ����в������겻ͬ���磺x1 != x1'������ô�������Ӿ���Ҳ��ͬ��
//
//
//
//ʾ�� 1��
//
//
//
//���룺matrix = [[0,1,0],[1,1,1],[0,1,0]], target = 0
//�����4
//���ͣ��ĸ�ֻ�� 0 �� 1x1 �Ӿ���
//ʾ�� 2��
//
//���룺matrix = [[1,-1],[-1,1]], target = 0
//�����5
//���ͣ����� 1x2 �Ӿ��󣬼������� 2x1 �Ӿ����ټ���һ�� 2x2 �Ӿ���
//ʾ�� 3��
//
//���룺matrix = [[904]], target = 0
//�����0
//
//3. ���ࣺǰ׺�ͣ���ϣ��
//
//4. ����Ҫ�㣺
//����һ����ʹ��304�еķ������Ѿ������е�ֵ������������ϣ��Ȼ��ʹ�ù�ϣ���ѯ��
//��������ʹ��560�еķ�����ֻ��һά�ռ�ǰ׺�͸�Ϊ��ά�ռ䣬
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//////����ȫ�������ǳ�ʱ��˵�������������ȫ�ʺ��������
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
////ö�����±߽磬Ȼ��ÿ�е�Ԫ����ӣ��õ��ľ���һ�У���ת��Ϊ��560���е�����
//class Solution {
//public:
//	int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
//		int m = matrix.size();
//		int n = matrix[0].size();
//		int count = 0;
//		for (int i1 = 0; i1 < m; i1++) {
//			for (int i2 = i1; i2 < m; i2++) {
//				//��һ��vector��¼�����еĺ�
//				vector<int> row_sum(n);
//				for (int j = 0; j < n; j++) {
//					for (int i = i1; i <= i2; i++) {
//						row_sum[j] += matrix[i][j];
//					}
//				}
//				//ʹ��һάǰ׺�ͼ���
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
///*************************main���� �������*****************************/
//int main() {
//	vector<vector<int>> matrix = { {0, 1, 0},{1, 1, 1},{0, 1, 0} };
//	int target = 0;
//	Solution S;
//	cout <<S.numSubmatrixSumTarget(matrix, target)<<endl;
//
//	system("pause");
//	return 0;
//}
