//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <list>
//using namespace std;
//
//////给出一个字符串 s（仅含有小写英文字母和括号）。
////
////请你按照从括号内到外的顺序，逐层反转每对匹配括号中的字符串，并返回最终的结果。
////
////注意，您的结果中 不应 包含任何括号。
////
////
////
////示例 1：
////
////输入：s = "(abcd)"
////输出："dcba"
////示例 2：
////
////输入：s = "(u(love)i)"
////输出："iloveu"
////
////来源：力扣（LeetCode）
////链接：https ://leetcode-cn.com/problems/reverse-substrings-between-each-pair-of-parentheses
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//
////解题思路:用栈解决，先把字符逐个入栈，遇到右括号之后开始出栈，直到左括号
//class Solution {
//public:
//	string reverseParentheses(string s) {
//		stack<char> stk1;
//		list<char> l;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] != ')') stk1.push(s[i]);
//			else
//			{
//				//遇到右括号之后，先把括号间的数取出来，放到list中
//				while (stk1.top() != '(')
//				{
//					l.push_back(stk1.top());
//					stk1.pop();
//				}
//				stk1.pop();
//			
//				//把链表中的数压回堆栈
//				for (auto num : l) {
//					stk1.push(num);
//				}
//				l.clear();
//			}
//		}
//
//		string out;
//		while (!stk1.empty())
//		{
//			out.push_back(stk1.top());
//			stk1.pop();
//		}
//		reverse(out.begin(), out.end());
//		return out;
//	}
//};
//
//int main() {
//	string str1 = "(evol)";
//	Solution s1;
//	string str2 = s1.reverseParentheses(str1);
//	for (auto it : str2)
//	{
//		cout << it;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}