//����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݡ�ÿ�䷿�ڶ�����һ�����ֽ�Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ������������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ�������
//
//����һ������ÿ�����ݴ�Ž��ķǸ��������飬������ ����������װ�õ������ ��һҹ֮���ܹ�͵�Ե�����߽�

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;
//
////�ռ临�Ӷ�O��N��
//class Solution1 {
//public:
//	int rob(vector<int>& nums) {
//		if (nums.size() == 0) return 0;
//		if (nums.size() == 1) return nums[0];
//		//����
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
////�ռ临�Ӷ�O��1��
//class Solution2 {
//public:
//	int rob(vector<int>& nums) {
//		if (nums.size() == 0) return 0;
//		if (nums.size() == 1) return nums[0];
//		//����
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

//���װ棬����Χ��һ��Ȧ��ͷ��β�����ڵ�
class Solution {
public:
	int rob_old(vector<int>& nums,int begin,int end) {
		if (begin==end) return nums[begin];
		//����
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
