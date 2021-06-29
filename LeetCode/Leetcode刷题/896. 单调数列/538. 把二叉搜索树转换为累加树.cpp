///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/convert-bst-to-greater-tree/
//
//2. 原题
//538. 把二叉搜索树转换为累加树
//给出二叉 搜索 树的根节点，该树的节点值各不相同，请你将其转换为累加树（Greater Sum Tree），使每个节点 node 的新值等于原树中大于或等于 node.val 的值之和。
//
//提醒一下，二叉搜索树满足下列约束条件：
//节点的左子树仅包含键 小于 节点键的节点。
//节点的右子树仅包含键 大于 节点键的节点。
//左右子树也必须是二叉搜索树。
//
//示例 1：
//输入：[4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
//输出：[30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
//示例 2：
//
//输入：root = [0,null,1]
//输出：[1,null,1]
//示例 3：
//
//输入：root = [1,0,2]
//输出：[3,3,2]
//示例 4：
//
//输入：root = [3,2,4,1]
//输出：[7,9,4,10]
//
//3. 归类：DFS,中序遍历（反）
//
//4. 解题要点:二叉搜索树，怎么遍历是倒叙的呢？右，中，左，用这个顺序先遍历到最大的节点，然后sum累加，并置位val
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
//#define null -1
//
//// Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
//
// 
//class Solution {
//public:
//	int sum;
//	TreeNode* convertBST(TreeNode* root) {
//		sum = 0;
//		dfs(root);
//		return root;
//
//	}
//	void dfs(TreeNode* curr) {
//		if (!curr) return;//nullptr返回
//		if (curr->right) dfs(curr->right);
//		sum += curr->val;
//		curr->val = sum;
//		if (curr->left) dfs(curr->left);
//	}
//};
//
//
//
///*************************实现函数*****************************/
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
//		if (in[index]!=-1)
//		{
//			currNode->left = new TreeNode(in[index]);
//			deq.push_back(currNode->left);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//		
//		if (in[index]!=-1)
//		{
//			currNode->right = new TreeNode(in[index]);
//			deq.push_back(currNode->right);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//	}
//	return root;
//}
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> in = { 4,1,6,0,2,5,7,null,null,null,3,null,null,null,8 };
//	TreeNode* root=CreateTree(in);
//	Solution s1;
//	s1.convertBST(root);
//	
//
//	system("pause");
//	return 0;
//}