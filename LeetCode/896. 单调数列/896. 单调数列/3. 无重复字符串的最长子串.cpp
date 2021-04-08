//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////想法，动态窗口
//class Solution1 {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int windoes_length = 1;
//		int windoes_length_max = 0;
//		int i = 0;
//		//异常情况
//		if (s.size() < 2) return s.size();
//		int sublength;
//		while (i+windoes_length<s.size())
//		{
//			string s_tmp = s.substr(i, windoes_length);//窗内的字符串
//			int pos = i+s_tmp.find(s[i + windoes_length]);
//			if (pos==i+s.npos)//新的字符不在原有子串里，扩大窗的长度，把新的字符包进去
//			{
//				windoes_length++;
//			}
//			else//新的字符在原有串里,找到重复的位置，窗的长度归1，重新计算新的长度
//			{
//				i = pos + 1;
//				windoes_length_max = max(windoes_length,windoes_length_max);
//				windoes_length = 1;
//			}
//		}
//		return max(windoes_length,windoes_length_max);
//	}
//};
//
////滑动窗口
//class Solution2 {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int i = 0;//左指针
//		int j = 1;//右指针
//		int max_length = 0;
//		set<char> set_char;
//		set_char.insert(s[i]);
//		//异常情况
//		if (s.size() < 2) return s.size();
//		while (j < s.size())
//		{
//			while (!set_char.insert(s[j]).second) //插入失败
//			{
//				set_char.erase(s[i]);
//				i++;
//			}
//			//插入成功
//			j++;
//			max_length = max((int)set_char.size(),max_length);
//		}
//		return max_length;
//	}
//};
//
//
//
//int main() {
//	string string1 =  "abcabcbb";
//	Solution2 s1;
//	cout<<s1.lengthOfLongestSubstring(string1);
//
//	system("pause");
//	return 0;
//}