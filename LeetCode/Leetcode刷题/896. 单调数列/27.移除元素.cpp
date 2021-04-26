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
//	int removeElement(vector<int>& nums, int val) {
//		
//		for (auto it_begin = nums.begin(); it_begin != nums.end(); )
//		{	
//			if ((*it_begin)==val)
//			{
//				if ((*(nums.end() - 1)) != val) {
//					(*it_begin) = *(nums.end() - 1);
//					nums.pop_back();
//				}
//				else
//				{
//					nums.pop_back();//往前移动一格
//				}
//			}
//			else
//			{
//				it_begin++;
//			}
//		}
//		return nums.end() - nums.begin();
//	}
//};
//
//int main() {
//	vector<int> nums = { 3,2,2,3 };
//	int val = 3;
//	Solution s1;
//	cout<<s1.removeElement(nums, val);
//
//	system("pause");
//	return 0;
//}