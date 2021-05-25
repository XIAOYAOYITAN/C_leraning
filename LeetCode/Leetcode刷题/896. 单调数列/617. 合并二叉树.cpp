///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/merge-two-binary-trees/
//
//2. 原题
//给定两个二叉树，想象当你将它们中的一个覆盖到另一个上时，两个二叉树的一些节点便会重叠。
//
//你需要将他们合并为一个新的二叉树。合并的规则是如果两个节点重叠，那么将他们的值相加作为节点合并后的新值，否则不为 NULL 的节点将直接作为新二叉树的节点。
//
//示例 1:
//
//输入:
//	Tree 1                     Tree 2
//		  1                         2
//		 / \                       / \
//		3   2                     1   3
//	   /                           \   \
//	  5                             4   7
//输出:
//合并后的树:
//		 3
//		/ \
//	   4   5
//	  / \   \
//	 5   4   7
//
//
//3. 归类：
//
//4. 解题要点
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//#define null NULL
//
///*************************实现函数*****************************/
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
//class Solution {
//public:
//	TreeNode *root3 = new TreeNode();
//	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//		if (root1 == nullptr&&root2 == nullptr) return nullptr;
//		dfs(root1, root2, root3);
//		return root3;
//	}
//
//	void dfs(TreeNode* curr1, TreeNode* curr2, TreeNode *curr3) {
//		if (curr1 == nullptr&&curr2 == nullptr) return;
//		if (curr1 == nullptr) { curr3->val = curr2->val; curr1 = new TreeNode(); }
//		else if (curr2 == nullptr) { curr3->val = curr1->val; curr2 = new TreeNode(); }
//		else curr3->val = curr2->val + curr1->val;
//		if (curr1->left != nullptr || curr2->left != nullptr) {
//			curr3->left = new TreeNode(); 
//			dfs(curr1->left, curr2->left, curr3->left);
//	}
//		if (curr1->right != nullptr || curr2->right != nullptr) 
//		{
//			curr3->right = new TreeNode();
//			dfs(curr1->right, curr2->right, curr3->right); 
//		}
//	}
//};
//
////官方解法，简洁，高级，大范围merge
//class Solution {
//public:
//	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
//		if (t1 == nullptr) {
//			return t2;
//		}
//		if (t2 == nullptr) {
//			return t1;
//		}
//		auto merged = new TreeNode(t1->val + t2->val);
//		merged->left = mergeTrees(t1->left, t2->left);
//		merged->right = mergeTrees(t1->right, t2->right);
//		return merged;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> v1 = { 1, 3, 2, 5 };
//	vector<int> v2 = { 2, 1, 3, null, 4, null, 7 };
//	TreeNode *root1 = CreateTree(v1);
//	TreeNode *root2 = CreateTree(v2);
//	Solution s;
//	s.mergeTrees(root1, root2);
//
//	system("pause");
//	return 0;
//}
//
////层序遍历建造一个二叉树
//
