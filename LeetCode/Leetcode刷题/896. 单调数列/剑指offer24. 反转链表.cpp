///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/
//
//2. ԭ��
//��ָ Offer 24. ��ת����
//����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣
//
//ʾ��:
//
//����: 1->2->3->4->5->NULL
//���: 5->4->3->2->1->NULL
//
//
//���ƣ�
//
//0 <= �ڵ���� <= 5000
//
//3. ���ࣺ��������������⣬�ܿ��������
//
//4. ����Ҫ��
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
///*************************ʵ�ֺ���*****************************/
//
//  //Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };
// 
//  //���д���ܲ��淶������head�Ķ���next�������˺ܶ��ָ����ж�
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
////�Ż�һ�£���һ��ֱ��ָ��null��������head
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
///*************************main���� �������*****************************/
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
//	//��������
//	vector<int> nums1 = {4,1,8,4,5};
//	ListNode *head1 = createList(nums1);
//	Solution S;
//	S.reverseList(head1);
//	
//	system("pause");
//	return 0;
//}