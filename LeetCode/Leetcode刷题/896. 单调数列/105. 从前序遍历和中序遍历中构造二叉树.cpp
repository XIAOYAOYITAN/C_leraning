///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
//
//2. 原题:
//105. 从前序与中序遍历序列构造二叉树
//根据一棵树的前序遍历与中序遍历构造二叉树。
//注意:
//你可以假设树中没有重复的元素。
//
//例如，给出
//
//前序遍历 preorder = [3,9,20,15,7]
//中序遍历 inorder = [9,3,15,20,7]
//返回如下的二叉树：
//
//	3
//   / \
//  9  20
//	/  \
//   15   7
//
//3. 归类：dfs
//
//4. 解题要点:拆分前序遍历和中序遍历数组，确定root，左子树和右子树，继续dfs
//
//**********************************************************************/
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
///*************************实现函数*****************************/
//
//
////  Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
// 
////class Solution {
////public:
////	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
////		TreeNode *root = new TreeNode();
////		dfs(preorder, inorder, root);
////		return root;
////	}
////
////	void dfs(vector<int>& preorder, vector<int>& inorder,TreeNode* currNode)
////	{
////		//返回条件
////		if (preorder.size() == 0 && inorder.size() == 0) return;
////		vector<int> left_tree_preorder, left_tree_inorder;
////		vector<int> right_tree_preorder, right_tree_inorder;
////		TreeNode *curr = currNode;//当前节点
////		curr->val = preorder[0];
////		int index = find(inorder.begin(), inorder.end(), preorder[0]) - inorder.begin();
////		for (int i = 0; i < inorder.size(); i++) {
////			if (i<index)
////			{
////				left_tree_inorder.push_back(inorder[i]);
////			}
////			else if(i>index)
////			{
////				right_tree_inorder.push_back(inorder[i]);
////			}
////		}
////		for (int i = 1; i < preorder.size(); i++)
////		{
////			if (i<left_tree_inorder.size()+1)
////			{
////				left_tree_preorder.push_back(preorder[i]);
////			}
////			else
////			{
////				right_tree_preorder.push_back(preorder[i]);
////			}
////		}
////		if (left_tree_preorder.size()>0)
////		{
////			curr->left = new TreeNode();
////			dfs(left_tree_preorder, left_tree_inorder, curr->left);
////		}
////		if (right_tree_preorder.size() > 0)
////		{
////			curr->right = new TreeNode();
////			dfs(right_tree_preorder, right_tree_inorder, curr->right);
////		}
////	}
////};
//
////更好地方法是左子树和右子树不转到另一个容器中，只是用index的开始和结束来代替，时间和空间消耗会小的多
////另外，可以用哈希表把inorder存一遍，方便查找
//class Solution {
//private:
//	unordered_map<int, int> index;
//
//public:
//	TreeNode* myBuildTree(const vector<int>& preorder, const vector<int>& inorder, int preorder_left, int preorder_right, int inorder_left, int inorder_right) {
//		if (preorder_left > preorder_right) {
//			return nullptr;
//		}
//
//		// 前序遍历中的第一个节点就是根节点
//		int preorder_root = preorder_left;
//		// 在中序遍历中定位根节点
//		int inorder_root = index[preorder[preorder_root]];
//
//		// 先把根节点建立出来
//		TreeNode* root = new TreeNode(preorder[preorder_root]);
//		// 得到左子树中的节点数目
//		int size_left_subtree = inorder_root - inorder_left;
//		// 递归地构造左子树，并连接到根节点
//		// 先序遍历中「从 左边界+1 开始的 size_left_subtree」个元素就对应了中序遍历中「从 左边界 开始到 根节点定位-1」的元素
//		root->left = myBuildTree(preorder, inorder, preorder_left + 1, preorder_left + size_left_subtree, inorder_left, inorder_root - 1);
//		// 递归地构造右子树，并连接到根节点
//		// 先序遍历中「从 左边界+1+左子树节点数目 开始到 右边界」的元素就对应了中序遍历中「从 根节点定位+1 到 右边界」的元素
//		root->right = myBuildTree(preorder, inorder, preorder_left + size_left_subtree + 1, preorder_right, inorder_root + 1, inorder_right);
//		return root;
//	}
//
//	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//		int n = preorder.size();
//		// 构造哈希映射，帮助我们快速定位根节点
//		for (int i = 0; i < n; ++i) {
//			index[inorder[i]] = i;
//		}
//		return myBuildTree(preorder, inorder, 0, n - 1, 0, n - 1);
//	}
//};
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//
//	vector<int> preorder = { 3,9,20,15,7 };
//	vector<int> inorder = { 9,3,15,20,7 };
//	Solution S1;
//	TreeNode * root=S1.buildTree(preorder, inorder);
//
//	system("pause");
//	return 0;
//}
