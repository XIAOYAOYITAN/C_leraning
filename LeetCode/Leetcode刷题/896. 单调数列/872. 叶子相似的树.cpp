///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/leaf-similar-trees/
//
//2. 原题
//872. 叶子相似的树
//请考虑一棵二叉树上所有的叶子，这些叶子的值按从左到右的顺序排列形成一个 叶值序列 。
//
//举个例子，如上图所示，给定一棵叶值序列为 (6, 7, 4, 9, 8) 的树。
//
//如果有两棵二叉树的叶值序列是相同，那么我们就认为它们是 叶相似 的。
//
//如果给定的两个根结点分别为 root1 和 root2 的树是叶相似的，则返回 true；否则返回 false 。
//示例 1：
//
//输入：root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
//输出：true
//示例 2：
//
//输入：root1 = [1], root2 = [1]
//输出：true
//示例 3：
//
//输入：root1 = [1], root2 = [2]
//输出：false
//示例 4：
//
//输入：root1 = [1,2], root2 = [2,2]
//输出：true
//示例 5：
//
//输入：root1 = [1,2,3], root2 = [1,3,2]
//输出：false
//
//
//提示：
//
//给定的两棵树可能会有 1 到 200 个结点。
//给定的两棵树上的值介于 0 到 200 之间。
//
//3. 归类：
//
//4. 解题要点:给两棵树分别做一下遍历，叶节点保存到一个数组，然后比较数组是否相等
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//#define null NULL
//
///*************************实现函数*****************************/
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
//class Solution {
//public:
//	bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//		vector<int> leaf1;
//		vector<int> leaf2;
//		dfs(root1, leaf1);
//		dfs(root2, leaf2);
//
//		if (leaf1.size() != leaf2.size()) return false;
//		for (int i = 0; i < leaf1.size();i++) {
//			if (leaf1[i] != leaf2[i]) return false;
//		}
//		return true;
//	}
//
//	void dfs(TreeNode* root, vector<int> &leaf)
//	{
//		if (root->left ==nullptr &&root->right==nullptr) leaf.push_back(root->val);
//		if (root->left) dfs(root->left,leaf);
//		if (root->right) dfs(root->right, leaf);
//	}
//
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> v1 = { 3,5,1,6,2,9,8,null,null,7,4 };
//	vector<int> v2 = { 3,5,1,6,7,4,2,null,null,null,null,null,null,9,8 };
//	TreeNode * root1 = CreateTree(v1);
//	TreeNode * root2 = CreateTree(v2);
//
//	Solution S1;
//	cout << S1.leafSimilar(root1, root2)<<endl;
//
//	system("pause");
//	return 0;
//}
