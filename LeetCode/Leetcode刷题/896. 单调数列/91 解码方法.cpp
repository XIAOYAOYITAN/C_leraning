//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////class Solution {
////public:
////	int numDecodings(string s) {
////		int n = s.size();
////		if (s.size() == 0) return 0;
////		if (s[0] == '0') return 0;
////		if (s.size() == 1) return 1;
////
////		vector<int> sum_key;
////		sum_key.resize(n);
////
////		//递推初始化，求数组的前两个值
////		sum_key[0] = 1;
////		if (s[1] == '0')
////		{
////			if (s[0] == '1' || s[0] == '2')  sum_key[1] = sum_key[0];
////			else return 0;
////		}
////		else {
////			int num = (s[0] - '0') * 10 + s[1] - '0';
////			if (num >= 11 && num <= 26) sum_key[1] = 2;
////			else sum_key[1] = 1;
////		}
////
////		//新插入一个数的情况下，递推
////		for (int i = 2; i < n; i++)
////		{
////			if (s[i] == '0')
////			{
////				if (s[i - 1] == '1' || s[i - 1] == '2')  sum_key[i] = sum_key[i - 2];
////				else return 0;
////			}
////			else
////			{
////				int num = (s[i - 1] - '0') * 10 + s[i] - '0';
////				if (num >= 11 && num <= 26)  sum_key[i] = sum_key[i - 1] + sum_key[i - 2];
////				else sum_key[i] = sum_key[i - 1];
////			}
////		}
////		return sum_key[n - 1];
////	}
////};
//
//
////更简单的想法
//class Solution {
//public:
//	int numDecodings(string s) {
//		int n = s.size();
//		vector<int> f(n + 1);
//		f[0] = 1;
//		for (int i = 1; i <= n; ++i) {//当前字符是i-1；
//			if (s[i - 1] != '0') { //当前字符不等于0时
//				f[i] += f[i - 1];
//			}
//			if (i > 1 && s[i - 2] != '0' && ((s[i - 2] - '0') * 10 + (s[i - 1] - '0') <= 26)) {//当前字符和前面的字符组成字母时
//				f[i] += f[i - 2];
//			}
//		}
//		return f[n];
//	}
//};
//
//int main() {
//	string s1 = "1221";
//	Solution slo;
//	cout<<slo.numDecodings(s1)<<endl;
//
//	system("pause");
//	return 0;
//}