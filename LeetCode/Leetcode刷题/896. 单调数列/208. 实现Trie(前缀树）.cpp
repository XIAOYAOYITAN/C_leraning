///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/implement-trie-prefix-tree/
//
//2. ԭ��
//208. ʵ�� Trie (ǰ׺��)
//Trie���������� "try"������˵ ǰ׺�� ��һ���������ݽṹ�����ڸ�Ч�ش洢�ͼ����ַ������ݼ��еļ�����һ���ݽṹ���൱���Ӧ���龰�������Զ������ƴд��顣
//
//����ʵ�� Trie �ࣺ
//
//Trie() ��ʼ��ǰ׺������
//void insert(String word) ��ǰ׺���в����ַ��� word ��
//boolean search(String word) ����ַ��� word ��ǰ׺���У����� true�������ڼ���֮ǰ�Ѿ����룩�����򣬷��� false ��
//boolean startsWith(String prefix) ���֮ǰ�Ѿ�������ַ��� word ��ǰ׺֮һΪ prefix ������ true �����򣬷��� false ��
//
//
//ʾ����
//
//����
//["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
//[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
//���
//[null, null, true, false, true, null, true]
//
//����
//Trie trie = new Trie();
//trie.insert("apple");
//trie.search("apple");   // ���� True
//trie.search("app");     // ���� False
//trie.startsWith("app"); // ���� True
//trie.insert("app");
//trie.search("app");     // ���� True
//
//3. ���ࣺ�Զ������ݽṹ���ֵ�����
//
//4. ����Ҫ��
//
//**********************************************************************/
//
//
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
///*************************main���� �������*****************************/
//int main() {
//
//	system("pause");
//	return 0;
//}