////给你一个整数数组 nums ，找到其中最长严格递增子序列的长度。
////
////子序列是由数组派生而来的序列，删除（或不删除）数组中的元素而不改变其余元素的顺序。例如，[3, 6, 2, 7] 是数组[0, 3, 1, 6, 2, 2, 7] 的子序列
////
////来源：力扣（LeetCode）
////链接：https ://leetcode-cn.com/problems/longest-increasing-subsequence
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////解题思路是定义dp，找出递推关系，遍历递推，然后导出结果
////本题中的递推关系是，已经找到前i-1个最长递增子序列的情况下，新的一个数大于序列中最大的数,那么最长的子序列要添加这个新的数
//
//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		int n = nums.size();
//		vector<int>  dp(n,1);
//	//分步骤，双指针维护i和j，i代表新增的数，j用于遍历i之前的数，dp用于维护最长的序列个数
//		for (int i = 2; i <=n ; i++)
//		{
//			int max=0;
//			for (int j = 1; j <=i-1; j++)
//			{
//				if (nums[i-1]>nums[j-1])//判断，如果最新的数比之前的数大，维护dp中的最大值
//				{
//					if (max < dp[j - 1])
//						max = dp[j - 1];
//				}
//			}
//			dp[i - 1] = max+1;
//		}
//		return *max_element(dp.begin(), dp.begin() + n);
//	}
//};
//
//int main() {
//	vector<int> nums = { 4,10,4,3,8,9 };
//	Solution s1;
//	cout<<s1.lengthOfLIS(nums)<<endl;
//
//
//	system("pause");
//	return 0;
//}