///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/binary-watch/
//
//2. 原题
//二进制手表顶部有 4 个 LED 代表 小时（0-11），底部的 6 个 LED 代表 分钟（0-59）。每个 LED 代表一个 0 或 1，最低位在右侧。
//
//例如，下面的二进制手表读取 "3:25" 。
//给你一个整数 turnedOn ，表示当前亮着的 LED 的数量，返回二进制手表可以表示的所有可能时间。你可以 按任意顺序 返回答案。
//
//小时不会以零开头：
//
//例如，"01:00" 是无效的时间，正确的写法应该是 "1:00" 。
//分钟必须由两位数组成，可能会以零开头：
//
//例如，"10:2" 是无效的时间，正确的写法应该是 "10:02" 。
// 
//
//示例 1：
//
//输入：turnedOn = 1
//输出：["0:01","0:02","0:04","0:08","0:16","0:32","1:00","2:00","4:00","8:00"]
//示例 2：
//
//输入：turnedOn = 9
//输出：[]
//
//3. 归类：
//
//4. 解题要点：
//别想太多，纯粹的暴力美学是最好的解释
//一种10盏灯，每盏灯2种状态，一共2^10=1024种状态
//那么，很明显地，可以遍历这1024种状态，把符合条件的解输出
//条件1：灯亮的总数为turnOn
//条件2：前四盏灯的总和小于12，后6盏灯的总和小于60
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
//#include <string>
//using namespace std;
//
///*************************实现函数*****************************/
//class Solution {
//public:
//	vector<string> readBinaryWatch(int turnedOn) {
//		vector<string> out;
//		for (int i = 0; i < 1023; i++) {
//			if (count1(i) == turnedOn) {
//				//取前4位
//				int hour = i >> 6;
//				//取后6位
//				int min = i & 63;
//				if (hour < 12 && min < 60) 
//					out.push_back(to_string(hour) + ":" + (min<10? "0"+to_string(min): to_string(min)));
//			}
//		}
//		return out;
//	}
//
//	int count1(int num) {
//		int count=0;
//		while (num!=0)
//		{
//			num = num & (num - 1);
//			count++;
//		}
//		return count;
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	int turnedOn = 1;
//	Solution S;
//	S.readBinaryWatch(turnedOn);
//
//	system("pause");
//	return 0;
//}
