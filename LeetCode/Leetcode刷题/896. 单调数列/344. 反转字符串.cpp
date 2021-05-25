///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/reverse-string/
//
//2. 原题
//344. 反转字符串
//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。
//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
//你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。
//
//3. 归类：双指针
//
//4. 解题要点：用双指针指向头尾，交换头和尾，直到头尾重合
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
//	void reverseString(vector<char>& s) {
//		int l = 0;
//		int r = s.size() - 1;
//		while (l<r)
//		{
//			char tmp=s[l];
//			s[l] = s[r]; 
//			s[r] = tmp;
//			l++;
//			r--;
//		}
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<char> v = { 'h','e','l','l','o' };
//	Solution s1;
//	s1.reverseString(v);
//	for (auto it : v) {
//		cout << it << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
