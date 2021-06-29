//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////class Solution {
////public:
////	vector<int> largestDivisibleSubset(vector<int>& nums) {
////		int n = nums.size();
////		vector<pair<int, int>> v;
////		sort(nums.begin(),nums.end());
////		//先做多次遍历，形成一张整除的梯度表
////		for (int i = 1; i <= n; i++) {
////			int count = 0;
////			for (int j = i + 1; j <= n; j++)
////			{
////				if (nums[j-1] % nums[i-1] == 0) {
////					count++;
////				}
////			}
////			v.push_back(make_pair(nums[i - 1],count));
////		}
////		sort(v.begin(), v.end(), mycmp());
////
////		
////		int k = 0;
////		while (v[k].second==v[k+1].second)
////		{
////			k++;
////		}
////
////		for (int j = 0; j <= k; j++)
////		{
////			vector<int> out;
////			for (int i = 2; i <= n; i++)
////			{
////				out.push_back(v[j].first);
////				if (v[i - 1].first%out.back() == 0)
////				{
////					out.push_back(v[i - 1].first);
////				}
////			}
////		}
////
////		return out;
////	}
////
////	class mycmp {
////	public:
////		bool operator()(const pair<int, int>it1,const pair<int, int> it2){
////			if (it1.second > it2.second) {
////				return true;
////			}
////			return false;
////		}
////
////	};
////
////};
//
////class Solution {
////public:
////	vector<int> largestDivisibleSubset(vector<int>& nums) {
////		//1.先按照从小到大排个序
////		sort(nums.begin(), nums.end());
////		int n = nums.size();
////		vector<pair<int,int>> dp;//建立一个dp数组用来维护i指向数之前所能找到的有效解子集量.第二个int用于维护指向它的量
////		dp.resize(n);
////		dp[0].first = 1;
////		//2.按照最长子序列问题的思考，维护一个的dp数组用来存最大的集合数量
////		//大循环，i指针维护最新要加入的量
////		for (int i = 1; i <= n; i++)
////		{
////			int max=0;//多个有效解子集中元素最多的那个的元素数目
////			int max_index = -1;
////			//小循环，j指针维护i之前已经被遍历过的数
////			for (int j = 1; j <= i-1; j++)
////			{
////				if (nums[i-1] % nums[j-1] == 0)//如果新加入的量可以加入到dp数组中 
////				{
////					if (max < dp[j - 1].first) { //更新最大值
////						max = dp[j - 1].first;
////						max_index = j - 1;
////					}
////				}
////			}
////			dp[i - 1].first = max+1;
////			dp[i - 1].second = max_index;
////		}
////		vector<int> out;
////		int max=0;//找到最大值
////		for (int i = 0; i < n; i++)
////		{
////			if (dp[i].first > dp[max].first) max = i;
////		}
////
////		//输出out
////		while (dp[max].second != -1) {
////			out.push_back(nums[max]);
////			max = dp[max].second;
////			
////		}
////		out.push_back(nums[max]);
////		
////		reverse(out.begin(), out.end());
////		return out;
////	}
////
////	class mycmp {
////	public:
////		bool operator()(const pair<int, int>it1, const pair<int, int> it2) {
////			if (it1.first > it2.first) {
////				return true;
////			}
////			return false;
////		}
////	};
////};
//
////官方解法，供参考：
//class Solution {
//public:
//	vector<int> largestDivisibleSubset(vector<int>& nums) {
//		int len = nums.size();
//		sort(nums.begin(), nums.end());
//
//		// 第 1 步：动态规划找出最大子集的个数、最大子集中的最大整数
//		vector<int> dp(len, 1);
//		int maxSize = 1;
//		int maxVal = dp[0];
//		for (int i = 1; i < len; i++) {
//			for (int j = 0; j < i; j++) {
//				// 题目中说「没有重复元素」很重要
//				if (nums[i] % nums[j] == 0) {
//					dp[i] = max(dp[i], dp[j] + 1);
//				}
//			}
//
//			if (dp[i] > maxSize) {
//				maxSize = dp[i];
//				maxVal = nums[i];
//			}
//		}
//
//		// 第 2 步：倒推获得最大子集
//		vector<int> res;
//		if (maxSize == 1) {
//			res.push_back(nums[0]);
//			return res;
//		}
//
//		for (int i = len - 1; i >= 0 && maxSize > 0; i--) {
//			if (dp[i] == maxSize && maxVal % nums[i] == 0) {
//				res.push_back(nums[i]);
//				maxVal = nums[i];
//				maxSize--;
//			}
//		}
//		return res;
//	}
//};
//
////作者：LeetCode - Solution
////链接：https ://leetcode-cn.com/problems/largest-divisible-subset/solution/zui-da-zheng-chu-zi-ji-by-leetcode-solut-t4pz/
////来源：力扣（LeetCode）
////著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//
//int main() {
//
//	vector<int> nums = { 1 };
//	Solution s1;
//	vector<int> out=s1.largestDivisibleSubset(nums);
//	for (auto i : out) {
//		cout << i;
//	}
//
//	system("pause");
//	return 0;
//}