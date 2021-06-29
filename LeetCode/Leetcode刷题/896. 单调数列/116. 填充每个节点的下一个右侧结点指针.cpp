///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node/
//
//2. 原题
//116. 填充每个节点的下一个右侧节点指针
//给定一个 完美二叉树 ，其所有叶子节点都在同一层，每个父节点都有两个子节点。二叉树定义如下：
//
//struct Node {
//  int val;
//  Node *left;
//  Node *right;
//  Node *next;
//}
//填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL。
//初始状态下，所有 next 指针都被设置为 NULL。
//进阶：
//你只能使用常量级额外空间。
//使用递归解题也符合要求，本题中递归程序占用的栈空间不算做额外的空间复杂度。
//
//示例：
//输入：root = [1,2,3,4,5,6,7]
//输出：[1,#,2,3,#,4,5,6,7,#]
//解释：给定二叉树如图 A 所示，你的函数应该填充它的每个 next 指针，以指向其下一个右侧节点，如图 B 所示。序列化的输出按层序遍历排列，同一层节点由 next 指针连接，'#' 标志着每一层的结束。
//
//3. 归类：
//
//4. 解题要点
//
//**********************************************************************/
//
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
///*************************实现函数*****************************/
//// Definition for a Node.
//class Node {
//public:
//	int val;
//	Node* left;
//	Node* right;
//	Node* next;
//
//	Node() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val, Node* _left, Node* _right, Node* _next)
//		: val(_val), left(_left), right(_right), next(_next) {}
//};
//
//Node * CreateTree(vector<int> &in) {
//	int index = 0;
//	int length = in.size();
//	Node * root = new Node(in[index]);
//	index++;
//	deque<Node *> deq;
//	deq.push_back(root);
//	//循环读入
//	Node * currNode;
//	while (1)
//	{
//		currNode = deq.front();
//		deq.pop_front();
//		if (in[index] != NULL)
//		{
//			currNode->left = new Node(in[index]);
//			deq.push_back(currNode->left);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//
//		if (in[index] != NULL)
//		{
//			currNode->right = new Node(in[index]);
//			deq.push_back(currNode->right);
//		}
//		index++;
//		if (index == length) break;//自增之后做一次判断，如果到了in的末尾，结束循环
//	}
//	return root;
//}
//
////层序遍历
//class Solution {
//public:
//	deque<Node *> deq;
//	Node* connect(Node* root) {
//		if (!root) return nullptr;
//		deq.push_back(root);
//		while (!deq.empty()) {
//			int deq_size = deq.size();
//			while (deq_size>0)
//			{
//				Node *curr = deq.front(); deq.pop_front();
//				deq_size--;
//				if (deq_size>0)
//				{
//					curr->next = deq.front();
//				}
//				if (curr->left) deq.push_back(curr->left);
//				if (curr->right) deq.push_back(curr->right);				
//			}
//		}
//		return root;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> in = { 1,2,3,4,5,6,7 };
//	Solution s1;
//	Node* root= CreateTree(in);
//	s1.connect(root);
//
//	system("pause");
//	return 0;
//}
