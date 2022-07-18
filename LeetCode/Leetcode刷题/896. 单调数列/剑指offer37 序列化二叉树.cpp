///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/xu-lie-hua-er-cha-shu-lcof/
//
//2. 原题
//请实现两个函数，分别用来序列化和反序列化二叉树。
//你需要设计一个算法来实现二叉树的序列化与反序列化。这里不限定你的序列 / 反序列化算法执行逻辑，你只需要保证一个二叉树可以被序列化为一个字符串并且将这个字符串反序列化为原始的树结构。
//提示：输入输出格式与 LeetCode 目前使用的方式一致，详情请参阅 LeetCode 序列化二叉树的格式。你并非必须采取这种方式，你也可以采用其他的方法解决这个问题。
//
//
//示例：
//输入：root = [1,2,3,null,null,4,5]
//输出：[1,2,3,null,null,4,5]
//
//
//3. 归类：树的非递归层序遍历，
//
//4. 解题要点
//好像并不难啊，居然是hard题，开心，又可以自己刷一道hard了
//1. 首先是序列化:问题为层序遍历一个二叉树，输出所有的元素，包括空和非空，
//使用的是非递归的方式，用一个队列（先进先出），一次将一层的元素全部入队，然后一个一个pop出来，pop的时候，将左子树和右子树入队
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
//#include <queue>
//#include <string>
//using namespace std;
//
///*************************实现函数*****************************/
//
//#define NULL nullptr
// // Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
// 
//class Codec {
//public:
//
//	// Encodes a tree to a single string.
//	string serialize(TreeNode* root) {
//		string rst="";
//		if (root == nullptr) return rst;
//		queue<TreeNode *> que;	
//		que.push(root);
//		while (!que.empty())
//		{
//			TreeNode * curr = que.front(); que.pop();
//			if (curr != nullptr) {
//				rst += to_string(curr->val) +',';
//				 que.push(curr->left);
//				 que.push(curr->right);
//			}
//			else
//			{
//				rst += "null,";
//			}
//		}
//		return rst;
//	}
//
//	// Decodes your encoded data to tree.
//	TreeNode* deserialize(string data) {
//		if (data == "") return nullptr;
//
//		//先把字符串按照‘，’分割，保存成vector
//		vector<string> v;
//		string s ;
//		for (int i = 0; i < data.size();i++) {
//			if (data[i] != ',') {
//				s+=data[i];
//			}
//			else
//			{
//				v.push_back(s);
//				s = "";
//			}
//		}
//		//根据现有的数据构造二叉树
//		int index = 0;
//		TreeNode *root = new TreeNode(atoi(v[index].c_str()));
//		queue<TreeNode *> que;
//		que.push(root);
//		while (!que.empty())
//		{
//			TreeNode *curr = que.front(); que.pop();
//			if (v[2*index+1] != "null") {
//				curr->left = new TreeNode(atoi(v[index].c_str()));
//				que.push(curr->left);
//			}
//			if (v[2*index+2] != "null") {
//				curr->right = new TreeNode(atoi(v[index].c_str()));
//				que.push(curr->right);
//			}
//			index++;
//		}
//		return root;
//	}
//};
//
//
//
//
//// Your Codec object will be instantiated and called as such:
//// Codec codec;
//// codec.deserialize(codec.serialize(root));
//
///*************************main函数 输入输出*****************************/
//int main() {
//
//	system("pause");
//	return 0;
//}
//
//
//
