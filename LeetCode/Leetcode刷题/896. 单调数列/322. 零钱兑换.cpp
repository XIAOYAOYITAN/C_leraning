///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/coin-change/
//
//2. ԭ��
//322. ��Ǯ�һ�
//������ͬ����Ӳ�� coins ��һ���ܽ�� amount����дһ��������������Դճ��ܽ����������ٵ�Ӳ�Ҹ��������û���κ�һ��Ӳ�����������ܽ����� -1��
//
//�������Ϊÿ��Ӳ�ҵ����������޵ġ�
//
//ʾ�� 1��
//���룺coins = [1, 2, 5], amount = 11
//�����3
//���ͣ�11 = 5 + 5 + 1
//ʾ�� 2��
//
//���룺coins = [2], amount = 3
//�����-1
//ʾ�� 3��
//
//���룺coins = [1], amount = 0
//�����0
//ʾ�� 4��
//
//���룺coins = [1], amount = 1
//�����1
//ʾ�� 5��
//
//���룺coins = [1], amount = 2
//�����2
//
//3. ���ࣺ̰�ģ�DFS
//
//4. ����Ҫ�㣺Ҫ��ճɵ�Ӳ���������٣����������Ӳ��Ҫ�����࣬������������Ӳ�ҿɲ����ԣ������ٻ�С��
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
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	int coinChange(vector<int>& coins, int amount) {
//		sort(coins.begin(), coins.end());
//		int n = coins.size();
//		int num = n-1;
//		int count=0;
//		charge(coins, amount,num,count);
//
//
//
//
//	}
//	bool charge(vector<int>& coins, int amount,int num,int count)
//	{
//		if (amount - coins[num] == 0) return true;
//		else if (amount - coins[num] < 0) return false;
//		else
//		{
//			if (charge(coins, amount - coins[num], num, count++))  return true;
//			else
//			{
//				num--;
//				charge(coins, amount - coins[num], num, count);
//			}
//		}
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//
//	system("pause");
//	return 0;
//}