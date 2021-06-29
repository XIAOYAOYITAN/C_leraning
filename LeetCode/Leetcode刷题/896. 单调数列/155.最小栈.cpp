///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/min-stack/
//
//2. 原题
//155. 最小栈
//设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
//
//push(x) —— 将元素 x 推入栈中。
//pop() —— 删除栈顶的元素。
//top() —— 获取栈顶元素。
//getMin() —— 检索栈中的最小元素。
//
//示例:
//
//输入：
//["MinStack","push","push","push","getMin","pop","top","getMin"]
//[[],[-2],[0],[-3],[],[],[],[]]
//
//输出：
//[null,null,null,null,-3,null,0,-2]
//
//解释：
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.getMin();   --> 返回 -3.
//minStack.pop();
//minStack.top();      --> 返回 0.
//minStack.getMin();   --> 返回 -2.
//
//3. 归类：
//
//4. 解题要点
//
//**********************************************************************/
//
///*************************头文件*****************************/
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
///*************************实现函数*****************************/
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
///*************************main函数 输入输出*****************************/
//int main() {
//
//
//	system("pause");
//	return 0;
//}
