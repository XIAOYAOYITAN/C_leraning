//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//
////二分法，怎么分是关键！
//class Solution {
//public:
//	bool search(vector<int>& nums, int target) {
//		int n = nums.size();
//		int i = 0;
//		int j = n-1;
//		while (i <= j) {
//			//1. 判断是否等于中间值
//			int mid = (i + j) / 2;
//			if (nums[mid] == target) return true;
//			//2.判断是哪一边有序，在有序的部分二分查找，找不到就把i，j 换到另一边
//			if (nums[i]==nums[mid]&&nums[j]==nums[mid])
//			{
//				i++;
//				j--;
//
//			}
//			else if (nums[i] <= nums[mid])//左边有序
//			{
//				if (target>=nums[i]&&target<nums[mid])//target在有序的部分中
//				{
//					j = mid - 1;
//				}
//				else
//				{
//					i = mid + 1;//target在右边
//				}
//
//			}
//			else //右边有序
//			{
//				if (target > nums[mid] && target <= nums[j])//target在有序的部分中
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