///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/intersection-of-two-linked-lists/
//
//2. 原题
//160. 相交链表
//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表没有交点，返回 null 。
//图示两个链表在节点 c1 开始相交：
//题目数据 保证 整个链式结构中不存在环。
//
//注意，函数返回结果后，链表必须 保持其原始结构 。
//
//
//示例 1：
//
//输入：intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3
//输出：Intersected at '8'
//解释：相交节点的值为 8 （注意，如果两个链表相交则不能为 0）。
//从各自的表头开始算起，链表 A 为 [4,1,8,4,5]，链表 B 为 [5,0,1,8,4,5]。
//在 A 中，相交节点前有 2 个节点；在 B 中，相交节点前有 3 个节点。
//示例 2：
//
//输入：intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
//输出：Intersected at '2'
//解释：相交节点的值为 2 （注意，如果两个链表相交则不能为 0）。
//从各自的表头开始算起，链表 A 为 [0,9,1,2,4]，链表 B 为 [3,2,4]。
//在 A 中，相交节点前有 3 个节点；在 B 中，相交节点前有 1 个节点。
//示例 3：
//
//
//输入：intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
//输出：null
//解释：从各自的表头开始算起，链表 A 为 [2,6,4]，链表 B 为 [1,5]。
//由于这两个链表不相交，所以 intersectVal 必须为 0，而 skipA 和 skipB 可以是任意值。
//这两个链表不相交，因此返回 null 。
//
//3. 归类：链表
//
//4. 解题要点：我的第一想法是先将两个链表反序，然后从最后的节点开始查找
//但其实这是对题目意思的曲解，所谓相交链表，并不是节点的值一样，而是节点的地址一样
//所以，最简单的想法是遍历第一个链表，放到一个哈希表中，然后遍历第二个链表，每次遍历在哈希表中查找
//找到的时候，说明有链表相交现象。
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
///*************************实现函数*****************************/
//
// //* Definition for singly-linked list.
//  struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
////  //使用哈希表
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
// //相对来说第二种方法比较巧妙，m+n的长度是固定的，那么可以是用双指针，指针在遍历完了第一串链表之后，跳转到第二个链表进行遍历
//  //可以证明，对于有相交部分的链表来说，在m+n时间内总能使得两个链表访问的地址相同
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
///*************************main函数 输入输出*****************************/
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
//	//链表数组
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