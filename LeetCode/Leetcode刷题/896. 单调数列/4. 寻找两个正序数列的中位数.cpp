//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//////����������С�ֱ�Ϊ m �� n �����򣨴�С�������� nums1 �� nums2�������ҳ���������������������� ��λ�� ��
////
////class Solution {
////public:
////	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
////		//1.�ϲ�����
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
////		//2. ����λ��
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
//		//2. ����λ��
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