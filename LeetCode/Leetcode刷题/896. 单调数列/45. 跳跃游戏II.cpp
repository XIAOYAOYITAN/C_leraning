#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;


//给定一个非负整数数组，你最初位于数组的第一个位置。
//数组中的每个元素代表你在该位置可以跳跃的最大长度。
//你的目标是使用最少的跳跃次数到达数组的最后一个位置。
//假设你总是可以到达数组的最后一个位置。

//示例 1:
//
//输入: [2, 3, 1, 1, 4]
//	输出 : 2
//	解释 : 跳到最后一个位置的最小跳跃数是 2。
//	从下标为 0 跳到下标为 1 的位置，跳 1 步，然后跳 3 步到达数组的最后一个位置。
//	示例 2 :
//
//	输入 : [2, 3, 0, 1, 4]
//	输出 : 2

//解题思路1：贪心，想办法在这步内跳到一个最好的位置，如何定义最好？index+pace最长定义为最好
class Solution {
public:
	int jump(vector<int>& nums) {

		//1.找到从当前位置出发能跳到的最好的位置
		int curr = 0;
		int count = 0;		
		while (curr!=nums.size()-1)
		{
			curr=best_pace(nums,curr);
			count++;
		}
		return count;
	}
	int best_pace(vector<int> &nums,int &index) {
		int max_sum = 0;
		int max_index = index + 1;
		for (int i = index + 1; i <= index + nums[index]; i++) {
			if (i == nums.size()-1)
			{
				max_index = nums.size()-1;
				break;
			}
			if (i + nums[i] > max_sum) {
				max_sum = i + nums[i];
				max_index = i;
			}
		}
		return max_index;
	}
};



int main() {
	vector<int> nums = { 2,1 };
	Solution s1;
	cout<<s1.jump(nums)<<endl;

	system("pause");
	return 0;
}