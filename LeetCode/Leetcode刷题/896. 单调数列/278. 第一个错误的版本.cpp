///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/first-bad-version/
//
//2. 原题
//278. 第一个错误的版本
//你是产品经理，目前正在带领一个团队开发新的产品。不幸的是，你的产品的最新版本没有通过质量检测。由于每个版本都是基于之前的版本开发的，所以错误的版本之后的所有版本都是错的。
//
//假设你有 n 个版本 [1, 2, ..., n]，你想找出导致之后所有版本出错的第一个错误的版本。
//
//你可以通过调用 bool isBadVersion(version) 接口来判断版本号 version 是否在单元测试中出错。实现一个函数来查找第一个错误的版本。你应该尽量减少对调用 API 的次数。
//
//示例:
//
//3. 归类：二分查找
//
//4. 解题要点：n个数里面，k是错误的数，使用二分查找来找到k
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
//// The API isBadVersion is defined for you.
//bool isBadVersion(int version);
//
//class Solution {
//public:
//	int firstBadVersion(int n) {
//		int l = 0;
//		int r = n;
//		int rst = 0;
//		while (l <= r)
//		{
//			long mid = l + (r - l) / 2;//防止计算时溢出
//			if (isBadVersion(mid) == false) {
//				l = mid + 1;
//			}
//			else
//			{
//				r = mid - 1;
//				rst = mid;
//			}
//		}
//		return rst;
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	
//
//	system("pause");
//	return 0;
//}