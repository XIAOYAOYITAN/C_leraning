///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
//
//2. ԭ��
//237. ɾ�������еĽڵ�
//���дһ��������ʹ�����ɾ��ĳ�������и����ģ���ĩβ���ڵ㡣���뺯����Ψһ����Ϊ Ҫ��ɾ���Ľڵ� ��
//����һ������ -- head = [4,5,1,9]�������Ա�ʾΪ:
//ʾ�� 1��
//���룺head = [4,5,1,9], node = 5
//�����[4,1,9]
//���ͣ�������������ֵΪ 5 �ĵڶ����ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 1 -> 9.
//ʾ�� 2��
//
//���룺head = [4,5,1,9], node = 1
//�����[4,5,9]
//���ͣ�������������ֵΪ 1 �ĵ������ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 5 -> 9.
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
//// //�����������һ���ڱ��ڵ㣬����ͷ���͵��жϲ�һ��
////class Solution {
////public:
////	ListNode* removeElements(ListNode* head, int val) {
////		if (!head) return nullptr;
////		ListNode *guard = new ListNode(0);
////		guard->next = head;
////		delete1(head, guard, val);
////		return guard->next;
////	}
////	//�ݹ�ⷨ���ж�һ����ǰ�ڵ��Ƿ�����Ҫɾ���ģ�Ȼ������ݹ�
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
////�����ⷨ
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
///*************************main���� �������*****************************/
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
