//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////��ֱ��ľ��Ǳ���0��x���ҵ�n������n^2<x����n+1��^2>x,�Ż��Ļ���ʹ�ö��ַ�
////���ַ��ľ���ʵ���ϳ����˺ܶ����Ⱑ�����ȣ�����ֵ��һ����mid��l��r�е�һ���������һ����������ά��
////���⣬l��r�ĸ��´���һ�㣬��Ȼ�����׿���
////�ٶ����������ַ���
//class solution {
//public:
//	int mysqrt(int x) {
//		int l = 0;
//		int r = x ;
//		int ans = 0;
//		while (l<=r)
//		{
//			int mid = (l + r) / 2;
//				if (mid*mid <= x) {
//					ans = mid;
//					l = mid+1;
//				}
//				else
//				{
//					r = mid-1 ;
//				}	
//		}
//		return ans;
//	}
//};
//
//int main() {
//	int x = 5;
//	solution s1;
//	cout<<s1.mysqrt(x)<<endl;
//
//	system("pause");
//	return 0;
//}