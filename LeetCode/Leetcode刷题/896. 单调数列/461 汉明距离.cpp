///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/hamming-distance/
//
//2. 原题
//461. 汉明距离
//两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。
//给出两个整数 x 和 y，计算它们之间的汉明距离。
//注意：
//0 ≤ x, y < 231.
//
//示例:
//输入: x = 1, y = 4
//输出: 2
//
//解释:
//1   (0 0 0 1)
//4   (0 1 0 0)
//	   ↑   ↑
//
//上面的箭头指出了对应二进制位不同的位置。
//
//3. 归类：
//
//4. 解题要点:
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
//#include <numeric>
//using namespace std;
//
///*************************实现函数*****************************/
//////solution1，自己的简单实现
//////分别检查x和y的每一个二进制位
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
////		int tmp = x ^ y;//xy不相同的二进制位，在异或后为1
////		int count = 0;
////		while (tmp!= 0) {
////			if (tmp % 2 == 1) count++;
////			tmp = tmp >> 1;
////		}
////		return count;
////	}
////};
//
////Brian Kernighan 算法, 一个数删去二进制表示最右侧的1的结果 = x & （x - 1）
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
///*************************main函数 输入输出*****************************/
//int main() {
//	int x = 1;
//	int y=4;
//	Solution s1;
//	cout<<s1.hammingDistance(x, y)<<endl;
//
//	system("pause");
//	return 0;
//}
