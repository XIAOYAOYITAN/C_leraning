//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////����һ�ö��������������� ��������� 
////������������Ϊһ�õ���˳����������ʹ��������ߵĽڵ��Ϊ���ĸ��ڵ㣬����ÿ���ڵ�û�����ӽڵ㣬ֻ��һ�����ӽڵ㡣
//
/////**
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
//class Solution {
//public:
//	TreeNode * out;
//	TreeNode* increasingBST(TreeNode * root) {
//		out = new TreeNode(0);
//		vector<int> res;
//		middle_rerange(root,res);
//		TreeNode *out=new TreeNode(res[0]);
//		TreeNode *currNode = out;
//		for (int i = 1; i < res.size(); i++)
//		{
//			currNode->right = new TreeNode(res[i]);
//			currNode = currNode->right;
//		}
//		return out;
//	}	
//	//�������
//	void  middle_rerange(TreeNode * root,vector<int> &res) {
//		if (!root) return ;	
//		middle_rerange(root->left,res);
//		res.push_back(root->val);
//		middle_rerange(root->right,res);
//	}
//};
//
//
//
//TreeNode * CreateTree(vector<int> &in) {
//	int index = 0;
//	int length = in.size();
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
//
//int main() {
//	vector<int> in = { 5,3,6,2,4,NULL,8,1,NULL,NULL,NULL,7,9 };
//	TreeNode *root=CreateTree(in);
//
//	Solution s1;
//	s1.increasingBST(root);
//
//	system("pause");
//	return 0;
//}