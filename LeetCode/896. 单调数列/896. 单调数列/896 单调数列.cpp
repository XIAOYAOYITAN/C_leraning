//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	bool isMonotonic(vector<int>& A) {
//		bool po_flag = true;//正序标志位
//		bool ne_flag = true;//逆序标志位
//		for (int i = 0; i < A.size()-1;i++) {
//
//			if (A[i] < A[i + 1]) {
//				po_flag = false;
//			}
//			if (A[i] > A[i + 1]) {
//				ne_flag = false;
//			}
//		}
//		if (po_flag == true || ne_flag == true) {
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//};
//
//int main() {
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(2);
//
//	Solution s1;
//	cout<<s1.isMonotonic(v);
//
//	system("pause");
//	return 0;
//}