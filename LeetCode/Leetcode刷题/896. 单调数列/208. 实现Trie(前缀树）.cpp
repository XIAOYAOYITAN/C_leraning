///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/implement-trie-prefix-tree/
//
//2. 原题
//208. 实现 Trie (前缀树)
//Trie（发音类似 "try"）或者说 前缀树 是一种树形数据结构，用于高效地存储和检索字符串数据集中的键。这一数据结构有相当多的应用情景，例如自动补完和拼写检查。
//
//请你实现 Trie 类：
//
//Trie() 初始化前缀树对象。
//void insert(String word) 向前缀树中插入字符串 word 。
//boolean search(String word) 如果字符串 word 在前缀树中，返回 true（即，在检索之前已经插入）；否则，返回 false 。
//boolean startsWith(String prefix) 如果之前已经插入的字符串 word 的前缀之一为 prefix ，返回 true ；否则，返回 false 。
//
//
//示例：
//
//输入
//["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
//[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
//输出
//[null, null, true, false, true, null, true]
//
//解释
//Trie trie = new Trie();
//trie.insert("apple");
//trie.search("apple");   // 返回 True
//trie.search("app");     // 返回 False
//trie.startsWith("app"); // 返回 True
//trie.insert("app");
//trie.search("app");     // 返回 True
//
//3. 归类：自定义数据结构，字典树！
//
//4. 解题要点
//
//**********************************************************************/
//
//
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <string>
//using namespace std;
//
///*************************实现函数*****************************/
///**
// * Your Trie object will be instantiated and called as such:
// /
// * Trie* obj = new Trie();
// * obj->insert(word);
// * bool param_2 = obj->search(word);
// * bool param_3 = obj->startsWith(prefix);
// */
//class Trie {
//private:
//	vector<Trie *> childern;
//	bool is_End;
//	Trie* searchPrefix(string perfix) {
//		Trie *node = this;
//		for (auto each : perfix) {
//			each -= 'a';
//			if (node->childern[each] == nullptr) return nullptr;
//			node = node->childern[each];
//		}
//		return node;
//	}
//public:
//	/** Initialize your data structure here. */
//	Trie() :childern(26), is_End (false){}
//
//
//	/** Inserts a word into the trie. */
//	void insert(string word) {
//		Trie *node = this;
//		for (auto cha : word) {
//			cha -= 'a';
//			if (node->childern[cha] == nullptr) {
//				node->childern[cha] = new Trie();
//			}
//			node = node->childern[cha];
//		}
//		node->is_End = true;
//	}
//
//	/** Returns if the word is in the trie. */
//	bool search(string word) {
//		Trie *node = this;
//		for (auto cha : word) {
//			cha -= 'a';
//			if (node->childern[cha] == nullptr) return false;
//			node = node->childern[cha];
//		}
//		if (node->is_End == true) return true;
//		return false;
//	}
//
//	/** Returns if there is any word in the trie that starts with the given prefix. */
//	bool startsWith(string prefix) {
//		return searchPrefix(prefix)!=nullptr;
//	}
//};
///*************************main函数 输入输出*****************************/
//int main() {
//
//	system("pause");
//	return 0;
//}