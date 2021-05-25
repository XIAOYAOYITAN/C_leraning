///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/top-k-frequent-words/
//
//2. 原题
//692. 前K个高频单词
//给一非空的单词列表，返回前 k 个出现次数最多的单词。
//
//返回的答案应该按单词出现频率由高到低排序。如果不同的单词有相同出现频率，按字母顺序排序。
//
//示例 1：
//
//输入: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
//输出: ["i", "love"]
//解析: "i" 和 "love" 为出现次数最多的两个单词，均为2次。
//	注意，按字母顺序 "i" 在 "love" 之前。
//
//
//示例 2：
//
//输入: ["the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"], k = 4
//输出: ["the", "is", "sunny", "day"]
//解析: "the", "is", "sunny" 和 "day" 是出现次数最多的四个单词，
//	出现次数依次为 4, 3, 2 和 1 次。
//
//
//注意：
//
//假定 k 总为有效值， 1 ≤ k ≤ 集合元素数。
//输入的单词均由小写字母组成。
//
//
//扩展练习：
//
//尝试以 O(n log k) 时间复杂度和 O(n) 空间复杂度解决。
//
//3. 归类：哈希表 频次排序
//
//4. 解题要点：先建立一张哈希表（unordered_map），第一项是单词，第二项是频次，然后根据频次排序，最后比较k之后输出来
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
//#include <unordered_map>
//#include <string>
//using namespace std;
//
///*************************实现函数*****************************/
//
////我觉得自己的代码是可以的，本地IDE输出结果是i LOVE,但是在leetcode上是love i，很奇怪！
//class Solution {
//public:
//	//static bool mycomp(const pair<string, int> p1, const pair<string, int> p2) {
//	//	return (p1.second > p2.second);
//	//}
//	class mycomp {
//	public:
//		bool operator()(const pair<string, int>&p1, const pair<string, int>&p2) {
//			if (p1.second != p2.second) return p1.second > p2.second;
//			else return p1.second < p2.second;
//		}
//	};
//
//	vector<string> topKFrequent(vector<string>& words, int k) {
//		unordered_map<string,int> map;
//		for (string &word : words) map[word]++;
//		//对map使用value进行排序，先存到vector<pair>里面，然后用sort排序
//		vector<pair<string, int>> v(map.begin(),map.end());
//		sort(v.begin(), v.end(), mycomp());
//		
//		vector<string> out;
//		for (int i = 0; i < k; i++)
//		{
//			out.push_back(v[i].first);
//		}
//		return out;	
//	}
//};
//
//////官方解法
//struct Cmp {
//	bool operator()(const pair<string, int>& p1, const pair<string, int>& p2) {
//		if (p1.second != p2.second) return p1.second > p2.second;
//		else return p1.first < p2.first;
//	}
//};
//
//class Solution {
//public:
//	vector<string> topKFrequent(vector<string>& words, int k) {
//		unordered_map<string, int> m;
//		for (string& word : words) m[word]++;
//		vector<pair<string, int>> sorted_list(m.begin(), m.end());
//		sort(sorted_list.begin(), sorted_list.end(), Cmp());
//		vector<string> res;
//		for (int i = 0; i < k; i++) res.push_back(sorted_list[i].first);
//		return res;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<string> words = { "i", "love", "leetcode", "i", "love", "coding" };
//	int k = 2;
//	Solution S;
//	vector<string> out= S.topKFrequent(words, k);
//	for (auto it : out) {
//		cout << it << endl;
//	}
//
//	system("pause");
//	return 0;
//}
