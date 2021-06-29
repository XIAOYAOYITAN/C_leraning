///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/xor-operation-in-an-array/
//
//2. 原题
//
//1486. 数组异或操作
//给你两个整数，n 和 start 。
//
//数组 nums 定义为：nums[i] = start + 2*i（下标从 0 开始）且 n == nums.length 。
//
//请返回 nums 中所有元素按位异或（XOR）后得到的结果。
//
//
//
//示例 1：
//
//输入：n = 5, start = 0
//输出：8
//解释：数组 nums 为 [0, 2, 4, 6, 8]，其中 (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8 。
//	 "^" 为按位异或 XOR 运算符。
//示例 2：
//
//输入：n = 4, start = 3
//输出：8
//解释：数组 nums 为 [3, 5, 7, 9]，其中 (3 ^ 5 ^ 7 ^ 9) = 8.
//示例 3：
//
//输入：n = 1, start = 7
//输出：7
//示例 4：
//
//输入：n = 10, start = 5
//输出：2
//
//3. 归类：
//
//4. 解题要点
//
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
////简单粗暴
////class Solution {
////public:
////	int xorOperation(int n, int start) {
////		int out=start;
////		for (int i = 1; i < n; i++) {
////			out = out ^ (start + 2 * i);
////		}
////		return out;
////	}
////};
//
////数学推理
////令 ans=start(start+2*1)(start+2*2)****(start+2*(i-1))
////提出一个2，得到ans/2=s(s+1)(s+2)(s+3)****(s+n-1)
////则 ans/2=(0到s+n-1）xor(0到s-1)
////ans=这个结果*2+最低位
////关于最低位的运算，由于原来的式子里面，所有的项奇偶性都相同，最后一位的亦或值，只有当start为奇数，n也为奇数的时候，才是1？？不懂
//class Solution {
//public:
//	int xorOperation(int n, int start) {
//		int s = start >> 1;
//		int e =0;
//		if (start % 2 == 1 && n % 2 == 1) e = 1;
//		return (sumXor(s - 1)^sumXor( s + n - 1)) << 1 | e;
//	}
//
//	int sumXor(int s) {
//		if (s % 4 == 0) return s;
//		else if (s % 4 == 1) return 1;
//		else if (s % 4 == 2) return s + 1;
//		else return 0;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int n = 5;
//	int start = 0;
//	Solution S;
//	cout<<S.xorOperation(n, 0)<<endl;
//
//	system("pause");
//	return 0;
//}