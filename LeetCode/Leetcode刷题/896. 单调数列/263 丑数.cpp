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
//	bool isUgly(int n) {
//		if (n == 0) return false;
//		while (n % 2 == 0)  n = n / 2;
//		while (n % 3 == 0)  n = n / 3;
//		while (n % 5 == 0)  n = n / 5;
//		if (n == 1) return true;
//		return false;
//
//	}
//};
//
//int main() {
//	Solution s1;
//	cout<<s1.isUgly(14);
//
//	system("pause");
//	return 0;
//}