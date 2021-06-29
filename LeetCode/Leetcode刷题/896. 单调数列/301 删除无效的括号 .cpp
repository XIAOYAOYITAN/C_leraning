///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/remove-invalid-parentheses/
//
//2. ԭ�⣺
//����һ�����������ź���ĸ��ɵ��ַ��� s ��ɾ����С��������Ч���ţ�ʹ��������ַ�����Ч��
//�������п��ܵĽ�����𰸿��԰� ����˳�� ���ء�
//ʾ�� 1:
//
//����: "()())()"
//���: ["()()()", "(())()"]
//ʾ�� 2:
//
//����: "(a)())()"
//���: ["(a)()()", "(a())()"]
//ʾ�� 3:
//
//����: ")("
//���: [""]
//
//3. ���ࣺdfs,����
//
//4. ����Ҫ�㣺�жϵ�ǰ����µĲ�ͬѡ���֧����������ȵݹ�,�Ե�ǰ������ж��Ǳ�������Ҫ�ĵط�
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <string>
//#include <list>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	unordered_set<string> out;//���ظ��������ʹ��setȥ����ͻ��
//	vector<string> removeInvalidParentheses(string s) {
//		int count_left = 0;//����ġ�����
//		int count_right = 0;//����ġ�����
//		getspare(s, count_left, count_right);
//		string path ;
//		dfs(path,0, s, 0, count_left, count_right);
//
//		vector<string> ret;
//		for (auto it:out)
//		{
//			ret.push_back(it);
//		}
//
//		return ret;
//
//	}
//	//������ȱ�������¼����·���Ͼ������ַ�����󱣴浽set��
//	//������path��¼����������·����cur��·����ĩ��index
//	//      s�����������,index��¼������λ��
//	//      left_count��right_count��¼ʣ��Ķ���������Ŀ
//	void dfs(string path,int cur,const string& s, int index, int left_count, int right_count) {
//	
//		//��ֹ������left_count��right_count������0,��ʣ�²��ֵ��ַ����ŵ��Ѿ���¼��path��ֱ�Ӹ���set
//		if (left_count == 0 && right_count == 0) {
//			string tmp = path.substr(0, cur) + s.substr(index, s.size());
//			int l = 0, r = 0;
//			getspare(tmp,l,r);
//			if (l==0&&r==0)
//			{
//				out.insert(tmp);
//			}
//			return;
//		}
//		if (index==s.size()||cur>=s.size())
//		{
//			return;
//		}
//		if (s[index] == '(') //�������������,����ɾ����Ҳ���Բ�ɾ����ɾ��������£�left_count-1
//		{
//			path.push_back('(');
//			dfs(path,cur+1, s, index+1, left_count, right_count);
//			if (left_count>0)
//			{
//				path.pop_back();
//				dfs(path,cur,s, index+1, left_count-1, right_count);
//			}
//		}
//		else if (s[index] == ')')
//		{
//			path.push_back(')');
//			dfs(path, cur + 1, s, index + 1, left_count, right_count);
//			if (right_count > 0)
//			{
//				path.pop_back();
//				dfs(path, cur , s, index + 1, left_count, right_count-1);
//			}
//		}
//		else
//		{
//			path.push_back(s[index]);
//			dfs(path, cur + 1, s, index + 1, left_count, right_count);
//		}
//	}
//
//	//�������ġ�(���͡���������
//	void getspare(const string &s, int& left_count, int &right_count) {
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (s[i]=='(')
//			{
//				left_count++;
//			}
//			else if(s[i]==')')
//			{
//				if (left_count>0)
//				{
//					left_count--;
//				}
//				else
//				{
//					right_count++;
//				}
//			}
//		}
//	}
//};
///*************************main���� �������*****************************/
//
//int main() {
//	string s1 = ")d))";
//	Solution slo;
//	vector<string> out=slo.removeInvalidParentheses(s1);
//	for (auto it : out) {
//		cout << it << endl;
//	}
//
//	system("pause");
//	return 0;
//}