////给定二叉搜索树的根结点 root，返回值位于范围[low, high] 之间的所有结点的值的和。
////
////示例 1：
////
////输入：root = [10, 5, 15, 3, 7, null, 18], low = 7, high = 15
////输出：32
////示例 2：
////
////输入：root = [10, 5, 15, 3, 7, 13, 18, 1, null, 6], low = 6, high = 10
////输出：23。
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//// * Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//
//TreeNode * CreateTree(vector<int> &in) {
//	int index = 0;
//	int length = in.size();
//	TreeNode * root = new TreeNode(in[index]);
//	index++;
//	deque<TreeNode *> deq;
//	deq.push_back(root);
//	//循环读入
//	TreeNode * currNode;
//	while (1)
//	{
//		currNode = deq.front();
//		deq.pop_front();
//		if (in[index] != NULL)
//		{
//			currNode->left = new TreeNode(in[index]);
//			deq.push_back(currNode->left);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//
//		if (in[index] != NULL)
//		{
//			currNode->right = new TreeNode(in[index]);
//			deq.push_back(currNode->right);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//	}
//	return root;
//}
//
//////解题思路1:暴力：二叉搜索树的性质决定了其中序遍历是一个顺序输出，在输出的vector中find两个值，然后中间值全加起来就完事了
////class Solution {
////public:
////	int rangeSumBST(TreeNode* root, int low, int high) {
////		int sum = 0;
////		mid_erodic(root, sum, low, high);
////		return sum;
////
////	}
////
////	void mid_erodic(TreeNode *node, int &sum,int &low,int &high) {
////		if (!node) return;
////		mid_erodic(node->left,sum,low,high);
////		if (node->val>=low&&node->val<=high)
////		{
////			sum=sum+node->val;
////		}
////		mid_erodic(node->right, sum, low, high);
////	}
////};
//
//////解题思路2:迭代，在进行遍历的时候使用二叉树的性质，有些子树就用不着遍历了
////class Solution {
////public:
////	int rangeSumBST(TreeNode* root, int low, int high) {
////		int sum = 0;
////		mid_erodic(root, sum, low, high);
////		return sum;
////	}
////
////	void mid_erodic(TreeNode *node, int &sum, int &low, int &high) {
////		if (!node) return;
////		if(node->val>=low) mid_erodic(node->left, sum, low, high);
////		
////		if (node->val >= low && node->val <= high)
////		{
////			sum = sum + node->val;
////		}
////		if (node->val <= high) mid_erodic(node->right, sum, low, high);
////	}
////};
//
////解题思路3：非递归，类似于中序遍历
//class Solution {
//public:
//	int rangeSumBST(TreeNode* root, int low, int high) {
//		int sum=0;
//		deque<TreeNode *> deq;
//		deq.push_back(root);
//
//		while (!deq.empty())
//		{
//			TreeNode *CurrNode = deq.front();
//			deq.pop_front();
//			if (CurrNode==nullptr)
//			{
//				continue;
//
//			}
//			if (CurrNode->val < low) {
//				
//				deq.push_back(CurrNode->right);
//			}
//			else if (CurrNode->val > high) {
//				deq.push_back(CurrNode->left);
//			}
//			else
//			{
//				sum += CurrNode->val;
//				deq.push_back(CurrNode->left);
//				deq.push_back(CurrNode->right);
//			}
//		}
//		return sum;
//	}
//};
//
//int main() {
//	vector<int> input = { 10, 5, 15, 3, 7, NULL, 18 };
//	TreeNode *root = CreateTree(input);
//	Solution s;
//	int low = 7;
//	int high = 15;
//	cout<<s.rangeSumBST(root,low,high)<<endl;
//
//	system("pause");
//	return 0;
//}
//
////层序遍历建造一个二叉树
//
