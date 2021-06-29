///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/power-of-four/
//
//2. 原题
//342. 4的幂
//给定一个整数，写一个函数来判断它是否是 4 的幂次方。如果是，返回 true ；否则，返回 false 。
//
//整数 n 是 4 的幂次方需满足：存在整数 x 使得 n == 4x
//
//
//
//示例 1：
//
//输入：n = 16
//输出：true
//示例 2：
//
//输入：n = 5
//输出：false
//示例 3：
//
//输入：n = 1
//输出：true
//
//3. 归类：
//
//4. 解题要点
//方法一：一开始大于1，除到最后是1的就是4的幂
//方法二：仅有一个位为1，且这个位为偶数位
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
////class Solution {
////public:
////	bool isPowerOfFour(int n) {
////		if (n < 1) return false;
////		while (n > 1) {
////			if (n % 4 != 0) return false;
////			n = n >> 2;
////		}
////		return true;
////	}
////};
//
//class Solution {
//public:
//	bool isPowerOfFour(int n) {
//		return n>0 && (n &(n - 1)) == 0 && (n&0xaaaaaaaa)==0 ;//注意：==的优先级要高于&
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int x=4;
//	Solution S;
//	cout<<S.isPowerOfFour(x)<<endl;
//
//	system("pause");
//	return 0;
//}