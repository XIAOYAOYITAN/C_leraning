///**
// * definition for a binary tree node.
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
// //非递归遍历,每一次遍历要将该层的所有结点都pop出来
// class Solution {
// public:
//	 int maxDepth(TreeNode* root) {
//		 int count = 0;
//		 if (!root) return 0;
//		 queue<TreeNode *> q;
//		 q.push(root);
//		 while (!q.empty()) {
//			 int q_size = q.size();
//			 while (q_size>0)
//			 {
//				 TreeNode*  tree_tmp = q.front(); q.pop();
//				 if (tree_tmp->left != nullptr)
//					 q.push(tree_tmp->left);
//				 if (tree_tmp->right != nullptr)
//					 q.push(tree_tmp->right);
//				 q_size--;
//			 }
//			 count++;//该层遍历结束
//		 }	 
//		 return count;
//	 }
// };
//
// TreeNode * CreateTree(vector<int> &in) {
//	int index = 0;
//	int length = in.size();
//	if (length==0)
//	{
//		return nullptr;
//	}
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
//
// int main() {
//	 vector<int> num = { };
//	 TreeNode* root=CreateTree(num);
//	 Solution S1;
//     cout<<S1.maxDepth(root);
//
// 
//	 system("pause");
//	 return 0;
// }