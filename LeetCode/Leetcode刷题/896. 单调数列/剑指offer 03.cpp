//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//
////1.方法一，使用有序链表自动排序，然后查找
////优点是想起来容易，比较好实现,缺点是效率低，复杂度O（N）
//class Solution1 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		multiset<int> s1;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			s1.insert(nums[i]);
//		}
//		auto it = s1.begin();
//		for ( ; it !=s1.end(); )
//		{
//			int temp1 = (*it);
//			int temp2 = *(++it);
//			if (temp1==temp2) {
//				return temp1;
//			}
//		}
//		return -1;
//	}
//};
//
////方法二，使用冒泡排序，边排序边判断,复杂度O（N^2）
//class Solution2 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//
//		//冒泡排序
//		for (int j = nums.size() - 1; j >= 0; j--)
//		{
//			for (int i = 0; i < j; i++)
//			{
//				if (nums[i] == nums[i + 1]) return nums[i];
//				if (nums[i] > nums[i + 1]) {
//					int temp = nums[i];
//					nums[i] = nums[i + 1];
//					nums[i + 1] = temp;
//				}
//			}
//		}
//		return -1;
//
//	}
//};
//
////方法三,合理利用set的排他性
//class Solution3 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		set<int> s1;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			pair<set<int>::iterator,bool> ret=s1.insert(nums[i]);
//			if (!ret.second) return nums[i];
//		}
//		return -1;
//	}
//};
//
//
////条件特殊：长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围
////所以，如果没有重复，排序之后应该是一个萝卜一个坑，使用原地置换思想
////i号坑就想要i号萝卜
//class Solution4 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		for (int i = 0; i < nums.size(); i++)
//		{
//			while (nums[i] != i) {
//				//i号坑把自己不要的萝卜给对应的坑
//
//				if (nums[nums[i]] == nums[i])
//				{
//					return nums[i];
//				}
//
//				int temp = nums[i];
//				nums[i] = nums[nums[i]];
//				nums[temp] = temp;
//
//			}
//		}
//		return -1;
//	}
//};
//
//
//
//int main() {
//	vector<int> v1 = { 3,1,2,3 };
//	Solution4 s2;
//	cout<<s2.findRepeatNumber(v1);
//
//	system("pause");
//	return 0;
//}