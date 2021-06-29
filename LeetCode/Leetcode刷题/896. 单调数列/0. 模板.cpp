/********************************************************************
1. 题目来源：

2. 原题

3. 归类：

4. 解题要点

**********************************************************************/

/*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
/*************************实现函数*****************************/

/*************************main函数 输入输出*****************************/
//int main() {
//
//	system("pause");
//	return 0;
//}

//层序遍历建造一个二叉树

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

//用数组产生一个链表
//Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};

//ListNode * createList(vector<int> nums) {
//	ListNode *head = new ListNode(nums[0]);
//	ListNode *cur = head;
//	for (int i = 1; i < nums.size(); i++) {
//		ListNode *nextnode = new ListNode(nums[i]);
//		cur->next = nextnode;
//		cur = cur->next;
//	}
//	return head;
//}