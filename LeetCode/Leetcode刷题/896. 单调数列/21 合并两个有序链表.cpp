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
//
//#include <iostream>
//#include <vector>
//#include <ctime>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		//1.新建一个链表L3,
//		ListNode *List= new ListNode();
//		ListNode *h = List;
//		while (l1!=nullptr && l2!=nullptr)
//		{
//			ListNode *l3= new ListNode(-2);
//			//2.取L1第一个元素，和L2第一个元素比大小，较小的放到L3,并删除原链表中的节点
//			if (l1->val <= l2->val)
//			{
//				l3->val = l1->val;
//				l1 = l1->next;//删除l1
//			}
//			else {
//				l3->val = l2->val;
//				l2 = l2->next;//删除l2
//			}
//			h->next = l3;
//			h = h->next;
//		}
//		//如果一个链表已经到了尾部，剩下另一个链表直接接到L后面
//		if (l1==nullptr)
//		{
//			h->next = l2;
//		}
//		if (l2==nullptr)
//		{
//			h->next = l1;
//		}
//		h = h->next;
//		return List->next;
//	}
//};
//
//int main() {
//	clock_t start, finish;
//	double totaltime;
//
//
//	ListNode L13(4);
//	ListNode L12(2,&L13);
//	ListNode L11(1,&L12);
//
//	ListNode L23(4);
//	ListNode L22(3, &L23);
//	ListNode L21(1, &L22);
//
//	Solution s1;
//	start = clock();
//	ListNode *temp=s1.mergeTwoLists(&L11,&L21);
//	finish = clock();
//
//	totaltime = (double)(finish*100000 - start*100000) ;
//	cout << "\n此程序的运行时间为" << totaltime << "秒" << endl;
//	
//	system("pause");
//	return 0;
//}
