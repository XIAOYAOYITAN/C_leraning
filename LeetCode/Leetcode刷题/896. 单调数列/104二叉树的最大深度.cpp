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
// //�ǵݹ����,ÿһ�α���Ҫ���ò�����н�㶼pop����
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
//			 count++;//�ò��������
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
//	//ѭ������
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
//		if (index == length) break;//����֮����һ���жϣ��������in��ĩβ������ѭ��
//		
//		if (in[index]!=NULL)
//		{
//			currNode->right = new TreeNode(in[index]);
//			deq.push_back(currNode->right);
//		}
//		index++;
//		if (index == length) break;//����֮����һ���жϣ��������in��ĩβ������ѭ��
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