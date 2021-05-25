///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list/
//
//2. ԭ��:
//114. ������չ��Ϊ����
//����������ĸ���� root �����㽫��չ��Ϊһ��������
//
//չ����ĵ�����Ӧ��ͬ��ʹ�� TreeNode ������ right ��ָ��ָ����������һ����㣬������ָ��ʼ��Ϊ null ��
//չ����ĵ�����Ӧ��������� ������� ˳����ͬ��
//Ҫ�󣺿ռ临�Ӷ�ΪO��1��
//
//
//ʾ�� 1��
//���룺root = [1,2,5,3,4,null,6]
//�����[1,null,2,null,3,null,4,null,5,null,6]
//
//3. ���ࣺ
//
//4. ����Ҫ�㣺���ڿռ临�Ӷȵ�Ҫ�󣬲���ʹ�ö���Ŀռ�洢�ö�����������������Ϣ
//��ǰ�������ʱ���ȷ��ʵ�ǰ��㣬�ٷ��������������У����������е�����Ҷ�ӽ�㣬�������ʵĽڵ㣬Ҳ����������ǰ��ڵ�
//���Կ���ֱ�Ӱ�����������������������Ҷ�ӽ���ϣ�������֮��ԭ������������������
//
//**********************************************************************/
///*************************ͷ�ļ�*****************************/
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
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	void flatten(TreeNode* root) {
//		if (root == nullptr) return;
//		TreeNode * curr = root;
//		if (curr->left) {
//			curr = curr->left;
//			//�ҵ������������ұ߽��
//			while (curr->right != nullptr) {
//				curr = curr->right;
//			}
//			//����������
//			curr->right = root->right;
//			//ԭ����������Ϊ������
//			root->right = root->left;
//			root->left = nullptr;
//		}
//		flatten(root->right);
//	}
//};
//
///*************************main���� �������*****************************/
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
////�����������һ��������
//
