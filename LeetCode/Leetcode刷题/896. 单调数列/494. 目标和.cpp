///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/target-sum/
//
//2. ԭ�⣺
//494. Ŀ���
//����һ���������� nums ��һ������ target ��
//
//�������е�ÿ������ǰ��� '+' �� '-' ��Ȼ�������������������Թ���һ�� ���ʽ ��
//
//���磬nums = [2, 1] �������� 2 ֮ǰ��� '+' ���� 1 ֮ǰ��� '-' ��Ȼ���������õ����ʽ "+2-1" ��
//���ؿ���ͨ��������������ġ����������� target �Ĳ�ͬ ���ʽ ����Ŀ��
//
//ʾ�� 1��
//
//���룺nums = [1,1,1,1,1], target = 3
//�����5
//���ͣ�һ���� 5 �ַ���������Ŀ���Ϊ 3 ��
//-1 + 1 + 1 + 1 + 1 = 3
//+1 - 1 + 1 + 1 + 1 = 3
//+1 + 1 - 1 + 1 + 1 = 3
//+1 + 1 + 1 - 1 + 1 = 3
//+1 + 1 + 1 + 1 - 1 = 3
//ʾ�� 2��
//
//���룺nums = [1], target = 1
//�����1
//
//3. ���ࣺ��̬�滮
//
//
//4. ����Ҫ�㣺
//����Ⱑ�������˺ܶ�Ĺؼ���Ϣ�����Բ����õ��־�������Ҫ����Ԥ�����ת��
//����nums�ĺ�Ϊsum�����Ϊtarget���򸺵���֮��negΪ(sum-target)/2
//���Ծ�����nums��ѡһЩ������Щ��֮��Ϊneg������Щ����Ϊ-���������Ϊtarget
//���͵����ۼӺͣ�ѡ���߲�ѡ����һ�����⡣
//dp[i][j]������i��ʾnums��j��ʾ��ǰ�ۼӺ�
//j>=negʱ��dp[i][j]=dp[i-1][j]
//j<negʱ��dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i]]
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <numeric>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	int findTargetSumWays(vector<int>& nums, int target) {
//		int n = nums.size();
//		int sum = accumulate(nums.begin(), nums.end(),0);
//		int tmp = sum - target;
//		int neg = tmp / 2;
//		if (tmp%2!=0||tmp<0) return 0;
//		vector<vector<int>> dp(n+1,vector<int>(neg+1));
//		dp[0][0] = 1;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j <= neg; j++) {
//				if (j >= nums[i]) dp[i+1][j] = dp[i][j] + dp[i][j - nums[i]];
//				else dp[i+1][j] = dp[i][j];
//			}
//		}
//		return dp[n][neg];
//	}
//};
///*************************main���� �������*****************************/
//int main() {
//	vector<int> nums = { 7,9,3,8,0,2,4,8,3,9};
//	int target = 0;
//	Solution S;
//	cout<<S.findTargetSumWays(nums, target);
//
//	system("pause");
//	return 0;
//}