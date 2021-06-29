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
////		//������α������γ�һ���������ݶȱ�
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
////		//1.�Ȱ��մ�С�����Ÿ���
////		sort(nums.begin(), nums.end());
////		int n = nums.size();
////		vector<pair<int,int>> dp;//����һ��dp��������ά��iָ����֮ǰ�����ҵ�����Ч���Ӽ���.�ڶ���int����ά��ָ��������
////		dp.resize(n);
////		dp[0].first = 1;
////		//2.����������������˼����ά��һ����dp�������������ļ�������
////		//��ѭ����iָ��ά������Ҫ�������
////		for (int i = 1; i <= n; i++)
////		{
////			int max=0;//�����Ч���Ӽ���Ԫ�������Ǹ���Ԫ����Ŀ
////			int max_index = -1;
////			//Сѭ����jָ��ά��i֮ǰ�Ѿ�������������
////			for (int j = 1; j <= i-1; j++)
////			{
////				if (nums[i-1] % nums[j-1] == 0)//����¼���������Լ��뵽dp������ 
////				{
////					if (max < dp[j - 1].first) { //�������ֵ
////						max = dp[j - 1].first;
////						max_index = j - 1;
////					}
////				}
////			}
////			dp[i - 1].first = max+1;
////			dp[i - 1].second = max_index;
////		}
////		vector<int> out;
////		int max=0;//�ҵ����ֵ
////		for (int i = 0; i < n; i++)
////		{
////			if (dp[i].first > dp[max].first) max = i;
////		}
////
////		//���out
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
////�ٷ��ⷨ�����ο���
//class Solution {
//public:
//	vector<int> largestDivisibleSubset(vector<int>& nums) {
//		int len = nums.size();
//		sort(nums.begin(), nums.end());
//
//		// �� 1 ������̬�滮�ҳ�����Ӽ��ĸ���������Ӽ��е��������
//		vector<int> dp(len, 1);
//		int maxSize = 1;
//		int maxVal = dp[0];
//		for (int i = 1; i < len; i++) {
//			for (int j = 0; j < i; j++) {
//				// ��Ŀ��˵��û���ظ�Ԫ�ء�����Ҫ
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
//		// �� 2 �������ƻ������Ӽ�
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
////���ߣ�LeetCode - Solution
////���ӣ�https ://leetcode-cn.com/problems/largest-divisible-subset/solution/zui-da-zheng-chu-zi-ji-by-leetcode-solut-t4pz/
////��Դ�����ۣ�LeetCode��
////����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
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