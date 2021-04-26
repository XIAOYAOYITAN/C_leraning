//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//////给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的 中位数 。
////
////class Solution {
////public:
////	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
////		//1.合并数组
////		vector<int> nums3;
////		int i = 0;
////		int j = 0;
////		while (i != nums1.size() && j != nums2.size()) {
////			if (nums1[i] < nums2[j])
////			{
////				nums3.push_back(nums1[i]);
////				i++;
////			}
////			else
////			{
////				nums3.push_back(nums2[j]);
////				j++;
////			}
////		}
////		if (i == nums1.size())
////		{
////			for (int k = j; k < nums2.size(); k++)
////			{
////				nums3.push_back(nums2[k]);
////			}
////		}
////		if (j == nums2.size())
////		{
////			for (int k = i; k < nums1.size(); k++)
////			{
////				nums3.push_back(nums1[k]);
////			}
////		}
////		
////		//2. 找中位数
////		int n = nums3.size();
////		double out = 0;
////		if (n % 2 == 0) out = (double)(nums3[n / 2]+nums3[n/2-1])/2;
////		if (n % 2 != 0)	out = (double)nums3[n/2];
////		return out;
////
////	}
////};
//
//class Solution {
//public:
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//		nums1.insert(nums1.end(),nums2.begin(),nums2.end());
//		sort(nums1.begin(), nums1.end());
//		
//		//2. 找中位数
//		int n = nums1.size();
//		double out = 0;
//		if (n % 2 == 0) out = (double)(nums1[n / 2]+nums1[n/2-1])/2;
//		if (n % 2 != 0)	out = (double)nums1[n/2];
//		return out;
//
//	}
//};
//
//int main() {
//	vector<int> nums1 = {1,2};
//	vector<int> nums2 = {3,4};
//	Solution s1;
//	cout<<s1.findMedianSortedArrays(nums1, nums2);
//
//	system("pause");
//	return 0;
//}