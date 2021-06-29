///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
//
//2. 原题
//1239. 串联字符串的最大长度
//给定一个字符串数组 arr，字符串 s 是将 arr 某一子序列字符串连接所得的字符串，如果 s 中的每一个字符都只出现过一次，那么它就是一个可行解。
//
//请返回所有可行解 s 中最长长度。
//
//
//
//示例 1：
//
//输入：arr = ["un","iq","ue"]
//输出：4
//解释：所有可能的串联组合是 "","un","iq","ue","uniq" 和 "ique"，最大长度为 4。
//示例 2：
//
//输入：arr = ["cha","r","act","ers"]
//输出：6
//解释：可能的解答有 "chaers" 和 "acters"。
//示例 3：
//
//输入：arr = ["abcdefghijklmnopqrstuvwxyz"]
//输出：26
//提示：
//
//1 <= arr.length <= 16
//1 <= arr[i].length <= 26
//arr[i] 中只含有小写英文字母
//
//3. 归类：DFS？BFS？
//
//4. 解题要点：
//对于新加的每一个数，都有选或者不选的可能性，选是一种可能，不选是另一种可能，不同而选择造成不同的结果
//尝试用DFS，用一个map记录已经选择的字母，每当新的字符串要添加进去的时候，比较一下.
//
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
//#include <string>
//using namespace std;
//
///*************************实现函数*****************************/
////暴力法，枚举
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
//		//新的字符串可选
//		if (compare(str, arr[index]) == true) {
//			//选择加入
//			str.append(arr[index]);
//			count += arr[index].size();
//			memory.push_back(count);
//			dfs(arr, str, index, count);
//			//回溯
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
////原始回溯
//class Solution {
//public:
//	//回溯，i为index，m是memory
//	int backtrace(vector<string>& arr, int i, int m) {
//		if (i == arr.size()) {
//			return 0;
//		}
//		int t = m;
//		for (char c : arr[i]) {
//			if (m & (1 << (c - 'a'))) {
//				return backtrace(arr, i + 1, t);//新串不可选
//			}
//			m |= (1 << (c - 'a'));//新串添加
//		}
//		int len = arr[i].length();
//		return max(len + backtrace(arr, i + 1, m), backtrace(arr, i + 1, t));//选，或者不选
//	}
//	int maxLength(vector<string>& arr) {
//		return backtrace(arr, 0, 0);
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector <string> arr = { "cha","r","act","ers" };
//	Solution S;
//	cout<<S.maxLength(arr);
//
//	system("pause");
//	return 0;
//}