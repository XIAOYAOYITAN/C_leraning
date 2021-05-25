///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/palindrome-partitioning/
//
//2. ԭ��
//131. �ָ���Ĵ�
//����һ���ַ��� s�����㽫 s �ָ��һЩ�Ӵ���ʹÿ���Ӵ����� ���Ĵ� ������ s ���п��ܵķָ����
//���Ĵ� �����Ŷ��ͷ��Ŷ���һ�����ַ�����
//ʾ�� 1��
//
//���룺s = "aab"
//�����[["a","a","b"],["aa","b"]]
//ʾ�� 2��
//
//���룺s = "a"
//�����[["a"]]
//
//3. ���ࣺDFS
//
//4. ����Ҫ��:���ϵݹ飬��¼������·��������ǻ��Ŀ���ѡ�������Ҳ����ѡ�����
//s����β��ʱ����ֹ
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
//////�������ˣ�����˫5%�������Ż�
/////*************************ʵ�ֺ���*****************************/
////class Solution {
////public:
////
////	vector<vector<string>> partition(string s) {
////		vector<vector<string>> out;
////		string cur = {};
////		vector<string> path;
////		dfs(path,cur, s,0,out);
////
////		return out;
////
////	}
////	void dfs(vector<string> path, string cur, const string &s,int index, vector<vector<string>> &out) {
////		if (index >= s.length()) {//����ĩβ��û��Ԫ���ݴ�
////			if (cur.size() == 0)
////			{
////				out.push_back(path);
////			}
////			return;
////		}
////		cur.push_back(s[index]);
////		//�ж�cur�Ƿ�Ϊ���ģ��ǻ��Ŀ���ѡ����������߲����
////		if (judge(cur)) {
////			//������ĵݹ�
////			dfs(path, cur, s, index + 1,out);
////
////			path.push_back(cur);//����ĵݹ�
////			cur = {};
////			dfs(path, cur, s, index+1,out);
////		}
////		else //���ǻ��ģ�����dfs
////		{
////			dfs(path, cur, s, index+1,out);
////		}
////
////	}
////
////	bool judge(string s) {
////		int i = 0;
////		int j = s.length()-1;
////		while (i<j)
////		{
////			if (s[i] == s[j]) {
////				i++;
////				j--;
////			}
////			else
////			{
////				return false;
////			}
////		}
////		return true;
////	}
////};
//
////�ٷ��ⷨ����ȫ����dfs������������ҹ��б���������������
//class Solution {
//private:
//	vector<vector<int>> f;
//	vector<vector<string>> ret;
//	vector<string> ans;
//	int n;
//
//public:
//	void dfs(const string& s, int i) {
//		//��ֹ������string�������յ㣬��·���ϵĵ�ȫ���������ս��
//		if (i == n) {
//			ret.push_back(ans);
//			return;
//		}
//		//�ӵ�ǰ�ַ���ʼ���жϻ���
//		for (int j = i; j < n; ++j) {
//			if (f[i][j]) {//�������
//				ans.push_back(s.substr(i, j - i + 1));//��ԭ���Ĵ��н�ȡһ�η���ans��
//				dfs(s, j + 1);//����dfs,�µ���ʼ��Ϊj+1
//				ans.pop_back();//��һ��dfs��������Ҫ����
//			}
//		}
//	}
//	//Ԥ����,��һ�ű�洢���еĻ��Ĵ�����ʶ��Ϊ��ʼ��ͽ�����
//	vector<vector<string>> partition(string s) {
//		n = s.size();
//		f.assign(n, vector<int>(n, true));
//
//		for (int i = n - 1; i >= 0; --i) {
//			for (int j = i + 1; j < n; ++j) {
//				f[i][j] = (s[i] == s[j]) && f[i + 1][j - 1];
//			}
//		}
//
//		dfs(s, 0);
//		return ret;
//	}
//};
//
//
///*************************main���� �������*****************************/
//int main() {
//	string s = "aab";
//	Solution s1;
//	s1.partition(s);
//
//	system("pause");
//	return 0;
//}
