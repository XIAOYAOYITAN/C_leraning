//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//
////����һ����������������Ƿ��Ǿ���ԳƵġ�
//
////�����������һ��������
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
////����˼·��������������������������������������������������������������������
//class Solution {
//public:
//	bool isSymmetric(TreeNode* root) {
//		bool flag=true;
//		mycop(root->left, root->right,flag);
//		return flag;
//	}
//	//�ݹ飬����
//
//	//�жϸ��ڵ��Ƿ�ԳƵĺ���
//	void mycop(TreeNode *node_left, TreeNode *node_right,bool &flag)
//	{
//		//�������ǿյ�
//		if (!node_left && !node_right) {
//			return;
//		}
//		//����һ���ǿյ�
//		if (!node_left || !node_right) {
//			flag = false;
//			return;
//		}
//		if (node_left->val != node_right->val) { 
//			flag = false; 
//			return; 
//		}
//		mycop(node_left->left, node_right->right,flag);
//		mycop(node_left->right, node_right->left, flag);	
//	}
//};
//
//
//
//int main() {
//	vector<int> tree = { 1,2,2,3,4,4,3 };
//	TreeNode * root=CreateTree(tree);
//	Solution s1;
//	cout << s1.isSymmetric(root) << endl;
//
//	system("pause");
//	return 0;
//}