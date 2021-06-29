///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
//
//2. ԭ��
//1239. �����ַ�������󳤶�
//����һ���ַ������� arr���ַ��� s �ǽ� arr ĳһ�������ַ����������õ��ַ�������� s �е�ÿһ���ַ���ֻ���ֹ�һ�Σ���ô������һ�����н⡣
//
//�뷵�����п��н� s ������ȡ�
//
//
//
//ʾ�� 1��
//
//���룺arr = ["un","iq","ue"]
//�����4
//���ͣ����п��ܵĴ�������� "","un","iq","ue","uniq" �� "ique"����󳤶�Ϊ 4��
//ʾ�� 2��
//
//���룺arr = ["cha","r","act","ers"]
//�����6
//���ͣ����ܵĽ���� "chaers" �� "acters"��
//ʾ�� 3��
//
//���룺arr = ["abcdefghijklmnopqrstuvwxyz"]
//�����26
//��ʾ��
//
//1 <= arr.length <= 16
//1 <= arr[i].length <= 26
//arr[i] ��ֻ����СдӢ����ĸ
//
//3. ���ࣺDFS��BFS��
//
//4. ����Ҫ�㣺
//�����¼ӵ�ÿһ����������ѡ���߲�ѡ�Ŀ����ԣ�ѡ��һ�ֿ��ܣ���ѡ����һ�ֿ��ܣ���ͬ��ѡ����ɲ�ͬ�Ľ��
//������DFS����һ��map��¼�Ѿ�ѡ�����ĸ��ÿ���µ��ַ���Ҫ��ӽ�ȥ��ʱ�򣬱Ƚ�һ��.
//
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
//#include <string>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
////��������ö��
//class Solution {
//public:
//	vector<int> memory;
//	int maxLength(vector<string>& arr) {
//		int n = arr.size();
//		string str = {};
//		dfs(arr, str, -1, 0);
//		return *max_element(memory.begin(), memory.end());
//
//	}
//
//	void dfs(vector<string>& arr,string str,int index,int count) {
//		index++;
//		if (index == arr.size()) return;
//		//�µ��ַ�����ѡ
//		if (compare(str, arr[index]) == true) {
//			//ѡ�����
//			str.append(arr[index]);
//			count += arr[index].size();
//			memory.push_back(count);
//			dfs(arr, str, index, count);
//			//����
//			count -= arr[index].size();
//			str=str.substr(0, count);
//			dfs(arr, str, index, count);
//		}
//		else
//		{
//			dfs(arr, str, index, count);
//		}
//	}
//	bool compare(string str1, string str2) {
//		for (auto it:str2)
//		{
//			if (str1.find(it)!= string::npos)
//				return false;
//		}
//		return true;
//	}
//};
//
//
////ԭʼ����
//class Solution {
//public:
//	//���ݣ�iΪindex��m��memory
//	int backtrace(vector<string>& arr, int i, int m) {
//		if (i == arr.size()) {
//			return 0;
//		}
//		int t = m;
//		for (char c : arr[i]) {
//			if (m & (1 << (c - 'a'))) {
//				return backtrace(arr, i + 1, t);//�´�����ѡ
//			}
//			m |= (1 << (c - 'a'));//�´����
//		}
//		int len = arr[i].length();
//		return max(len + backtrace(arr, i + 1, m), backtrace(arr, i + 1, t));//ѡ�����߲�ѡ
//	}
//	int maxLength(vector<string>& arr) {
//		return backtrace(arr, 0, 0);
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector <string> arr = { "cha","r","act","ers" };
//	Solution S;
//	cout<<S.maxLength(arr);
//
//	system("pause");
//	return 0;
//}