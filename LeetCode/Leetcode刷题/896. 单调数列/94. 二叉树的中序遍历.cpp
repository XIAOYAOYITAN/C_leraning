///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/binary-tree-inorder-traversal/
//
//2. 原题
//94. 二叉树的中序遍历
//给定一个二叉树的根节点 root ，返回它的 中序 遍历。
//
//
//
//示例 1：
//
//
//输入：root = [1,null,2,3]
//输出：[1,3,2]
//示例 2：
//
//输入：root = []
//输出：[]
//示例 3：
//
//输入：root = [1]
//输出：[1]
//示例 4：
//
//
//输入：root = [1,2]
//输出：[2,1]
//示例 5：
//
//
//输入：root = [1,null,2]
//输出：[1,2]
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
//
///*************************实现函数*****************************/
//
////层序遍历建造一个二叉树
//#define null NULL
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
//////中序遍历，使用递归
////class Solution {
////public:
////	vector<int> out;
////	vector<int> inorderTraversal(TreeNode* root) {
////		dfs(root);
////		return out;
////	}
////
////	void dfs(TreeNode *root) {
////		if (!root) return;
////		dfs(root->left);
////		out.push_back(root->val);
////		dfs(root->right);
////	
////	}
////};
//
////非递归中序遍历，使用栈
//class Solution {
//public:
//	vector<int> inorderTraversal(TreeNode* root) {
//		vector<int> out;
//		stack<TreeNode *> stk;
//		TreeNode *cur = root;
//		while (!stk.empty()||cur!=nullptr)
//		{
//			if (cur != nullptr) {
//				stk.push(cur);
//				cur = cur->left;
//			}
//			else
//			{
//				cur = stk.top(); stk.pop();
//				out.push_back(cur->val);
//				cur = cur->right;
//			}
//		}
//		return out;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//	vector<int> in = { 1, null, 2, 3 };
//	TreeNode *root = CreateTree(in);
//	Solution S;
//	vector<int> out=S.inorderTraversal(root);
//	for (auto it : out) {
//		cout << it << endl;
//	
//	}
//
//	system("pause");
//	return 0;
//}