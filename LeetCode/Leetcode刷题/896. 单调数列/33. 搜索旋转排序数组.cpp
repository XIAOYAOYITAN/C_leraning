//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//
////二分法，总有一端是有序的，判断是否在有序的区间内，不在的话就舍弃有序的一段
//class Solution {
//public:
//	int search(vector<int>& nums, int target) {
//		int n = nums.size();
//		int i = 0;
//		int j = n-1;
//		while (i <= j) {
//			//1. 判断是否等于中间值
//			int mid = (i + j) / 2;
//			if (nums[mid] == target) return mid;
//			//2.判断是哪一边有序，在有序的部分二分查找，找不到就把i，j 换到另一边
//			if (nums[i] <= nums[mid])//左边有序
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