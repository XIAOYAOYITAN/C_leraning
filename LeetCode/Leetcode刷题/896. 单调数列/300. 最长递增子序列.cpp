////����һ���������� nums ���ҵ�������ϸ���������еĳ��ȡ�
////
////���������������������������У�ɾ������ɾ���������е�Ԫ�ض����ı�����Ԫ�ص�˳�����磬[3, 6, 2, 7] ������[0, 3, 1, 6, 2, 2, 7] ��������
////
////��Դ�����ۣ�LeetCode��
////���ӣ�https ://leetcode-cn.com/problems/longest-increasing-subsequence
////����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////����˼·�Ƕ���dp���ҳ����ƹ�ϵ���������ƣ�Ȼ�󵼳����
////�����еĵ��ƹ�ϵ�ǣ��Ѿ��ҵ�ǰi-1������������е�����£��µ�һ��������������������,��ô���������Ҫ�������µ���
//
//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		int n = nums.size();
//		vector<int>  dp(n,1);
//	//�ֲ��裬˫ָ��ά��i��j��i��������������j���ڱ���i֮ǰ������dp����ά��������и���
//		for (int i = 2; i <=n ; i++)
//		{
//			int max=0;
//			for (int j = 1; j <=i-1; j++)
//			{
//				if (nums[i-1]>nums[j-1])//�жϣ�������µ�����֮ǰ������ά��dp�е����ֵ
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