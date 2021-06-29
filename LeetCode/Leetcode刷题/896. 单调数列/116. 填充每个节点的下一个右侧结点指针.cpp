///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node/
//
//2. ԭ��
//116. ���ÿ���ڵ����һ���Ҳ�ڵ�ָ��
//����һ�� ���������� ��������Ҷ�ӽڵ㶼��ͬһ�㣬ÿ�����ڵ㶼�������ӽڵ㡣�������������£�
//
//struct Node {
//  int val;
//  Node *left;
//  Node *right;
//  Node *next;
//}
//�������ÿ�� next ָ�룬�����ָ��ָ������һ���Ҳ�ڵ㡣����Ҳ�����һ���Ҳ�ڵ㣬�� next ָ������Ϊ NULL��
//��ʼ״̬�£����� next ָ�붼������Ϊ NULL��
//���ף�
//��ֻ��ʹ�ó���������ռ䡣
//ʹ�õݹ����Ҳ����Ҫ�󣬱����еݹ����ռ�õ�ջ�ռ䲻��������Ŀռ临�Ӷȡ�
//
//ʾ����
//���룺root = [1,2,3,4,5,6,7]
//�����[1,#,2,3,#,4,5,6,7,#]
//���ͣ�������������ͼ A ��ʾ����ĺ���Ӧ���������ÿ�� next ָ�룬��ָ������һ���Ҳ�ڵ㣬��ͼ B ��ʾ�����л������������������У�ͬһ��ڵ��� next ָ�����ӣ�'#' ��־��ÿһ��Ľ�����
//
//3. ���ࣺ
//
//4. ����Ҫ��
//
//**********************************************************************/
//
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
//// Definition for a Node.
//class Node {
//public:
//	int val;
//	Node* left;
//	Node* right;
//	Node* next;
//
//	Node() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val, Node* _left, Node* _right, Node* _next)
//		: val(_val), left(_left), right(_right), next(_next) {}
//};
//
//Node * CreateTree(vector<int> &in) {
//	int index = 0;
//	int length = in.size();
//	Node * root = new Node(in[index]);
//	index++;
//	deque<Node *> deq;
//	deq.push_back(root);
//	//ѭ������
//	Node * currNode;
//	while (1)
//	{
//		currNode = deq.front();
//		deq.pop_front();
//		if (in[index] != NULL)
//		{
//			currNode->left = new Node(in[index]);
//			deq.push_back(currNode->left);
//		}
//		index++;
//		if (index == length) break;//����֮����һ���жϣ��������in��ĩβ������ѭ��
//
//		if (in[index] != NULL)
//		{
//			currNode->right = new Node(in[index]);
//			deq.push_back(currNode->right);
//		}
//		index++;
//		if (index == length) break;//����֮����һ���жϣ��������in��ĩβ������ѭ��
//	}
//	return root;
//}
//
////�������
//class Solution {
//public:
//	deque<Node *> deq;
//	Node* connect(Node* root) {
//		if (!root) return nullptr;
//		deq.push_back(root);
//		while (!deq.empty()) {
//			int deq_size = deq.size();
//			while (deq_size>0)
//			{
//				Node *curr = deq.front(); deq.pop_front();
//				deq_size--;
//				if (deq_size>0)
//				{
//					curr->next = deq.front();
//				}
//				if (curr->left) deq.push_back(curr->left);
//				if (curr->right) deq.push_back(curr->right);				
//			}
//		}
//		return root;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> in = { 1,2,3,4,5,6,7 };
//	Solution s1;
//	Node* root= CreateTree(in);
//	s1.connect(root);
//
//	system("pause");
//	return 0;
//}
