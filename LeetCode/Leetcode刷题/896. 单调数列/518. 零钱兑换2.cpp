///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/coin-change-2/
//
//2. ԭ��
//518. ��Ǯ�һ� II
//������ͬ����Ӳ�Һ�һ���ܽ�д��������������Դճ��ܽ���Ӳ�������������ÿһ������Ӳ�������޸���
//
//ʾ�� 1:
//
//����: amount = 5, coins = [1, 2, 5]
//���: 4
//����: �����ַ�ʽ���Դճ��ܽ��:
//5=5
//5=2+2+1
//5=2+1+1+1
//5=1+1+1+1+1
//ʾ�� 2:
//
//����: amount = 3, coins = [2]
//���: 0
//����: ֻ�����2��Ӳ�Ҳ��ܴճ��ܽ��3��
//ʾ�� 3:
//
//����: amount = 10, coins = [10]
//���: 1
//
//3. ���ࣺ��̬�滮
//
//4. ����˼·��
//��dp[i][j]��ά��ǰi������Ӳ�ҿ��Եõ�j���������,���շ���ֵΪdp[n][amount];
//����ѡ��coin>amount =��dp[i+1][j]=dp[i][j]
//��ѡ��coin<=amount => dp[i+1][j]=dp[i][j]+dp[i][j-coins[i]*k](k<j/coins[i])
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
////class Solution {
////public:
////	int change(int amount, vector<int>& coins) {
////		int n = coins.size();
////		vector<vector<int>> dp(n+1,vector<int>(amount+1));
////		//amount=0;û��coin��ʱ��Ҳ��1�֣���Ϊ�߽�����
////		dp[0][0] = 1;
////		for (int i = 0; i < n; i++)
////		{
////			for (int j = 0; j <= amount; j++)
////			{
////				dp[i + 1][j] += dp[i][j];
////				if (coins[i] <= amount) {
////					int num = j / coins[i];
////					for (int k = 1; k <= num; k++)
////					{
////						dp[i + 1][j] +=  dp[i][j - coins[i] * k];
////					}
////				}
////			}
////		}
////		return dp[n][amount];
////	}
////};
//
////�Ż�
////��ʵ������Ҫά��coin���ά��
////dp[i]������ʾ��ǰcoins��ɽ��Ϊi��Ӳ�ҵ������
////��ʼdp[0]=1
////dp[i+1]=dp[i]+dp[i-coin],�ȼ���С��coin��ϣ���������
//class Solution {
//public:
//	int change(int amount, vector<int>& coins) {
//		vector<int> dp(amount + 1);
//		dp[0] = 1;
//		for (int i = 0; i < coins.size(); i++)
//		{
//			for (int j = 0; j <= amount; j++)
//			{
//				dp[j] += dp[j - coins[i]];
//			}
//		}
//		return dp[amount];
//	}
//};
///*************************main���� �������*****************************/
//int main() {
//	int  amount = 5;
//	vector<int> coins = { 1, 2, 5 };
//	Solution S;
//	cout<<S.change(amount, coins)<<endl;
//
//	system("pause");
//	return 0;
//}