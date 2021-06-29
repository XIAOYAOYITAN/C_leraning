///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/total-hamming-distance/
//
//2. ԭ��
//477. ���������ܺ�
//���������� �������� ָ�������������ֵĶ���������Ӧλ��ͬ��������
//
//����һ�������У�����������֮�人��������ܺ͡�
//
//ʾ��:
//
//����: 4, 14, 2
//
//���: 6
//
//����: �ڶ����Ʊ�ʾ�У�4��ʾΪ0100��14��ʾΪ1110��2��ʾΪ0010����������ʾ��Ϊ�����ֺ���λ֮���ϵ��
//���Դ�Ϊ��
//HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
//ע��:
//
//������Ԫ�صķ�ΧΪ�� 0�� 10^9��
//����ĳ��Ȳ����� 10^4��
//
//3. ���ࣺ
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
//////��������Ȼ��ʱ
////class Solution {
////public:
////	int totalHammingDistance(vector<int>& nums) {
////		int n = nums.size();
////		int sum=0;
////		for (int i = 0; i < n; i++) {
////			for (int j = i + 1; j < n; j++) {
////				sum = sum + HanmmingDistance(nums[i],nums[j]);
////			}
////		}
////		return sum;
////	}
////	int HanmmingDistance(int num1,int num2) {
////		int count=0;
////		int tmp = num1 ^ num2;
////		while (tmp!=0)
////		{
////			tmp = tmp &(tmp-1);
////			count++;
////		}
////		return count;
////	}
////};
//
////��λͳ�ƣ������һ������һλΪ1����ֻ��Ҫͳ����������һλΪ0���������ٶ�ÿ��������30λ
//class Solution {
//public:
//	int totalHammingDistance(vector<int>& nums) {
//		int n = nums.size();
//		int sum = 0;
//		for (int j = 0; j < 30; j++)
//		{
//			int count_0 = 0;
//			int count_1 = 0;
//			for (int i = 0; i < n; i++)
//			{
//				bool bit = nums[i] & (1 << j);
//				if (bit == 1) count_1++;
//				else count_0++;
//			}
//			sum = sum + count_0 * count_1;
//		}
//		return sum;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> nums = { 4, 14, 2 };
//	Solution S;
//	cout<<S.totalHammingDistance(nums)<<endl;
//
//	system("pause");
//	return 0;
//}
