//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//
////���ַ�����ô���ǹؼ���
//class Solution {
//public:
//	bool search(vector<int>& nums, int target) {
//		int n = nums.size();
//		int i = 0;
//		int j = n-1;
//		while (i <= j) {
//			//1. �ж��Ƿ�����м�ֵ
//			int mid = (i + j) / 2;
//			if (nums[mid] == target) return true;
//			//2.�ж�����һ������������Ĳ��ֶ��ֲ��ң��Ҳ����Ͱ�i��j ������һ��
//			if (nums[i]==nums[mid]&&nums[j]==nums[mid])
//			{
//				i++;
//				j--;
//
//			}
//			else if (nums[i] <= nums[mid])//�������
//			{
//				if (target>=nums[i]&&target<nums[mid])//target������Ĳ�����
//				{
//					j = mid - 1;
//				}
//				else
//				{
//					i = mid + 1;//target���ұ�
//				}
//
//			}
//			else //�ұ�����
//			{
//				if (target > nums[mid] && target <= nums[j])//target������Ĳ�����
//				{
//					i = mid + 1;
//				}
//				else
//				{
//					j = mid - 1;
//				}
//			}
//		}
//		return false;
//	}
//};
//
//int main() {
//
//	vector<int> nums = {2,5,6,0,0,1,2};
//	int target = 3;
//	Solution s1;
//	cout<<s1.search(nums, target)<<endl;
//
//	system("pause");
//	return 0;
//}