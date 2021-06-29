///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/reverse-linked-list/
//
//2. 原题：给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
//
//3. 归类：
//
//4. 解题要点
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
///*************************实现函数*****************************/
//
//
// //* Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
// 
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode *prev = nullptr;
//		ListNode *curr = head;
//		while (curr)
//		{
//			ListNode *next = curr->next;
//			curr->next = prev;
//			prev = curr;
//			curr = next;
//		}
//		return prev;
//	}
//};
//
//ListNode *CreateList(vector<int> v) {
//	ListNode *root=new ListNode();
//	ListNode *curr= new ListNode();
//	root->next = curr;
//	for (int i = 0; i < v.size(); i++)
//	{
//		curr->val = v[i];
//		curr->next  = new ListNode();
//		curr = curr->next;
//
//	}
//	return root;
//
//}
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//	vector<int> head = {1, 2, 3, 4, 5};
//	ListNode *ListHead=CreateList(head);
//	Solution s1;
//	ListNode *root=s1.reverseList(ListHead);
//	while (root)
//	{
//		cout << root->val << " ";
//		root = root->next;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}