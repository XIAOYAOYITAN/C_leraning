///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/ones-and-zeroes/
//
//2. ԭ��
//474. һ����
//����һ���������ַ������� strs ���������� m �� n ��
//
//�����ҳ������� strs ������Ӽ��Ĵ�С�����Ӽ��� ��� �� m �� 0 �� n �� 1 ��
//
//��� x ������Ԫ��Ҳ�� y ��Ԫ�أ����� x �Ǽ��� y �� �Ӽ� ��
//
//
//
//ʾ�� 1��
//
//���룺strs = ["10", "0001", "111001", "1", "0"], m = 5, n = 3
//�����4
//���ͣ������ 5 �� 0 �� 3 �� 1 ������Ӽ��� {"10","0001","1","0"} ����˴��� 4 ��
//�����������⵫��С���Ӽ����� {"0001","1"} �� {"10","1","0"} ��{"111001"} ���������⣬��Ϊ���� 4 �� 1 ������ n ��ֵ 3 ��
//ʾ�� 2��
//
//���룺strs = ["10", "0", "1"], m = 1, n = 1
//�����2
//���ͣ������Ӽ��� {"0", "1"} �����Դ��� 2 ��
//
//3. ���ࣺ̰�ģ���̬�滮
//
//4. ����Ҫ�㣺
//��ά�������⣿���Ƶ��������ַ�����0����Ŀ��1����Ŀ�������ö�̬�滮ȥ��
//dp[i][j][k]��ʾ���ṩǰi���ַ�����j��0��k��1�������£������Ӽ�������
//��i=0ʱ��j��k����Ϊ���٣�dp=0��
//���¼ӵ������ܼӽ�������ʱ(j<zero|k<ones)��dp[i][j][k]=dp[i-1][j][k]
//���¼ӵ������Լӽ������У�
//	��ѡ��dp[i][j][k]=dp[i-1][j][k]
//	ѡ��dp[i][j][k]=dp[i-1][j-zeros][k-ones]+1
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
///*************************ʵ�ֺ���*****************************/
////class Solution {
////public:
////	int findMaxForm(vector<string>& strs, int m, int n) {
////		int length = strs.size();
////		vector<vector<vector<int>>> dp(length+1, vector<vector<int>>(m+1, vector<int>(n+1)));
////		for (int i = 0; i < length; i++) {
////			int zeros = 0;
////			int ones = 0;
////			for (int index = 0; index < strs[i].size(); index++) {
////				if (strs[i][index] == '0')zeros++;
////				else ones++;
////			}
////			for (int j = 0; j <=m; j++)
////			{
////				for (int k = 0; k <= n; k++)
////				{
////					if (j < zeros || k < ones) dp[i+1][j][k] = dp[i][j][k];
////					else dp[i+1][j][k] = max(dp[i][j][k], dp[i][j - zeros][k - ones]+1);
////				}
////			}
////		}
////		return dp[length][m ][n ];
////	}
////};
//
////i�Ŀռ���Խ�һ���Ż�
//class Solution {
//public:
//	int findMaxForm(vector<string>& strs, int m, int n) {
//		int length = strs.size();
//		vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//		for (int i = 0; i < length; i++) {
//			int zeros = 0;
//			int ones = 0;
//			for (int index = 0; index < strs[i].size(); index++) {
//				if (strs[i][index] == '0')zeros++;
//				else ones++;
//			}
//			for (int j = m; j >= zeros; j--)
//			{
//				for (int k = n; k >= ones; k--)
//				{
//					 dp[j][k] = max(dp[j][k], dp[j - zeros][k - ones] + 1);
//				}
//			}
//		}
//		return dp[m][n];
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<string> strs = { "10", "0001", "111001", "1", "0" };
//	int m = 5;
//	int n = 3;
//	Solution S;
//	cout<<S.findMaxForm(strs, m, n)<<endl;
//
//	system("pause");
//	return 0;
//}