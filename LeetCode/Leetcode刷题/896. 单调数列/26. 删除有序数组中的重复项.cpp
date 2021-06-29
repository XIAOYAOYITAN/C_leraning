//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int i = 0;
//		int j = 1;
//		if (nums.size()<2)
//		{
//			return nums.size();
//
//		}
//
//		while (j<nums.size())
//		{
//			if (nums[i] == nums[j]) {
//				j++;
//			}
//			else
//			{
//				if (j>i+1)
//				{
//					swap(nums[i + 1], nums[j]);
//					i++;
//					j++;
//				}
//			}
//		}
//		nums.resize(i + 1);
//		return i + 1;
//
//	}
//};
//
//int main() {
//
//	vector<int> v = { };
//	Solution s1;
//	cout<<s1.removeDuplicates(v)<<endl;
//	for (auto it : v)
//		cout << it << " ";
//	
//
//	system("pause");
//	return 0;
//}