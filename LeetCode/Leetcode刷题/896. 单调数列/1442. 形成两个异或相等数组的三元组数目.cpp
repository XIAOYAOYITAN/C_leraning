///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
//
//2. 原题
//1442. 形成两个异或相等数组的三元组数目
//给你一个整数数组 arr 。
//
//现需要从数组中取三个下标 i、j 和 k ，其中 (0 <= i < j <= k < arr.length) 。
//
//a 和 b 定义如下：
//
//a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
//b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
//注意：^ 表示 按位异或 操作。
//
//请返回能够令 a == b 成立的三元组 (i, j , k) 的数目。
//
//3. 归类：异或问题，数学问题
//
//4. 解题要点：推导一下找到问题的关键
//a==b 意味着i到j-1的异或等于j到k的异或，同样等价于（0到i-1的异或）*（0到j-1）的异或=（0到j-1的异或）*（0到k）的异或
//两边0到j-1，所以j其实没有用，有用的只有i-1和k，
//i要葱1开始取，i-1等于0,，over
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
//#include <unordered_map>
//using namespace std;
//
///*************************实现函数*****************************/
//////自己想的第一个解法，使用map用于重复数字的记录，
//////用时击败35%，内存击败5%，待优化。
////class Solution {
////public:
////
////	int cal(const vector<int> &in) {
////		int sum = 0;
////		for (int i = 0; i < in.size(); i++)
////		{
////			for (int j = i + 1; j < in.size(); j++)
////			{
////				sum += in[j] - in[i] - 1;
////			}
////		}
////		return sum;
////	}
////	int countTriplets(vector<int>& arr) {
////		vector<int>  xor_sum(arr.size() + 1, 0);
////		int temp = 0;
////		for (int i = 0; i < arr.size(); i++)
////		{
////			temp = temp ^ arr[i];
////			xor_sum[i + 1] = temp;
////		}
////
////		map<int, vector<int>> map;
////		for (int i = 0; i < xor_sum.size(); i++)
////		{
////			vector<int> tmp;
////			tmp.push_back(i);
////			if (!map.insert(make_pair(xor_sum[i], tmp)).second) {
////				map[xor_sum[i]].push_back(i);
////			}
////		}
////
////		int count = 0;
////		for (auto it : map)
////		{
////			if (it.second.size() > 1) {
////				int temp = cal(it.second);
////				count += temp;
////			}
////		}
////		return count;
////	}
////};
//
////解法2：二重循环
//class Solution {
//public:
//	int countTriplets(vector<int>& arr) {
//		vector<int>  xor_sum(arr.size() + 1, 0);
//		int temp = 0;
//		for (int i = 0; i < arr.size(); i++)
//		{
//			temp = temp ^ arr[i];
//			xor_sum[i + 1] = temp;
//		}
//		int sum = 0;
//		for (int i = 0; i < xor_sum.size(); i++)
//		{
//			for (int j = i+1; j < xor_sum.size(); j++)
//			{
//				if (xor_sum[i]==xor_sum[j])
//				{
//					sum += j - i - 1;
//				}
//			}
//		}
//		return sum;
//	}
//};
//
//
//class Solution {
//public:
//	int countTriplets(vector<int> &arr) {
//		int n = arr.size();
//		vector<int> s(n + 1);
//		for (int i = 0; i < n; ++i) {
//			s[i + 1] = s[i] ^ arr[i];
//		}
//		unordered_map<int, int> cnt, total;
//		int ans = 0;
//		for (int k = 0; k < n; ++k) {
//			if (cnt.count(s[k + 1])) {
//				ans += cnt[s[k + 1]] * k - total[s[k + 1]];
//			}
//			++cnt[s[k]];
//			total[s[k]] += k;
//		}
//		return ans;
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> arr = { 1,1,1,1,1 };
//	Solution S;
//	cout<<S.countTriplets(arr)<<endl;
//
//
//	system("pause");
//	return 0;
//}