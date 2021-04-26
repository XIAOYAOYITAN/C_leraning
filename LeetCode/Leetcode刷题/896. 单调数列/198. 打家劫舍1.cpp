////你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
////
////给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <unordered_map>
//using namespace std;
////
//////空间复杂度O（N）
////class Solution1 {
////public:
////	int rob(vector<int>& nums) {
////		if (nums.size() == 0) return 0;
////		if (nums.size() == 1) return nums[0];
////		//递推
////		vector <int> S;
////		S.resize(nums.size());
////		S[0] = nums[0];
////		S[1] = max(nums[0], nums[1]);
////		for (int i = 2; i < nums.size(); i++)
////		{
////			S[i] = max(S[i-1],S[i-2]+nums[i]);
////		}
////		return S[nums.size()-1];
////	}
////};
////
//////空间复杂度O（1）
////class Solution2 {
////public:
////	int rob(vector<int>& nums) {
////		if (nums.size() == 0) return 0;
////		if (nums.size() == 1) return nums[0];
////		//递推
////		int first = nums[0];
////		int second = max(nums[1],nums[0]);
////		for (int i = 2; i < nums.size(); i++)
////		{
////			int tmp;
////			tmp = second;
////			second = max(second,first + nums[i]);
////			first = tmp;
////		}
////		return second;
////	}
////};
//
//////进阶版，房子围成一个圈，头和尾是相邻的
////class Solution {
////public:
////	int rob_old(vector<int>& nums,int begin,int end) {
////		if (begin==end) return nums[begin];
////		//递推
////		vector <int> S;
////		S.resize(end-begin+1);
////		S[0] = nums[begin];
////		S[1] = max(nums[begin], nums[begin+1]);
////		for (int i = 2; i <end-begin+1; i++)
////		{
////			S[i] = max(S[i-1],S[i-2]+nums[begin+i]);
////		}
////		return S[end - begin];
////	}
////	int rob(vector<int> &nums) {
////		int n = nums.size();
////		if (nums.size() == 0) return 0;
////		if (nums.size() == 1) return nums[0];
////		int dp=0;
////		dp = max(rob_old(nums, 0, nums.size() - 2), rob_old(nums, 1, nums.size() - 1));
////
////		return dp;
////	};
////
////};
//
////超进阶版
////在上次打劫完一条街道之后和一圈房屋后，小偷又发现了一个新的可行窃的地区。
////这个地区只有一个入口，我们称之为“根”。 除了“根”之外，每栋房子有且只有一个“父“房子与之相连。
////一番侦察之后，聪明的小偷意识到“这个地方的所有房屋的排列类似于一棵二叉树”。 如果两个直接相连的房子在同一天晚上被打劫，房屋将自动报警。
//
//
// //Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
////主要想法，动态规划，找规律！！
////对于根节点，有两种可能，选，或者不选，应该找其中最大的
// //对于根节点选的情况，两个子节点不能再选，其大小应等于两个子节点不能选的情况下的孙子节点情况之和
// //f(o)=val+g(l)+g(r)
// //对于根节点不选的情况，两个子节点都可以选或者不选，其大小应等于两个子节点选或者不选情况的最大值之和。
// //g(o)=max(f(l)+f(l))+max(f(r)+g(r))
//
//class Solution {
//public:
//	unordered_map <TreeNode *, int> f, g;
//	int rob(TreeNode* root) {
//		
//		dfs(root);
//		return max(f[root],g[root]);
//	}
//	
//	//dfs的目的，是求出从节点出发的最大偷盗值,从根节点进入，从而更新整张哈希表
//	void dfs(TreeNode *node) {
//		if (node == nullptr) return;
//		//先偷左，后偷由，偷完之后加自己？
//		dfs(node->left);
//		dfs(node->right);
//		f[node] = node->val+g[node->left] + g[node->right];
//		g[node] = max(f[node->left],g[node->left]) + max(f[node->right],g[node->right]);
//	}
//};
//
//int main() {
//	TreeNode *root=&TreeNode(3,&TreeNode(2,nullptr,&TreeNode(3)),&TreeNode(3,nullptr,&TreeNode(1)));
//	Solution s1;
//	cout<<s1.rob(root)<<endl;
//
//	system("pause");
//	return 0;
//}
