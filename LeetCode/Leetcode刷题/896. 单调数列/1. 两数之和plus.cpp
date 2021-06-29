//
////给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。
////
////你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
////
////来源：力扣（LeetCode）
////链接：https ://leetcode-cn.com/problems/two-sum
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
////使用哈希表，确定一个数，枚举另一个数
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		unordered_map<int, int> map1;//name是数组的值，attribute是index
//		for (int i = 0; i < nums.size(); ++i) 
//		{
//			auto it = map1.find(target-nums[i]);
//			if ( it== map1.end()) {
//				map1.insert(make_pair(nums[i], i));
//				
//			}
//			else
//			{
//				return {it->second, i};
//			}
//		}
//		return {};
//	}
//};
////
////class Solution {
////public:
////	vector<int> twoSum(vector<int>& nums, int target) {
////		unordered_map<int, int> hashtable;
////		for (int i = 0; i < nums.size(); ++i) {
////			auto it = hashtable.find(target - nums[i]);
////			if (it != hashtable.end()) {
////				return { it->second, i };
////			}
////			hashtable[nums[i]] = i;
////		}
////		return {};
////	}
////};
//
//
//int main() {
//	vector<int> nums = {2,7,11,15};
//	int target=9;
//	Solution s1;
//	vector<int> out=s1.twoSum(nums, target);
//	for (auto it : out) {	
//		cout << it;
//	}
//
//	system("pause");
//	return 0;
//}