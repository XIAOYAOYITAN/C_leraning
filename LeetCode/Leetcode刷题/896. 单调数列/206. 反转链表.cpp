///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/reverse-linked-list/
//
//2. ԭ�⣺���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
//
//3. ���ࣺ
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
///*************************main���� �������*****************************/
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