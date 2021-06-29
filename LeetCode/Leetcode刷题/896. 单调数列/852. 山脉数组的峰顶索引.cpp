///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/peak-index-in-a-mountain-array/
//
//2. 原题
//852. 山脉数组的峰顶索引
//符合下列属性的数组 arr 称为 山脉数组 ：
//arr.length >= 3
//存在 i（0 < i < arr.length - 1）使得：
//arr[0] < arr[1] < ... arr[i-1] < arr[i]
//arr[i] > arr[i+1] > ... > arr[arr.length - 1]
//给你由整数组成的山脉数组 arr ，返回任何满足 arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 的下标 i 。
//
//示例 1：
//输入：arr = [0,1,0]
//输出：1
//示例 2：
//
//输入：arr = [0,2,1,0]
//输出：1
//示例 3：
//
//输入：arr = [0,10,5,2]
//输出：1
//示例 4：
//
//输入：arr = [3,4,5,1]
//输出：2
//示例 5：
//
//输入：arr = [24,69,100,99,79,78,67,36,26,19]
//输出：2
//3. 归类：
//
//4. 解题要点
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
//	int peakIndexInMountainArray(vector<int>& arr) {
//		int l = 0;
//		int r = arr.size();
//		int rst = 0;
//		while (l<r)
//		{
//			int mid = l + (r - l) / 2;
//			if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
//				rst = mid; 
//				break;
//			}
//			else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1]) r = mid ;
//			else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]) l = mid ;
//			else;
//		}
//		return rst;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> arr = { 24,69,100,99,79,78,67,36,26,19 };
//	Solution S;
//
//	cout<<S.peakIndexInMountainArray(arr)<<endl;
//
//	system("pause");
//	return 0;
//}