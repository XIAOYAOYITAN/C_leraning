//#include <iostream>
//#include <stack>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	string s="(i(love)u)";
//	//getline(cin, s);
//	int n = s.size();//�ַ���
//	deque<char> stk;
//	//��ѭ��������stringÿһ����
//	//˼����ʹ�ö�ջ��������������ջ�����������ų�ջ,��ջ�����ݲ�ɾ�����浽һ����ʱ������浽ǰһ�������ţ���������ջ��ɾ�����ţ�����
//	for (int i = 0; i < n; i++) {
//		if (s[i] == ')') {
//			deque<char> tmp;
//			while (stk.back() != '(') {
//				tmp.push_back(stk.back());
//				stk.pop_back();
//			}
//			stk.pop_back();//������(��
//			//�Ѵ洢�������е���ĸѹ�ض�ջ
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