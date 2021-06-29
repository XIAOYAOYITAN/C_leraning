///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/range-sum-query-2d-immutable/
//
//2. ԭ��
//304. ��ά����ͼ��� - ���󲻿ɱ�
//����һ����ά���󣬼������Ӿ��η�Χ��Ԫ�ص��ܺͣ����Ӿ�������Ͻ�Ϊ (row1, col1) �����½�Ϊ (row2, col2) ��
//
//Range Sum Query 2D
//��ͼ�Ӿ������Ͻ� (row1, col1) = (2, 1) �����½�(row2, col2) = (4, 3)�����Ӿ�����Ԫ�ص��ܺ�Ϊ 8��
//
//
//
//ʾ����
//
//���� matrix = [
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
//3. ���ࣺǰ׺��
//
//4. ����Ҫ�㣺
//���ȰѶ�ά����ת��Ϊһά���⣬�����ܹ����ÿһ�е�ǰ׺�ͣ���vector����
//��һ���أ�ͨ���е�ǰ׺�ͣ���������
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
/////*************************ʵ�ֺ���*****************************/
//////����һ���Ѷ�άת����һά���е�ǰ׺�����
//////���ȰѶ�ά����ת��Ϊһά���⣬�����ܹ����ÿһ�е�ǰ׺�ͣ���vector����
//////��һ���أ�ͨ���е�ǰ׺�ͣ���������
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
////		//�б���
////		for (int i = row1; i <= row2; i++)
////		{
////			region_sum += perfix[i][col2 + 1] - perfix[i][col1];
////		}
////		return region_sum;
////	}
////};
//
////���������������⣬�������ǰ׺�����
////��ʽΪ
//class NumMatrix {
//public:
//	vector<vector<int>> sum;//�洢��[0,0,i,j]Ϊ�±��ǰ׺����Ŀ
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
///*************************main���� �������*****************************/
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
