//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//
////���ַ�������һ��������ģ��ж��Ƿ�������������ڣ����ڵĻ������������һ��
//class Solution {
//public:
//	int search(vector<int>& nums, int target) {
//		int n = nums.size();
//		int i = 0;
//		int j = n-1;
//		while (i <= j) {
//			//1. �ж��Ƿ�����м�ֵ
//			int mid = (i + j) / 2;
//			if (nums[mid] == target) return mid;
//			//2.�ж�����һ������������Ĳ��ֶ��ֲ��ң��Ҳ����Ͱ�i��j ������һ��
//			if (nums[i] <= nums[mid])//�������
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
//		return -1;
//	}
//};
//
//int main() {
//
//	vector<int> nums = {5,1};
//	int target = 5;
//	Solution s1;
//	cout<<s1.search(nums, target)<<endl;
//
//	system("pause");
//	return 0;
//}