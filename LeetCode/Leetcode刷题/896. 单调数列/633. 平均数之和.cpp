//
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
////˼�����ȱ����ɣ��Ҿ�������ƽ����֮��ļ򻯣������c��ƽ������Ȼ��һ�α�������ȡ�����������ǽ���
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
///*************************main���� �������*****************************/
//
//int main() {
//	long in = 2147482647;
//	Solution s1;
//	cout<<s1.judgeSquareSum(in)<<endl;
//
//	system("pause");
//	return 0;
//}