///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/convert-bst-to-greater-tree/
//
//2. ԭ��
//538. �Ѷ���������ת��Ϊ�ۼ���
//�������� ���� ���ĸ��ڵ㣬�����Ľڵ�ֵ������ͬ�����㽫��ת��Ϊ�ۼ�����Greater Sum Tree����ʹÿ���ڵ� node ����ֵ����ԭ���д��ڻ���� node.val ��ֵ֮�͡�
//
//����һ�£�������������������Լ��������
//�ڵ���������������� С�� �ڵ���Ľڵ㡣
//�ڵ���������������� ���� �ڵ���Ľڵ㡣
//��������Ҳ�����Ƕ�����������
//
//ʾ�� 1��
//���룺[4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
//�����[30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
//ʾ�� 2��
//
//���룺root = [0,null,1]
//�����[1,null,1]
//ʾ�� 3��
//
//���룺root = [1,0,2]
//�����[3,3,2]
//ʾ�� 4��
//
//���룺root = [3,2,4,1]
//�����[7,9,4,10]
//
//3. ���ࣺDFS,�������������
//
//4. ����Ҫ��:��������������ô�����ǵ�����أ��ң��У��������˳���ȱ��������Ľڵ㣬Ȼ��sum�ۼӣ�����λval
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
//#define null -1
//
//// Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
//
// 
//class Solution {
//public:
//	int sum;
//	TreeNode* convertBST(TreeNode* root) {
//		sum = 0;
//		dfs(root);
//		return root;
//
//	}
//	void dfs(TreeNode* curr) {
//		if (!curr) return;//nullptr����
//		if (curr->right) dfs(curr->right);
//		sum += curr->val;
//		curr->val = sum;
//		if (curr->left) dfs(curr->left);
//	}
//};
//
//
//
///*************************ʵ�ֺ���*****************************/
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
//		if (in[index]!=-1)
//		{
//			currNode->left = new TreeNode(in[index]);
//			deq.push_back(currNode->left);
//		}
//		index++;
//		if (index == length) break;//����֮����һ���жϣ��������in��ĩβ������ѭ��
//		
//		if (in[index]!=-1)
//		{
//			currNode->right = new TreeNode(in[index]);
//			deq.push_back(currNode->right);
//		}
//		index++;
//		if (index == length) break;//����֮����һ���жϣ��������in��ĩβ������ѭ��
//	}
//	return root;
//}
///*************************main���� �������*****************************/
//int main() {
//	vector<int> in = { 4,1,6,0,2,5,7,null,null,null,3,null,null,null,8 };
//	TreeNode* root=CreateTree(in);
//	Solution s1;
//	s1.convertBST(root);
//	
//
//	system("pause");
//	return 0;
//}