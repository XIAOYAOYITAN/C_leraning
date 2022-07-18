/********************************************************************
1. ��Ŀ��Դ��

2. ԭ��

3. ���ࣺ

4. ����Ҫ��

**********************************************************************/

/*************************ͷ�ļ�*****************************/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
#include <string>
using namespace std;

/*************************ʵ�ֺ���*****************************/
class Solution {
public:
	string frequencySort(string s) {
		map<char, int> alpa;
		for (auto c : s) {
			alpa[c]++;
		}
		vector<pair<char,int>> vec;
		for (auto it:alpa)
		{
			vec.emplace_back(it);
		}
		sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b) { 
			return a.second > b.second;
		});

		string out;
		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = 0; j < vec[i].second; j++)
			{
				out.push_back(vec[i].first);
			}
		}
		return out;
	}
};

/*************************main���� �������*****************************/
int main() {
	string s = "tree";
	Solution S;
	cout<<S.frequencySort(s);
	
	system("pause");
	return 0;
}