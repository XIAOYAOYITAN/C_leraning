///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//#include <iostream>
//#include <queue>
// using namespace std;
//
// struct TreeNode {
// int val;
// TreeNode *left;
// TreeNode *right;
// TreeNode() : val(0), left(nullptr), right(nullptr) {}
// TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// 
// };
//
// class Solution {
// public:
//	 int maxDepth(TreeNode* root) {
//		 int count = 0;
//		 queue<TreeNode *> Q;
//		 count++;
//		 Q.push(root);
//		 while (!Q.empty()) {
//			 TreeNode*  tree_tmp = Q.back();
//			 Q.pop();
//			 while(tree_tmp->left!=nullptr||tree_tmp->right!=nullptr) {
//				 count++;
//				 if(tree_tmp->left != nullptr)
//				 Q.push(tree_tmp->left);
//				 if(tree_tmp->right!=nullptr)
//				 Q.push(tree_tmp->right);
//			 }
//		 }
//	 }
// };
//
// int main() {
//	 TreeNode* root;
//
// 
//	 system("pause");
//	 return 0;
// }