//
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
///*************************实现函数*****************************/
////思考，先暴力吧，我觉得是求平方根之后的简化，先求出c的平方根，然后一次遍历，能取到整数，就是结束
//class Solution {
//public:
//	bool judgeSquareSum(long c) {
//		long c_sqrt = sqrt(c);
//		for (long i = 0; i <= c_sqrt; i++)
//		{
//			double j = sqrt(c - i * i);
//			if (j == (int) j)
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//	long in = 2147482647;
//	Solution s1;
//	cout<<s1.judgeSquareSum(in)<<endl;
//
//	system("pause");
//	return 0;
//}