///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/maximum-ice-cream-bars/
//
//2. ԭ��
//
//�������ף�С�к� Tony ����һЩѩ�������
//�̵����µ� n ֧ѩ�⣬�ó���Ϊ n ������ costs ��ʾѩ��Ķ��ۣ����� costs[i] ��ʾ�� i ֧ѩ����ֽ�۸�
//Tony һ���� coins �ֽ�����������ѣ�����Ҫ�򾡿��ܶ��ѩ�⡣
//����۸����� costs ���ֽ��� coins ��������㲢���� Tony �� coins �ֽ��ܹ��򵽵�ѩ��� ������� ��
//ע�⣺Tony ���԰�����˳����ѩ�⡣
//
//3. ���ࣺ����+̰��
//
//4. ����Ҫ��
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
//	int maxIceCream(vector<int>& costs, int coins) {
//		sort(costs.begin(), costs.end());
//		int count = 0;
//		for ( ; count < costs.size(); count++)
//		{
//			coins -= costs[count];
//			if (coins < 0) break;
//		}
//		return count;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> costs = { 1,3,2,4,1 };
//	int coins = 7;
//	Solution S;
//	cout<<S.maxIceCream(costs,coins)<<endl;
//	system("pause");
//	return 0;
//}