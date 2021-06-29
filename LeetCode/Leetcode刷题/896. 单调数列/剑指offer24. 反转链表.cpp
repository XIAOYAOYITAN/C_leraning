///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/
//
//2. 原题
//剑指 Offer 24. 反转链表
//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
//
//示例:
//
//输入: 1->2->3->4->5->NULL
//输出: 5->4->3->2->1->NULL
//
//
//限制：
//
//0 <= 节点个数 <= 5000
//
//3. 归类：链表最基础的问题，很考验基本功
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
//  //Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };
// 
//  //这个写法很不规范，用了head的二阶next，产生了很多空指针的判断
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode *prev=head;
//		if (head == nullptr) return nullptr;
//		if (head->next == nullptr) return head;
//		ListNode *next=head->next;
//		while (next->next!=nullptr)
//		{
//			ListNode *tmp = next->next;
//			next->next = prev;
//			prev = next;
//			next = tmp;
//		}
//		next->next = prev;
//		head->next = nullptr;
//		return next;
//	}
//};
//
////优化一下，第一项直接指向null，而不是head
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode *prev = nullptr;
//		ListNode *curr = head;
//		if (head == nullptr) return nullptr;
//		while (curr->next != nullptr)
//		{
//			ListNode *tmp = curr->next;
//			curr->next = prev;
//			prev = curr;
//			curr = tmp;
//		}
//		curr->next = prev;
//		return curr;
//	}
//};
///*************************main函数 输入输出*****************************/
//ListNode * createList(vector<int> nums) {
//	ListNode *head =  new ListNode(nums[0]);
//	ListNode *cur = head;
//	for (int i = 1; i < nums.size(); i++) {
//		ListNode *nextnode = new ListNode(nums[i]);
//		cur->next = nextnode;
//		cur = cur->next;
//	}
//	return head;
//}
//int main() {
//	//链表数组
//	vector<int> nums1 = {4,1,8,4,5};
//	ListNode *head1 = createList(nums1);
//	Solution S;
//	S.reverseList(head1);
//	
//	system("pause");
//	return 0;
//}