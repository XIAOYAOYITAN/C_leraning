///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/intersection-of-two-linked-lists/
//
//2. ԭ��
//160. �ཻ����
//���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣�����������û�н��㣬���� null ��
//ͼʾ���������ڽڵ� c1 ��ʼ�ཻ��
//��Ŀ���� ��֤ ������ʽ�ṹ�в����ڻ���
//
//ע�⣬�������ؽ����������� ������ԭʼ�ṹ ��
//
//
//ʾ�� 1��
//
//���룺intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3
//�����Intersected at '8'
//���ͣ��ཻ�ڵ��ֵΪ 8 ��ע�⣬������������ཻ����Ϊ 0����
//�Ӹ��Եı�ͷ��ʼ�������� A Ϊ [4,1,8,4,5]������ B Ϊ [5,0,1,8,4,5]��
//�� A �У��ཻ�ڵ�ǰ�� 2 ���ڵ㣻�� B �У��ཻ�ڵ�ǰ�� 3 ���ڵ㡣
//ʾ�� 2��
//
//���룺intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
//�����Intersected at '2'
//���ͣ��ཻ�ڵ��ֵΪ 2 ��ע�⣬������������ཻ����Ϊ 0����
//�Ӹ��Եı�ͷ��ʼ�������� A Ϊ [0,9,1,2,4]������ B Ϊ [3,2,4]��
//�� A �У��ཻ�ڵ�ǰ�� 3 ���ڵ㣻�� B �У��ཻ�ڵ�ǰ�� 1 ���ڵ㡣
//ʾ�� 3��
//
//
//���룺intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
//�����null
//���ͣ��Ӹ��Եı�ͷ��ʼ�������� A Ϊ [2,6,4]������ B Ϊ [1,5]��
//���������������ཻ������ intersectVal ����Ϊ 0���� skipA �� skipB ����������ֵ��
//�����������ཻ����˷��� null ��
//
//3. ���ࣺ����
//
//4. ����Ҫ�㣺�ҵĵ�һ�뷨���Ƚ�����������Ȼ������Ľڵ㿪ʼ����
//����ʵ���Ƕ���Ŀ��˼�����⣬��ν�ཻ���������ǽڵ��ֵһ�������ǽڵ�ĵ�ַһ��
//���ԣ���򵥵��뷨�Ǳ�����һ�������ŵ�һ����ϣ���У�Ȼ������ڶ�������ÿ�α����ڹ�ϣ���в���
//�ҵ���ʱ��˵���������ཻ����
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//
// //* Definition for singly-linked list.
//  struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
////  //ʹ�ù�ϣ��
////class Solution {
////public:
////	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
////		unordered_map<ListNode *, int> mp;
////		ListNode *pa = headA;
////		ListNode *pb = headB;
////		while (pa != nullptr)
////		{
////			mp[pa]++;
////			pa = pa->next;
////		}
////		while (pb != nullptr)
////		{
////			auto it = mp.find(pb);
////			if (it != mp.end())
////				return (*it).first;
////			pb = pb->next;
////		}
////		return nullptr;
////	}
////};
//
// //�����˵�ڶ��ַ����Ƚ����m+n�ĳ����ǹ̶��ģ���ô��������˫ָ�룬ָ���ڱ������˵�һ������֮����ת���ڶ���������б���
//  //����֤�����������ཻ���ֵ�������˵����m+nʱ��������ʹ������������ʵĵ�ַ��ͬ
//class Solution {
//public:
//	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//		ListNode *pa = headA;
//		ListNode *pb = headB;
//
//		while (pa!=nullptr||pb!=nullptr)
//		{
//			if (pa != nullptr) {
//				if (pa == pb) return pa;
//				else pa = pa->next;
//			}
//			else
//			{
//				pa = headB;
//			}
//			if (pb != nullptr) {
//				pb = pb->next;
//			}
//			else
//			{
//				pb = headA;
//			}
//		}
//		return nullptr;
//	}
//  };
//
///*************************main���� �������*****************************/
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
//
//int main() {
//	//��������
//	vector<int> nums1 = { 4,1,8,4,5 };
//	vector<int> nums2 = { 5,0,1,8,4,5 };
//	ListNode *head1 = createList(nums1);
//	ListNode *head2 = createList(nums2);
//	Solution S;
//	S.getIntersectionNode(head1, head2);
//
//	system("pause");
//	return 0;
//}