///**
// * definition for a binary tree node.
// * struct treenode {
// *     int val;
// *     treenode *left;
// *     treenode *right;
// *     treenode() : val(0), left(nullptr), right(nullptr) {}
// *     treenode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     treenode(int x, treenode *left, treenode *right) : val(x), left(left), right(right) {}
// * };
// */
//#include <iostream>
//#include <queue>
// using namespace std;
//
// struct treenode {
// int val;
// treenode *left;
// treenode *right;
// treenode() : val(0), left(nullptr), right(nullptr) {}
// treenode(int x) : val(x), left(nullptr), right(nullptr) {}
// treenode(int x, treenode *left, treenode *right) : val(x), left(left), right(right) {}
// 
// };
//
// class solution {
// public:
//	 int maxdepth(treenode* root) {
//		 int count = 0;
//		 queue<treenode *> q;
//		 count++;
//		 q.push(root);
//		 while (!q.empty()) {
//			 treenode*  tree_tmp = q.back();
//			 q.pop();
//			 while(tree_tmp->left!=nullptr||tree_tmp->right!=nullptr) {
//				 count++;
//				 if(tree_tmp->left != nullptr)
//				 q.push(tree_tmp->left);
//				 if(tree_tmp->right!=nullptr)
//				 q.push(tree_tmp->right);
//			 }
//		 }
//	 }
// };
//
// int main() {
//	 treenode* root;
//
// 
//	 system("pause");
//	 return 0;
// }