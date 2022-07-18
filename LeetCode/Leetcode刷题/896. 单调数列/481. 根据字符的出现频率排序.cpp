/********************************************************************
1. 题目来源：

2. 原题

3. 归类：

4. 解题要点

**********************************************************************/

/*************************头文件*****************************/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
#include <string>
using namespace std;

/*************************实现函数*****************************/
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

/*************************main函数 输入输出*****************************/
int main() {
	string s = "tree";
	Solution S;
	cout<<S.frequencySort(s);
	
	system("pause");
	return 0;
}