///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/excel-sheet-column-title/
//
//2. 原题:
//
//给你一个整数 columnNumber ，返回它在 Excel 表中相对应的列名称。
//
//例如：
//
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28
//...
// 
//
//示例 1：
//
//输入：columnNumber = 1
//输出："A"
//示例 2：
//
//输入：columnNumber = 28
//输出："AB"
//示例 3：
//
//输入：columnNumber = 701
//输出："ZY"
//示例 4：
//
//输入：columnNumber = 2147483647
//输出："FXSHRXW"
// 
//
//提示：
//
//1 <= columnNumber <= 231 - 1
//
//
//3. 归类： 哈希查找
//
//4. 解题要点：
//根据余数查表
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
//#include <list>
//#include <string>
//using namespace std;
//
//
///*************************实现函数*****************************/
//////原始想法
//////先除以26，看是否整除，整除就写成z，并--；不整除就留下余数作为新的字母，准备输出
////class Solution {
////public:
////	string convertToTitle(int columnNumber) {
////		list<char> str;
////		string rst;
////		int curr = columnNumber;
////		while (columnNumber > 0)
////		{
////			char c;
////			int num = columnNumber % 26;
////			if (num>0)
////			{
////				 c = 'A' + columnNumber % 26 - 1;
////			}
////			else
////			{
////				 c = 'A' + columnNumber % 26 +25;
////				 columnNumber--;
////			}
////
////			str.push_back(c);
////			columnNumber = columnNumber / 26;
////		}
////		while (!str.empty()) {
////			rst.push_back(str.back());
////			str.pop_back();
////		}
////		return rst;
////	}
////};
//
//class Solution {
//public:
//	string convertToTitle(int columnNumber) {
//		string rst;
//		while (columnNumber != 0)
//		{
//			columnNumber--;
//			rst += 'A' + columnNumber % 26;
//			columnNumber /= 26;
//		}
//		reverse(rst.begin(), rst.end());
//		return rst;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int columnNumber = 52;
//	Solution S;
//	string rst = S.convertToTitle(columnNumber);
//	cout << rst << endl;
//
//	system("pause");
//	return 0;
//}