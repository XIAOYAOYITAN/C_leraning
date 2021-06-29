///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/continuous-subarray-sum/
//
//2. ԭ��
//523. �������������
//����һ���������� nums ��һ������ k ����дһ���������жϸ������Ƿ���ͬʱ�����������������������飺
//
//�������С ����Ϊ 2 ����
//������Ԫ���ܺ�Ϊ k �ı�����
//������ڣ����� true �����򣬷��� false ��
//
//�������һ������ n �������� x ���� x = n * k ����� x �� k ��һ��������
//
//
//
//ʾ�� 1��
//
//���룺nums = [23,2,4,6,7], k = 6
//�����true
//���ͣ�[2,4] ��һ����СΪ 2 �������飬���Һ�Ϊ 6 ��
//ʾ�� 2��
//
//���룺nums = [23,2,6,4,7], k = 6
//�����true
//���ͣ�[23, 2, 6, 4, 7] �Ǵ�СΪ 5 �������飬���Һ�Ϊ 42 ��
//42 �� 6 �ı�������Ϊ 42 = 7 * 6 �� 7 ��һ��������
//ʾ�� 3��
//
//���룺nums = [23,2,6,4,7], k = 13
//�����false
//3. ���ࣺǰ׺�ͣ���ϣ��
//
//4. ����Ҫ�㣺���Ƶ���ǰ��Ӧ���������������е����������������ǰ׺�ͽ������ô��������ǰ׺��
//ע�⣺ǰ׺�ͱ�����long����
//
//**********************************************************************/
//
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
////
/////*************************ʵ�ֺ���*****************************/
//////��һ�ַ�����
//////1. ���ǰ׺��   //2. ����ǰ׺�ͣ������Ȼ�󿴲��Ƿ���k�ı�����
//////�Ż����ȱ������е�������kȡ�࣬�����������򵥵㣿
////class Solution {
////public:
////	bool checkSubarraySum(vector<int>& nums, int k) {
////		//�õ�ǰ׺�����飬Ȼ��ȫ�����k������
////		int n = nums.size();
////		vector<int> perfix(n + 1);
////		for (int i = 0; i < n; i++) {
////			perfix[i + 1] = (perfix[i] + nums[i]) % k;
////		}
////
////		unordered_map<int, int> mp;//��һ������value���ڶ�������index
////		for (int i = 0; i < n + 1; i++)
////		{
////			auto it = mp.insert(make_pair(perfix[i], i));
////			if (!it.second) {
////				if (mp[perfix[i]] + 1 < i)  return true;
////			}
////		}
////		return false;
////	}
////};
//
////�Ż����ڲ����ʱ��Ϳ������ж���
//class Solution {
//public:
//	bool checkSubarraySum(vector<int>& nums, int k) {
//		//�õ�ǰ׺�����飬Ȼ��ȫ�����k������
//		unordered_map<int, int> mp;//��һ������value���ڶ�������index
//		int n = nums.size();
//		vector<int> perfix(n + 1);
//		mp[0]=0;
//		for (int i = 0; i < n; i++) {
//			perfix[i + 1] = (perfix[i] + nums[i]) % k;
//			auto it = mp.insert(make_pair(perfix[i+1], i+1));
//			if (!it.second) {
//				if (mp[perfix[i+1]] + 1 < i+1)  return true;
//			}
//		}
//		return false;
//	}
//};
///*************************main���� �������*****************************/
//int main() {
//	vector<int> nums = { 23,2,4,6,6 };
//	int k = 7;
//	Solution S;
//	cout << S.checkSubarraySum(nums,k) << endl;
//
//	system("pause");
//	return 0;
//}