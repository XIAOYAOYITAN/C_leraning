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
//		//1.�½�һ������L3,
//		ListNode *List= new ListNode();
//		ListNode *h = List;
//		while (l1!=nullptr && l2!=nullptr)
//		{
//			ListNode *l3= new ListNode(-2);
//			//2.ȡL1��һ��Ԫ�أ���L2��һ��Ԫ�رȴ�С����С�ķŵ�L3,��ɾ��ԭ�����еĽڵ�
//			if (l1->val <= l2->val)
//			{
//				l3->val = l1->val;
//				l1 = l1->next;//ɾ��l1
//			}
//			else {
//				l3->val = l2->val;
//				l2 = l2->next;//ɾ��l2
//			}
//			h->next = l3;
//			h = h->next;
//		}
//		//���һ�������Ѿ�����β����ʣ����һ������ֱ�ӽӵ�L����
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
//	cout << "\n�˳��������ʱ��Ϊ" << totaltime << "��" << endl;
//	
//	system("pause");
//	return 0;
//}
