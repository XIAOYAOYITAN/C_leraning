///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/hamming-distance/
//
//2. ԭ��
//461. ��������
//��������֮��ĺ�������ָ�������������ֶ�Ӧ������λ��ͬ��λ�õ���Ŀ��
//������������ x �� y����������֮��ĺ������롣
//ע�⣺
//0 �� x, y < 231.
//
//ʾ��:
//����: x = 1, y = 4
//���: 2
//
//����:
//1   (0 0 0 1)
//4   (0 1 0 0)
//	   ��   ��
//
//����ļ�ͷָ���˶�Ӧ������λ��ͬ��λ�á�
//
//3. ���ࣺ
//
//4. ����Ҫ��:
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
//#include <numeric>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//////solution1���Լ��ļ�ʵ��
//////�ֱ���x��y��ÿһ��������λ
////class Solution {
////public:
////	int hammingDistance(int x, int y) {
////		int count = 0;
////		while (1)
////		{
////			if (x == 0 && y == 0) break;
////			if (x % 2 != y % 2) {
////				count++;
////			}
////			x /= 2;
////			y /= 2;
////		}
////		return count;
////	}
////};
//
////class Solution {
////public:
////	int hammingDistance(int x, int y) {
////		int tmp = x ^ y;//xy����ͬ�Ķ�����λ��������Ϊ1
////		int count = 0;
////		while (tmp!= 0) {
////			if (tmp % 2 == 1) count++;
////			tmp = tmp >> 1;
////		}
////		return count;
////	}
////};
//
////Brian Kernighan �㷨, һ����ɾȥ�����Ʊ�ʾ���Ҳ��1�Ľ�� = x & ��x - 1��
//class Solution {
//public:
//	int hammingDistance(int x, int y) {
//		int tmp = x ^ y;
//		int count = 0;
//		while (tmp != 0) {
//			tmp = tmp & (tmp - 1);
//			count++;
//		}
//		return count;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	int x = 1;
//	int y=4;
//	Solution s1;
//	cout<<s1.hammingDistance(x, y)<<endl;
//
//	system("pause");
//	return 0;
//}
