//#include <iostream>
//#include <stack>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	string s="(i(love)u)";
//	//getline(cin, s);
//	int n = s.size();//字符串
//	deque<char> stk;
//	//大循环，遍历string每一个数
//	//思考，使用堆栈，碰到左括号入栈，碰到右括号出栈,出栈的数据不删除，存到一个临时变量里，存到前一个左括号，再依次入栈，删除括号，继续
//	for (int i = 0; i < n; i++) {
//		if (s[i] == ')') {
//			deque<char> tmp;
//			while (stk.back() != '(') {
//				tmp.push_back(stk.back());
//				stk.pop_back();
//			}
//			stk.pop_back();//弹出‘(’
//			//把存储到队列中的字母压回堆栈
//			while (!tmp.empty())
//			{
//				stk.push_back(tmp.front());
//				tmp.pop_front();
//			}
//		}
//		else
//		{
//			stk.push_back(s[i]);
//		}
//	}
//	while (!stk.empty())
//	{
//		cout.put(stk.front());
//		stk.pop_front();
//	}
//}