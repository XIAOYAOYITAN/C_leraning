///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/power-of-two/
//
//2. 原题
//231. 2 的幂
//给你一个整数 n，请你判断该整数是否是 2 的幂次方。如果是，返回 true ；否则，返回 false 。
//
//如果存在一个整数 x 使得 n == 2x ，则认为 n 是 2 的幂次方。
//
//
//
//示例 1：
//
//输入：n = 1
//输出：true
//解释：20 = 1
//示例 2：
//
//输入：n = 16
//输出：true
//解释：24 = 16
//示例 3：
//
//输入：n = 3
//输出：false
//示例 4：
//
//输入：n = 4
//输出：true
//示例 5：
//
//输入：n = 5
//输出：false
//
//3. 归类：
//
//4. 解题要点：看到这道题，把我下巴惊掉了，哈哈哈哈
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
//class Solution {
//public:
//	bool isPowerOfTwo(int n) {
//		if (n < 1) return false;
//		while (n>1) {
//			if (n % 2 != 0) return false;
//			n = n >> 1;
//		}
//		return true;
//	}
//};
//
//class Solution {
//public:
//	bool isPowerOfTwo(int n) {
//		return n > 0 && (n & (n - 1)) == 0;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int n = 1;
//	Solution S;
//	cout<<S.isPowerOfTwo(n)<<endl;
//
//	system("pause");
//	return 0;
//}