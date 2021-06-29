///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/profitable-schemes/
//
//2. ԭ��
//879. ӯ���ƻ�
//�������� n ��Ա�������ǿ�����ɸ��ָ����Ĺ�����������
//
//�� i �ֹ�������� profit[i] ��������Ҫ�� group[i] ����Ա��ͬ���롣�����Ա����������һ������Ͳ��ܲ�����һ�����
//
//�������κ����ٲ��� minProfit ������Ӽ���Ϊ ӯ���ƻ� �����ҹ����ĳ�Ա�������Ϊ n ��
//
//�ж����ּƻ�����ѡ����Ϊ�𰸺ܴ����� ���ؽ��ģ 10^9 + 7 ��ֵ��
//
//
//
//ʾ�� 1��
//
//���룺n = 5, minProfit = 3, group = [2,2], profit = [2,3]
//�����2
//���ͣ����ٲ��� 3 �����󣬸ü��ſ�����ɹ��� 0 �͹��� 1 �������ɹ��� 1 ��
//�ܵ���˵�������ּƻ���
//ʾ�� 2��
//
//���룺n = 10, minProfit = 5, group = [2,3,5], profit = [6,7,8]
//�����7
//���ͣ����ٲ��� 5 ������ֻҪ�������һ�ֹ������У����Ըü��ſ�������κι�����
//�� 7 �ֿ��ܵļƻ���(0)��(1)��(2)��(0,1)��(0,2)��(1,2)���Լ� (0,1,2) ��
//
//3. ���ࣺ��̬�滮
//
//4. ����Ҫ�㣺
//��һ���뷨��
//����⣬�����ϻ����ó���Ķ�̬�滮˼��ȥ˼����
//dp[i]��ʾǰi���������ܹ������Ļ����ƻ����࣬����������nums[i],
//��group[i]>nums[i]ʱ��������ζ�����ѡ���µ�
//��group[i]<=nums[i]ʱ���������κ�Լ��������dp[i+1]=dp[i]+dp[i]+1;
//������group��Լ��������ά��һ��group_sum[dp[i]]���ڼ�¼ÿ�������ƻ��ĳ�Ա�ͣ�
//��¼�����=group_sum[]+group[i]����Ŀ����ô
//dp[i+1]=2*dp[i]+1-�����
//ͬʱά��һ��profit_sum������¼dp[i]�Ļ����ͣ�
//�����dp[n]�¡�profit>minprofit����Ŀ�Ϳ����ˣ�
//����i+1����i�йأ�ά�������鶼����ʹ�ù�����ʽ��
//ά�������黹�ǹ�������ʧ�ܣ�
//
//�ڶ����뷨��
//dp����Ϊ��ά���飬dp[i][j][k]����ʾǰi�������У�ѡ��j��Ա��������������ӯ������ΪK�ķ�����Ŀ��
//j�����ѡ��ͺܾ�������ս��Ϊ����dp[len][j][minProfit]��j��0��n���ۼ�
//dp[0][0][0]=1;����dp[][][0]=1;
//����ѡ�����(group[i]>n) ��dp[i+1][j][k]=dp[i][j][k];
//��ѡ�����               ��dp[i+1][j][k]=dp[i][j][k]+dp[i][j-group[i]][max(0,k-profit[i])]
//
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
//using namespace std;
//
/////*************************ʵ�ֺ���*****************************/
//////ά���Ķ������࣬���ո��Ӷȹ��ߣ���Ϊ�����������Ҫά����ǰȫ��ӯ��������profit�ģ������ܴ�
////class Solution {
////public:
////	int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
////		int length = group.size();
////		int dp_prev = 0, dp_curr = 0;
////		int MOD = (int)1e9 + 7;
////		vector<int> group_sum, profit_sum;
////		profit_sum.push_back(0);
////		for (int i = 0; i < length; i++)
////		{
////			if (group[i] > n) dp_curr = dp_prev;
////			else
////			{
////				vector<int> group_sum_next = group_sum;
////				dp_curr = dp_prev + 1;//�Լ�������һ�ּƻ�
////				group_sum_next.push_back(group[i]);
////				profit_sum.push_back(profit[i]);
////				for (int j = 0; j < group_sum.size(); j++) {
////					//֮ǰ��ÿһ�ֿ��ܼ����¼ӵ���������µļƻ�
////					if (group_sum[j] + group[i] <= n) {
////						group_sum_next.push_back(group_sum[j] + group[i]);
////						profit_sum.push_back(profit_sum[i] + profit[i]);
////						dp_curr++;
////					}
////				}
////				dp_prev = dp_curr;
////				group_sum = group_sum_next;
////			}
////		}
////
////		//ɸѡ�������Щ����minprofit�ļƻ�
////		int count = 0;
////		for (int k = 0; k < profit_sum.size(); k++) 
////		{
////			if (profit_sum[k] >= minProfit) count++;
////		}
////			return count;
////	}
////};
//
////��̬�滮����������������
//class Solution {
//public:
//	int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//		int len = group.size();
//		int MOD = (int)1e9 + 7;
//		vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(n + 1, vector<int>(minProfit + 1)));
//		dp[0][0][0] = 1;
//		for (int i = 0; i < len; i++)
//		{
//			for (int j = 0; j <= n; j++)
//			{
//				for (int k = 0; k <= minProfit; k++)
//				{
//					if (group[i] > j) dp[i + 1][j][k] = dp[i][j][k];
//					else dp[i + 1][j][k] = (dp[i][j][k] + dp[i][j - group[i]][max(0, k - profit[i])])%MOD;
//				}
//			}
//		}
//		int sum = 0;
//		for (int i = 0; i <=n; i++)
//		{
//			sum =(sum+dp[len][i][minProfit])%MOD;
//		}
//		return sum;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	int n = 95;
//	int minProfit = 53;
//	vector<int> group = {82,7,18,34,1,3,83,56,50,34,39,38,76,92,71,2,6,74,1,82,22,73,88,98,6,71,6,26,100,75,57,88,43,16,22,89,7,9,78,97,22,87,34,81,74,56,49,94,87,71,59,6,20,66,64,37,2,42,30,87,73,16,39,87,28,9,95,78,43,59,87,78,2,93,7,22,21,59,68,67,65,63,78,20,82,35,86 };
//	vector<int> profit = {45,57,38,64,52,92,31,57,31,52,3,12,93,8,11,60,55,92,42,27,40,10,77,53,8,34,87,39,8,35,28,70,32,97,88,54,82,54,54,10,78,23,82,52,10,49,8,36,9,52,81,26,5,2,30,39,89,62,39,100,67,33,86,22,49,15,94,59,47,41,45,17,99,87,77,48,22,77,82,85,97,66,3,38,49,60,66 };
//	Solution S;
//	cout<<S.profitableSchemes(n,minProfit,group,profit)<<endl;
//
//	system("pause");
//	return 0;
//}