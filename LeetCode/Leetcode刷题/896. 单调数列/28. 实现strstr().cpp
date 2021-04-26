//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//	int strStr(string haystack, string needle) {
//		if (needle.size()==0) return 0;
//		int j = 0;
//		for (int i = 0; i < haystack.size();i++ )
//		{
//			int tmp = i;
//			while (haystack[tmp]==needle[j])
//			{	
//				tmp++;
//				j++;
//				if (j == needle.size()) return tmp - j ;
//			}
//			j = 0;
//
//		}
//		return -1;
//	}
//};
//



//KMPËã·¨










//int main() {
//
//	string haystack = "mississippi";
//	string needle = "issip";
//	Solution s1;
//	cout<<s1.strStr(haystack, needle)<<endl;
//
//	system("pause");
//	return 0;
//}