//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////
//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		vector<int> tmp;
//		nums1.resize(m + n);
//		int i = 0; 
//		int j = 0;
//		if (n == 0) return;
//		if (m == 0) { nums1.swap(nums2); return; }
//		while (1)
//		{
//			if (nums1[i] <= nums2[j])
//			{
//				tmp.push_back(nums1[i]);
//				i++;
//				if (i == m) {
//					while (j<n)
//					{
//						tmp.push_back(nums2[j]);
//						j++;	
//					}break;
//				}
//			}
//			else
//			{
//				tmp.push_back(nums2[j]);
//				j++;
//				if (j == n) { 
//					while (i<m)
//					{					
//						tmp.push_back(nums1[i]);
//						i++;
//					}break; 
//				}
//			}
//		}
//		nums1.swap(tmp);
//	}
//};
//
//class Solution2 {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//
//		for (int i = 0; i < n; i++)
//		{
//			nums1[m + i] = nums2[i];
//		}
//		sort(nums1.begin(),nums1.end());
//	}
//};
//
//
//
//int main() {
//	vector<int> v1 = {1,2,3,0,0,0};
//	vector<int> v2 = {2,5,6};
//	Solution2 s2;
//	s2.merge(v1, 3, v2, 3);
//	for (auto i : v1)
//		cout << i;
//
//	system("pause");
//	return 0;
//}