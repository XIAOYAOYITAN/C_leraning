////给定一个整数序列：a1, a2, ..., an，一个132模式的子序列 ai, aj, ak 被定义为：当 i < j < k 时，ai < ak < aj。设计一个算法，当给定有 n 个数字的序列时，验证这个序列中是否含有132模式的子序列。
////
////	注意：n 的值小于15000。
////
////	来源：力扣（LeetCode）
////	链接：https ://leetcode-cn.com/problems/132-pattern
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//////复杂度过高，优化！
////class Solution {
////public:
////	bool find132pattern(vector<int>& nums) {
////
////		int n =nums.size();
////		if (n < 3) return false;
////		int i, j, k;//分别代表1,2,3的下标
////
////		//大循环 遍历所有2的值（2是最大值）
////		for ( j = 1; j < n-1; j++)
////		{
////			//1. 用单调栈维护左边的序列,单调栈的第一个值就是最小值
////			multiset<int> left_min;
////			for ( i = 0; i < j; i++)
////			{
////				left_min.insert(nums[i]);
////			}
////			int min = *(left_min.begin());
////
////			//2. 用单调栈维护右边的序列
////			multiset<int> right_all;
////			for ( int index=j+1; index < n; index++)
////			{
////				right_all.insert(nums[index]);
////			}
////
////			//3. 找右边序列里面，比左边最小值大的最小值，即为结果，找不到就j++;
////			multiset<int>::iterator it = right_all.upper_bound(min);
////			if (it!=right_all.end())
////			{
////				if (*it < nums[j])
////					return true;
////			}
////		}
////		return false;
////	}
////};
//
//
////大循环里面尽量减少遍历
//class Solution {
//public:
//	bool find132pattern(vector<int>& nums) {
//
//		int n = nums.size();
//		if (n < 3) return false;
//		int i, j, k;//分别代表1,2,3的下标
//		
//	   //1. 维护左边序列的最小值，初始为第一个数
//		int left_min = nums[0];
//
//		//2. 用单调栈维护右边的所有序列，初始为第二个序列开始的所有序列
//		multiset<int> right_all;
//		for (int index = 2; index < n; index++)
//		{
//			right_all.insert(nums[index]);
//		}
//
//		//大循环，遍历所有值，注意，遍历的时候顺便计算左序列最小值，并去掉右序列已经用过的值
//		for (j = 1; j < n - 1; j++)
//		{
//			if (left_min<nums[j])
//			{
//				auto it = right_all.upper_bound(left_min);
//				if (it != right_all.end()&&((*it)<nums[j]))
//				{
//					return true;
//				}
//			}
//			left_min = min(left_min, nums[j]);
//			right_all.erase(right_all.find(nums[j + 1]));
//		}
//		return false;
//	}
//};
//
//
//
//
//int main() {
//
//	vector<int> v1 = { 2,3,1 };
//	Solution s1;
//	cout<<s1.find132pattern(v1)<<endl;
//
//	system("pause");
//	return 0;
//}