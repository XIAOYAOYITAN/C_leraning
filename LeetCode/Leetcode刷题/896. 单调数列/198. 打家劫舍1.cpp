//你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
//
//给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;
//
////空间复杂度O（N）
//class Solution1 {
//public:
//	int rob(vector<int>& nums) {
//		if (nums.size() == 0) return 0;
//		if (nums.size() == 1) return nums[0];
//		//递推
//		vector <int> S;
//		S.resize(nums.size());
//		S[0] = nums[0];
//		S[1] = max(nums[0], nums[1]);
//		for (int i = 2; i < nums.size(); i++)
//		{
//			S[i] = max(S[i-1],S[i-2]+nums[i]);
//		}
//		return S[nums.size()-1];
//	}
//};
//
////空间复杂度O（1）
//class Solution2 {
//public:
//	int rob(vector<int>& nums) {
//		if (nums.size() == 0) return 0;
//		if (nums.size() == 1) return nums[0];
//		//递推
//		int first = nums[0];
//		int second = max(nums[1],nums[0]);
//		for (int i = 2; i < nums.size(); i++)
//		{
//			int tmp;
//			tmp = second;
//			second = max(second,first + nums[i]);
//			first = tmp;
//		}
//		return second;
//	}
//};

//进阶版，房子围成一个圈，头和尾是相邻的
class Solution {
public:
	int rob_old(vector<int>& nums,int begin,int end) {
		if (begin==end) return nums[begin];
		//递推
		vector <int> S;
		S.resize(end-begin+1);
		S[0] = nums[begin];
		S[1] = max(nums[begin], nums[begin+1]);
		for (int i = 2; i <end-begin+1; i++)
		{
			S[i] = max(S[i-1],S[i-2]+nums[i]);
		}
		return S[end - begin];
	}
	int rob(vector<int> &nums) {
		int n = nums.size();
		if (nums.size() == 0) return 0;
		if (nums.size() == 1) return nums[0];
		vector<int> dp;
		dp.resize(n);
		dp[0] = nums[0];
		dp[1] = max(nums[0], nums[1]);
		for (int i = 2; i < nums.size(); i++)
		{
			dp[i] = max(rob_old(nums, 0, nums.size() - 2), rob_old(nums, 1, nums.size() - 1));
		}
		return nums[nums.size() - 1];
	};

};

int main() {
	vector<int> nums = {1,2,3,1};
	Solution s1;
	cout<<s1.rob(nums)<<endl;

	system("pause");
	return 0;
}
