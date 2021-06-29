///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
//
//2. ԭ��:
//105. ��ǰ��������������й��������
//����һ������ǰ�������������������������
//ע��:
//����Լ�������û���ظ���Ԫ�ء�
//
//���磬����
//
//ǰ����� preorder = [3,9,20,15,7]
//������� inorder = [9,3,15,20,7]
//�������µĶ�������
//
//	3
//   / \
//  9  20
//	/  \
//   15   7
//
//3. ���ࣺdfs
//
//4. ����Ҫ��:���ǰ�����������������飬ȷ��root����������������������dfs
//
//**********************************************************************/
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
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
////		//��������
////		if (preorder.size() == 0 && inorder.size() == 0) return;
////		vector<int> left_tree_preorder, left_tree_inorder;
////		vector<int> right_tree_preorder, right_tree_inorder;
////		TreeNode *curr = currNode;//��ǰ�ڵ�
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
////���õط���������������������ת����һ�������У�ֻ����index�Ŀ�ʼ�ͽ��������棬ʱ��Ϳռ����Ļ�С�Ķ�
////���⣬�����ù�ϣ���inorder��һ�飬�������
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
//		// ǰ������еĵ�һ���ڵ���Ǹ��ڵ�
//		int preorder_root = preorder_left;
//		// ����������ж�λ���ڵ�
//		int inorder_root = index[preorder[preorder_root]];
//
//		// �ȰѸ��ڵ㽨������
//		TreeNode* root = new TreeNode(preorder[preorder_root]);
//		// �õ��������еĽڵ���Ŀ
//		int size_left_subtree = inorder_root - inorder_left;
//		// �ݹ�ع����������������ӵ����ڵ�
//		// ��������С��� ��߽�+1 ��ʼ�� size_left_subtree����Ԫ�ؾͶ�Ӧ����������С��� ��߽� ��ʼ�� ���ڵ㶨λ-1����Ԫ��
//		root->left = myBuildTree(preorder, inorder, preorder_left + 1, preorder_left + size_left_subtree, inorder_left, inorder_root - 1);
//		// �ݹ�ع����������������ӵ����ڵ�
//		// ��������С��� ��߽�+1+�������ڵ���Ŀ ��ʼ�� �ұ߽硹��Ԫ�ؾͶ�Ӧ����������С��� ���ڵ㶨λ+1 �� �ұ߽硹��Ԫ��
//		root->right = myBuildTree(preorder, inorder, preorder_left + size_left_subtree + 1, preorder_right, inorder_root + 1, inorder_right);
//		return root;
//	}
//
//	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//		int n = preorder.size();
//		// �����ϣӳ�䣬�������ǿ��ٶ�λ���ڵ�
//		for (int i = 0; i < n; ++i) {
//			index[inorder[i]] = i;
//		}
//		return myBuildTree(preorder, inorder, 0, n - 1, 0, n - 1);
//	}
//};
//
///*************************main���� �������*****************************/
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
