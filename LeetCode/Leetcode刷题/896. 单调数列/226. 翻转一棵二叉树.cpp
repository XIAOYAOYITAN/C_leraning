///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/invert-binary-tree/
//
//2. ԭ��
//226. ��ת������
//��תһ�ö�������
//
//ʾ����
//
//���룺
//
//	 4
//   /   \
//  2     7
// / \   / \
//1   3 6   9
//�����
//
//	 4
//   /   \
//  7     2
// / \   / \
//9   6 3   1
//
//3. ���ࣺ
//
//4. ����Ҫ��
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//////�����������һ��������
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
///*************************main���� �������*****************************/
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
