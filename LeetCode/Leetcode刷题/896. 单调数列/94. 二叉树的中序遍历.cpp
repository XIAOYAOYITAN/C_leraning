///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/binary-tree-inorder-traversal/
//
//2. ԭ��
//94. ���������������
//����һ���������ĸ��ڵ� root ���������� ���� ������
//
//
//
//ʾ�� 1��
//
//
//���룺root = [1,null,2,3]
//�����[1,3,2]
//ʾ�� 2��
//
//���룺root = []
//�����[]
//ʾ�� 3��
//
//���룺root = [1]
//�����[1]
//ʾ�� 4��
//
//
//���룺root = [1,2]
//�����[2,1]
//ʾ�� 5��
//
//
//���룺root = [1,null,2]
//�����[1,2]
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
//
////�����������һ��������
//#define null NULL
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
//		if (in[index] != NULL)
//		{
//			currNode->left = new TreeNode(in[index]);
//			deq.push_back(currNode->left);
//		}
//		index++;
//		if (index == length) break;//����֮����һ���жϣ��������in��ĩβ������ѭ��
//
//		if (in[index] != NULL)
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
//////���������ʹ�õݹ�
////class Solution {
////public:
////	vector<int> out;
////	vector<int> inorderTraversal(TreeNode* root) {
////		dfs(root);
////		return out;
////	}
////
////	void dfs(TreeNode *root) {
////		if (!root) return;
////		dfs(root->left);
////		out.push_back(root->val);
////		dfs(root->right);
////	
////	}
////};
//
////�ǵݹ����������ʹ��ջ
//class Solution {
//public:
//	vector<int> inorderTraversal(TreeNode* root) {
//		vector<int> out;
//		stack<TreeNode *> stk;
//		TreeNode *cur = root;
//		while (!stk.empty()||cur!=nullptr)
//		{
//			if (cur != nullptr) {
//				stk.push(cur);
//				cur = cur->left;
//			}
//			else
//			{
//				cur = stk.top(); stk.pop();
//				out.push_back(cur->val);
//				cur = cur->right;
//			}
//		}
//		return out;
//	}
//};
//
///*************************main���� �������*****************************/
//
//int main() {
//	vector<int> in = { 1, null, 2, 3 };
//	TreeNode *root = CreateTree(in);
//	Solution S;
//	vector<int> out=S.inorderTraversal(root);
//	for (auto it : out) {
//		cout << it << endl;
//	
//	}
//
//	system("pause");
//	return 0;
//}