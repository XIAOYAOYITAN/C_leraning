///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list/
//
//2. 原题:
//114. 二叉树展开为链表
//给你二叉树的根结点 root ，请你将它展开为一个单链表：
//
//展开后的单链表应该同样使用 TreeNode ，其中 right 子指针指向链表中下一个结点，而左子指针始终为 null 。
//展开后的单链表应该与二叉树 先序遍历 顺序相同。
//要求：空间复杂度为O（1）
//
//
//示例 1：
//输入：root = [1,2,5,3,4,null,6]
//输出：[1,null,2,null,3,null,4,null,5,null,6]
//
//3. 归类：
//
//4. 解题要点：由于空间复杂度的要求，不能使用额外的空间存储该二叉树的左右子树信息
//在前序遍历的时候，先访问当前结点，再访问左子树（若有），左子树中的最右叶子结点，是最后访问的节点，也是右子树的前序节点
//所以可以直接把右子树接在左子树的最右叶子结点上！，接完之后，原本的左子树变右子树
//
//**********************************************************************/
///*************************头文件*****************************/
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
///*************************实现函数*****************************/
//class Solution {
//public:
//	void flatten(TreeNode* root) {
//		if (root == nullptr) return;
//		TreeNode * curr = root;
//		if (curr->left) {
//			curr = curr->left;
//			//找到左子树的最右边结点
//			while (curr->right != nullptr) {
//				curr = curr->right;
//			}
//			//右子树接上
//			curr->right = root->right;
//			//原左子树调整为右子树
//			root->right = root->left;
//			root->left = nullptr;
//		}
//		flatten(root->right);
//	}
//};
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//	vector<int> num = { 1,2,5,3,4,NULL,6 };
//	TreeNode *root= CreateTree(num);
//	Solution S1;
//	S1.flatten(root);
//
//	system("pause");
//	return 0;
//}
//
////层序遍历建造一个二叉树
//
