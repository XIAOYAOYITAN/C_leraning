//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
////先讲想法：
////遍历思想，第一个是空集，然后加上第一个元素，拷贝，再加第二个元素，拷贝，加上第三个元素
//
//class Solution1 {
//public:
//	vector<vector<int>> subsets_all = { {} };
//
//	vector<vector<int>> subsets(vector<int>& nums) {
//		int n = nums.size();
//		//循环n次，直到每个元素都被添加
//		for (int i = 0; i < n; i++) {
//			vector<vector<int>> subsets_old = subsets_all;
//			for (int j = 0; j <subsets_old.size(); j++)
//			{
//				//原有序列拷贝
//				vector<int> tmp_new = subsets_old[j];
//				//在原有序列的基础上添加一个新的数
//				tmp_new.push_back(nums[i]);
//				//把新的数添加到新的总集
//				subsets_all.push_back(tmp_new);
//			}
//		}
//		return subsets_all;
//	}
//};
//
//class Solution2 {
//public:
//	vector<int> t;//走过的路径
//	vector<vector<int>> ans;//总集合
//
//	//cur是现在所处的位置，nums还未走过的路径
//	void dfs(int cur, vector<int>& nums) {
//		//结束条件，当走到最后一步时，把走过的路径放到总集中，回溯
//		if (cur == nums.size()) {
//			ans.push_back(t);
//			return;
//		}
//		//添加路径
//		t.push_back(nums[cur]);
//		//继续走，直到走到头
//		dfs(cur + 1, nums);
//		//把走错的路吐出来
//		t.pop_back();
//		//继续走，直到走到头
//		dfs(cur + 1, nums);
//	}
//
//	vector<vector<int>> subsets(vector<int>& nums) {
//		dfs(0, nums);
//		return ans;
//	}
//};
//
//
//int main(void) {
//
//	vector<int> nums = {1,2,3};
//
//	Solution2 s1;
//
//	s1.subsets(nums);
//
//	system("pause");
//	return 0;
//}