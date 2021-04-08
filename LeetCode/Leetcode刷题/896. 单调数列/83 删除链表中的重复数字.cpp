///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// #include <stack>
// using namespace std;
// 
//
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
//
////class Solution {
////public:
////	ListNode* deleteDuplicates(ListNode* head) {
////		ListNode * tmp = head;
////
////		while (tmp->next != nullptr) {
////			while (tmp->next->val == tmp->val) {
////				tmp->next = tmp->next->next;
////				if (tmp->next==nullptr)
////				{
////					break;
////				}
////			}
////			tmp = tmp->next;
////			if (tmp==nullptr)
////			{
////				break;
////			}
////		}
////		return head;
////	}
////};
//
//class Solution {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {
//		if (!head) {
//			return head;
//		}
//
//		ListNode* cur = head;
//		while (cur->next) {
//			if (cur->val == cur->next->val) {
//				cur->next = cur->next->next;
//			}
//			else {
//				cur = cur->next;
//			}
//		}
//
//		return head;
//	}
//};
//
//
//int main() {
//
//	ListNode L1(3);
//	ListNode L2(3, &L1);
//	ListNode L3(2, &L2);
//	ListNode L4(2, &L3);
//	ListNode L5(1, &L4);
//
//	Solution s;
//	ListNode * L=s.deleteDuplicates(&L5);
//
//	//Êä³ö
//	while (L!=nullptr)
//	{
//		cout << L->val<<" ";
//		L = L->next;
//	}
//
//
//	system("pause");
//
//	return 0;
//}
//
