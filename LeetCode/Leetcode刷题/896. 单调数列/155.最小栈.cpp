///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/min-stack/
//
//2. ԭ��
//155. ��Сջ
//���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��
//
//push(x) ���� ��Ԫ�� x ����ջ�С�
//pop() ���� ɾ��ջ����Ԫ�ء�
//top() ���� ��ȡջ��Ԫ�ء�
//getMin() ���� ����ջ�е���СԪ�ء�
//
//ʾ��:
//
//���룺
//["MinStack","push","push","push","getMin","pop","top","getMin"]
//[[],[-2],[0],[-3],[],[],[],[]]
//
//�����
//[null,null,null,null,-3,null,0,-2]
//
//���ͣ�
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.getMin();   --> ���� -3.
//minStack.pop();
//minStack.top();      --> ���� 0.
//minStack.getMin();   --> ���� -2.
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
//#include <list>
//#include <stack>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
///**
// * Your MinStack object will be instantiated and called as such:
// * MinStack* obj = new MinStack();
// * obj->push(val);
// * obj->pop();
// * int param_3 = obj->top();
// * int param_4 = obj->getMin();
// */
//class MinStack {
//public:
//	list<int> *curr;
//	int min;
//	/** initialize your data structure here. */
//	MinStack() {
//		curr = new list<int>;
//		min = INT_MAX;
//	}
//
//	void push(int val) {
//		curr->push_back(val);
//		if (min < val) min = val;
//	}
//
//	void pop() {
//		int tmp = curr->back();
//		curr->pop_back();
//		if (tmp == min) {
//			auto min_index = min_element(curr->begin(), curr->end());
//			if (curr->begin()==curr->end()) min = *min_index;
//			else min = INT_MAX;
//		}
//	}
//
//	int top() {
//		return curr->back();
//	}
//
//	int getMin() {
//		return min;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//
//
//	system("pause");
//	return 0;
//}
