///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/subarray-sum-equals-k/
//
//2. ԭ��
//560. ��ΪK��������
//����һ�����������һ������ k������Ҫ�ҵ��������к�Ϊ k ��������������ĸ�����
//
//ʾ�� 1 :
//
//����:nums = [1,1,1], k = 2
//���: 2 , [1,1] �� [1,1] Ϊ���ֲ�ͬ�������
//˵�� :
//
//����ĳ���Ϊ [1, 20,000]��
//������Ԫ�صķ�Χ�� [-1000, 1000] �������� k �ķ�Χ�� [-1e7, 1e7]��
//
//3. ���ࣺǰ׺�͡���ϣ��
//
//4. ����Ҫ�㣺������������������⣬ǰ׺�Ϳ϶����еģ�����ô��k�أ�
//�ù�ϣ���������Ѿ��������ǰ׺�ͣ�ÿ���һ����������ǰ׺�ͣ���ͨ����ϣ������Ƿ����ֵ���k�����飬
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
//
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	int subarraySum(vector<int>& nums, int k) {
//		unordered_map<int, int> value_count;
//		int count = 0;
//		int sum=0;
//		value_count[0] = 1;
//		for (int i = 0; i < nums.size(); i++) {
//			sum += nums[i];
//			if (value_count.find(sum - k) != value_count.end()) {
//				count += value_count[sum - k];
//			}
//			value_count[sum]++;
//		}
//		return count;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> nums = { -1,-1,1 };
//	int k = 1;
//	Solution S;
//	cout<<S.subarraySum(nums, k);
//
//	system("pause");
//	return 0;
//}
