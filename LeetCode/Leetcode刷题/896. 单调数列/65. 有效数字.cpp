///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/valid-number/
//
//2. 原题
//65. 有效数字
//有效数字（按顺序）可以分成以下几个部分：
//
//一个 小数 或者 整数
//（可选）一个 'e' 或 'E' ，后面跟着一个 整数
//小数（按顺序）可以分成以下几个部分：
//
//（可选）一个符号字符（'+' 或 '-'）
//下述格式之一：
//至少一位数字，后面跟着一个点 '.'
//至少一位数字，后面跟着一个点 '.' ，后面再跟着至少一位数字
//一个点 '.' ，后面跟着至少一位数字
//整数（按顺序）可以分成以下几个部分：
//
//（可选）一个符号字符（'+' 或 '-'）
//至少一位数字
//部分有效数字列举如下：
//
//["2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789"]
//部分无效数字列举如下：
//
//["abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53"]
//给你一个字符串 s ，如果 s 是一个 有效数字 ，请返回 true 。
//
//示例 1：
//
//输入：s = "0"
//输出：true
//示例 2：
//
//输入：s = "e"
//输出：false
//示例 3：
//
//输入：s = "."
//输出：false
//示例 4：
//
//输入：s = ".1"
//输出：true
//
//提示：
//
//1 <= s.length <= 20
//s 仅含英文字母（大写和小写），数字（0-9），加号 '+' ，减号 '-' ，或者点 '.' 。
//
//3. 归类：有限状态自动机
//
//4. 解题思路：这题是啥呀？
//真就分情况讨论？这道题的价值在于
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
///*************************实现函数*****************************/
//class Solution {
//public:
//	//所处状态
//	enum State {
//		STATE_INITIAL,
//		STATE_INT_SIGN,
//		STATE_INTEGER,
//		STATE_POINT,
//		STATE_POINT_WITHOUT_INT,
//		STATE_FRACTION,
//		STATE_EXP,
//		STATE_EXP_SIGN,
//		STATE_EXP_NUMBER,
//		STATE_END
//	};
//
//	//字符类型
//	enum CharType {
//		CHAR_NUMBER,
//		CHAR_EXP,
//		CHAR_POINT,
//		CHAR_SIGN,
//		CHAR_ILLEGAL
//	};
//
//	CharType toCharType(char ch) {
//		if (ch >= '0' && ch <= '9') {
//			return CHAR_NUMBER;
//		}
//		else if (ch == 'e' || ch == 'E') {
//			return CHAR_EXP;
//		}
//		else if (ch == '.') {
//			return CHAR_POINT;
//		}
//		else if (ch == '+' || ch == '-') {
//			return CHAR_SIGN;
//		}
//		else {
//			return CHAR_ILLEGAL;
//		}
//	}
//
//	bool isNumber(string s) {
//		//类似一个链表，但因为有查找操作，所以用map，保留当前状态，和遇到数据类型后变成的状态
//		unordered_map<State, unordered_map<CharType, State>> transfer{
//			{
//				STATE_INITIAL, {
//					{CHAR_NUMBER, STATE_INTEGER},
//					{CHAR_POINT, STATE_POINT_WITHOUT_INT},
//					{CHAR_SIGN, STATE_INT_SIGN}
//				}
//			}, {
//				STATE_INT_SIGN, {
//					{CHAR_NUMBER, STATE_INTEGER},
//					{CHAR_POINT, STATE_POINT_WITHOUT_INT}
//				}
//			}, {
//				STATE_INTEGER, {
//					{CHAR_NUMBER, STATE_INTEGER},
//					{CHAR_EXP, STATE_EXP},
//					{CHAR_POINT, STATE_POINT}
//				}
//			}, {
//				STATE_POINT, {
//					{CHAR_NUMBER, STATE_FRACTION},
//					{CHAR_EXP, STATE_EXP}
//				}
//			}, {
//				STATE_POINT_WITHOUT_INT, {
//					{CHAR_NUMBER, STATE_FRACTION}
//				}
//			}, {
//				STATE_FRACTION,
//				{
//					{CHAR_NUMBER, STATE_FRACTION},
//					{CHAR_EXP, STATE_EXP}
//				}
//			}, {
//				STATE_EXP,
//				{
//					{CHAR_NUMBER, STATE_EXP_NUMBER},
//					{CHAR_SIGN, STATE_EXP_SIGN}
//				}
//			}, {
//				STATE_EXP_SIGN, {
//					{CHAR_NUMBER, STATE_EXP_NUMBER}
//				}
//			}, {
//				STATE_EXP_NUMBER, {
//					{CHAR_NUMBER, STATE_EXP_NUMBER}
//				}
//			}
//		};
//
//		int len = s.length();
//		State st = STATE_INITIAL;//状态首先是初始状态
//
//		for (int i = 0; i < len; i++) {
//			CharType typ = toCharType(s[i]);//把当前数字转换成数据类型
//			if (transfer[st].find(typ) == transfer[st].end()) {//找不到，出错，意味着输入有误
//				return false;
//			}
//			else {
//				st = transfer[st][typ];
//			}
//		}
//		//可能的结束状态
//		return st == STATE_INTEGER || st == STATE_POINT || st == STATE_FRACTION || st == STATE_EXP_NUMBER || st == STATE_END;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	string s = ".";
//	Solution S;
//	cout<<S.isNumber(s);
//
//
//	system("pause");
//	return 0;
//}