///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/predict-the-winner/
//
//2. ԭ��
//486. Ԥ��Ӯ��
//����һ����ʾ�����ķǸ��������顣 ��� 1 ����������һ����ȡһ�������������� 2 ������ʣ����������һ����ȡ������Ȼ����� 1 �ã����� ��ÿ��һ�����ֻ����ȡһ����������������ȡ֮���ٿ�ȡ��ֱ��û��ʣ�������ȡʱ��Ϸ���������ջ�÷����ܺ�������һ�ʤ��
//
//����һ����ʾ���������飬Ԥ�����1�Ƿ���ΪӮ�ҡ�����Լ���ÿ����ҵ��淨����ʹ���ķ�����󻯡�
//
//
//
//ʾ�� 1��
//
//���룺[1, 5, 2]
//�����False
//���ͣ�һ��ʼ�����1���Դ�1��2�н���ѡ��
//�����ѡ�� 2������ 1 ������ô��� 2 ���Դ� 1������ 2 ���� 5 �н���ѡ�������� 2 ѡ���� 5 ����ô��� 1 ��ֻʣ�� 1������ 2 ����ѡ��
//���ԣ���� 1 �����շ���Ϊ 1 + 2 = 3������� 2 Ϊ 5 ��
//��ˣ���� 1 ��Զ�����ΪӮ�ң����� False ��
//ʾ�� 2��
//
//���룺[1, 5, 233, 7]
//�����True
//���ͣ���� 1 һ��ʼѡ�� 1 ��Ȼ����� 2 ����� 5 �� 7 �н���ѡ��������� 2 ѡ�����ĸ������ 1 ������ѡ�� 233 ��
//	 ���գ���� 1��234 �֣������ 2��12 �֣���ø���ķ��������Է��� True����ʾ��� 1 ���Գ�ΪӮ�ҡ�
//
//3. ���ࣺ ����һ���ݹ�  ����������̬�滮
//
//4. ����Ҫ��:�ҳ����̵�ǰ����ƹ�ϵ�Ƕ�̬�滮��ǰ��
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
//#include <deque>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//////��������һλ��Һ͵ڶ�λ��ҵĲ�ֵ�����������һλʤ������turn��ά����������λ�����ѡ��
//////ʱ����ռ����Ľϴ���Ҫ�Ż�
////class Solution {
////public:
////	bool PredictTheWinner(vector<int>& nums) {
////		return dfs(nums, 0, nums.size()-1, 0);
////	}
////
////	int dfs(vector<int> &nums, int start, int end, int turn) {
////		if (start == end) {
////			return nums[start] * turn;
////		}
////		int Start_sum = nums[start] * turn + dfs(nums, start + 1, end, -turn);
////		int End_sum = nums[end] * turn + dfs(nums, start, end - 1, -turn);
////		
////		if (turn == 1) {
////			return max(Start_sum, End_sum);
////		}
////		else {
////			return min(Start_sum, End_sum);
////		}
////	}
////};
//
//////�Ż���ʹ�ö�̬�滮,��һ����άdp[i][j]�������洢��i��j�����ȡֵ��ֵ�����Ľ����Ϊdp[0][nums.size()-1]
//////״̬ת�Ʒ�����д��dp[i][j]=max((nums[i]-dp[i+1][j]),(nums[j]-dp[i][j-1]);
////class Solution {
////public:
////	bool PredictTheWinner(vector<int>& nums) {
////		int n = nums.size();
////		vector<vector<int>> dp(n, vector<int>(n));
////		for (int i = 0; i < n; i++) {
////			dp[i][i] = nums[i];
////		}
////		for (int i = n-2; i >=0; i--) {
////			for (int j = i+1; j < n; j++) {
////				dp[i][j] = max((nums[i] - dp[i + 1][j]), (nums[j] - dp[i][j - 1]));
////			}
////		}
////		return dp[0][n-1]>=0;
////	}
////};
//
////���ǵ�����ʹ�õ���ֻ��i��i+1�����Կ��Խ���ά�ռ���һά����
//class Solution {
//public:
//	bool PredictTheWinner(vector<int>& nums) {
//		int n = nums.size();
//		vector<int> dp(n);
//		for (int i = 0; i < n; i++) {
//			dp[i] = nums[i];
//		}
//		for (int i = n - 2; i >= 0; i--) {
//			for (int j = i + 1; j < n; j++) {
//				dp[j] = max((nums[i] - dp[j]), (nums[j] - dp[j - 1]));
//			}
//		}
//		return dp[n - 1] >= 0;
//	}
//};
//
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> v = { 1,5,3 };
//	Solution S;
//	cout<<S.PredictTheWinner(v)<<endl;
//
//	system("pause");
//	return 0;
//}