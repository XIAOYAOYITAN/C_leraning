///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
//
//2. 原题
//237. 删除链表中的节点
//请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点。传入函数的唯一参数为 要被删除的节点 。
//现有一个链表 -- head = [4,5,1,9]，它可以表示为:
//示例 1：
//输入：head = [4,5,1,9], node = 5
//输出：[4,1,9]
//解释：给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
//示例 2：
//
//输入：head = [4,5,1,9], node = 1
//输出：[4,5,9]
//解释：给定你链表中值为 1 的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.
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
////  Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//ListNode* CreateList(vector<int> &v) {
//	ListNode* head=new ListNode(0);
//	ListNode* curr=head;
//	for (int i=0;i<v.size()-1;i++)
//	{
//		curr->val = v[i];
//		curr->next = new ListNode(0);
//		curr = curr->next;
//	}
//	curr->val = v[v.size() - 1];
//	return head;
//}
//
//
//// //链表可以增加一个哨兵节点，避免头结点和的判断不一致
////class Solution {
////public:
////	ListNode* removeElements(ListNode* head, int val) {
////		if (!head) return nullptr;
////		ListNode *guard = new ListNode(0);
////		guard->next = head;
////		delete1(head, guard, val);
////		return guard->next;
////	}
////	//递归解法：判断一个当前节点是否是需要删除的，然后往后递归
////	void delete1(ListNode* curr, ListNode* previous, int node)
////	{
////		if (!curr) return;
////		if (curr->val == node) {
////			previous->next = curr->next;
////			curr = curr->next;
////			delete1(curr, previous, node);
////		}
////		else
////		{
////			previous = previous->next;
////			curr = curr->next;
////			delete1(curr, previous, node);
////		}		
////	}
////};
//
////迭代解法
//class Solution {
//public:
//	ListNode* removeElements(ListNode* head, int val) {
//		if (!head) return nullptr;
//		ListNode *guard = new ListNode(0);
//		ListNode *prev = guard;
//		prev->next = head;
//		ListNode *curr = head;
//		while (curr!=nullptr)
//		{
//			if (curr->val == val) {
//				prev->next = curr->next;
//				curr = curr->next;
//			}
//			else
//			{
//				curr = curr->next;
//				prev = prev->next;
//			}
//		}
//		return guard->next;
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> v = {7,1,1,7,};
//	int node = 7;
//	ListNode* head= CreateList(v);
//	Solution s;
//	s.removeElements(head, node);
//
//	system("pause");
//	return 0;
//}
