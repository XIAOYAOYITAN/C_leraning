///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/invert-binary-tree/
//
//2. 原题
//226. 翻转二叉树
//翻转一棵二叉树。
//
//示例：
//
//输入：
//
//	 4
//   /   \
//  2     7
// / \   / \
//1   3 6   9
//输出：
//
//	 4
//   /   \
//  7     2
// / \   / \
//9   6 3   1
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
//////层序遍历建造一个二叉树
//
//// * Definition for a binary tree node.
// struct TreeNode {
//    int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
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
//		if (in[index]!=NULL)
//		{
//			currNode->left = new TreeNode(in[index]);
//			deq.push_back(currNode->left);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//		
//		if (in[index]!=NULL)
//		{
//			currNode->right = new TreeNode(in[index]);
//			deq.push_back(currNode->right);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//	}
//	return root;
//}
// class Solution {
// public:
//	 TreeNode* tmp;
//	 TreeNode* invertTree(TreeNode* root) {
//		 if (!root) return nullptr;
//		 dfs(root);
//		 return root;
//	 }
//
//	 void dfs(TreeNode *CurrNode) {
//		 if (!CurrNode) return;
//		  tmp=CurrNode->left;
//		 CurrNode->left = CurrNode->right;
//		 CurrNode->right = tmp;
//		 dfs(CurrNode->left);
//		 dfs(CurrNode->right);
//	 }
// };
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> v = { 4,2,7,1,3,6,9 };
//	TreeNode *root = CreateTree(v);
//	Solution s;
//	s.invertTree(root);
//
//
//	system("pause");
//	return 0;
//}
