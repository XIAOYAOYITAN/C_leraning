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
//	string longestPalindrome(string s) {
//		int n = s.size();
//		if (n <= 1) return s;
//		int n1_max=0, index1_max=0;
//		int n2_max=0, index2_max=0;
//		//第一种情况是aba的类型
//		for (int i = 0; i < n-1; i++) {
//			int n1=0;
//			while (s[i - n1] == s[i + n1])
//			{	n1++;
//				if(i-n1<0||i+n1>=n){
//					break;
//				}
//			}
//			if (n1 > n1_max) {
//				n1_max = n1;
//				index1_max = i;
//			}
//			int n2 = 0;
//		//第二种情况是baab的类型
//			while (s[i - n2] == s[i + 1 + n2])
//			{	n2++;
//				if (i-n2<0||(i+1+n2>=n))
//				{
//					break;
//				}
//			}
//			if (n2 > n2_max)
//			{
//				n2_max = n2;
//				index2_max = i;
//			}
//		}
//		string out;
//		if (2*n1_max-1>2*n2_max)
//		{
//			for (int i = index1_max-n1_max+1; i <= index1_max+n1_max-1; i++)
//			{
//				out.push_back(s[i]);
//			}
//		}
//		else
//		{
//			for (int i = index2_max -n2_max+1; i <= index2_max + n2_max ; i++)
//			{
//				out.push_back(s[i]);
//			}
//		}
//		return out;
//	}
//};
//
//int main() {
//	string s = "a";
//	Solution s1;
//	string s2=s1.longestPalindrome(s);
//	for (auto str : s2) cout << str;
//	cout << endl;
//	system("pause");
//	return 0;
//}