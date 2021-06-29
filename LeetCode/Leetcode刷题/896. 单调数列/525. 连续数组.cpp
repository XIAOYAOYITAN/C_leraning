///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/contiguous-array/
//
//2. ԭ��
//525. ��������
//����һ������������ nums , �ҵ�������ͬ������ 0 �� 1 ������������飬�����ظ�������ĳ��ȡ�
//
//ʾ�� 1:
//
//����: nums = [0,1]
//���: 2
//˵��: [0, 1] �Ǿ�����ͬ����0��1������������顣
//ʾ�� 2:
//
//����: nums = [0,1,0]
//���: 2
//˵��: [0, 1] (�� [1, 0]) �Ǿ�����ͬ����0��1������������顣
//
//3. ���ࣺǰ׺�͵ı���
//
//4. ����Ҫ�㣺ʹ��һ�����飬��¼[0,i-1]����1�ĸ�������ʵҲ����ǰ׺��
//��ô��[i,j]��1�ĸ�������nums[j]-nums[i]
//
//**********************************************************************/
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
////ǰ׺��+�������������Ӷ���������Ϊ0��N^2��,��ʱ
//class Solution {
//public:
//	int findMaxLength(vector<int>& nums) {
//		int n = nums.size();
//		vector<int> perfix(n+1);
//		for (int i = 0; i < n; i++)
//		{
//			perfix[i + 1] = perfix[i] + nums[i];
//		}
//
//
//		int max_count = 0;
//		for (int i = 0; i+max_count < n+1; i++) {
//			for (int j = i+1; j < n+1; j++)
//			{
//				if ((perfix[j] - perfix[i]) * 2 == j - i&& (max_count < j - i)) {
//						max_count = j - i;
//				}
//			}
//		}
//		return max_count;
//	}
//};
//
////�����Ż���
////1. 0����ת����-1�������ж�ǰ׺�͵�ʱ��ֻ��Ҫά��һ����count������һ��0�ᵼ��ǰ׺�͵ĸı�
////2. ʹ�ù�ϣ���¼ǰ׺�ͣ��Ѵ��ڵ�ʱ��˵��������0��1����Ŀ���
//class Solution {
//public:
//	int findMaxLength(vector<int>& nums) {
//		unordered_map<int, int> mp;//keyΪcount��valueΪindex
//		mp[0] = -1;
//		int n = nums.size();
//		int count = 0;
//		int max_dst=0;
//		for (int i = 0; i < n; i++)
//		{
//			if(nums[i]==0)	count += -1;
//			else  count += 1;
//			if (mp.count(count) >= 1) {
//				if(max_dst < i-mp[count] )		
//					max_dst = i-mp[count];
//			}
//			else {
//				mp[count] = i;
//			}
//		}
//		return max_dst;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> nums = { 0, 1, 0  };
//	Solution S;
//	cout<<S.findMaxLength(nums)<<endl;
//
//	system("pause");
//	return 0;
//}