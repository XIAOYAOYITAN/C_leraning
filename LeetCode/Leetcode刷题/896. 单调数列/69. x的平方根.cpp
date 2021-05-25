//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////最粗暴的就是遍历0到x，找到n，其中n^2<x，（n+1）^2>x,优化的话，使用二分法
////二分法的具体实现上出现了很多问题啊，首先，返回值不一定是mid，l，r中的一个，最好用一个变量单独维护
////另外，l和r的更新粗犷一点，不然很容易卡死
////再多做几道二分法吧
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