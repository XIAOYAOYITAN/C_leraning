////传送带上的包裹必须在 D 天内从一个港口运送到另一个港口。
////
////传送带上的第 i 个包裹的重量为 weights[i]。每一天，我们都会按给出重量的顺序往传送带上装载包裹。我们装载的重量不会超过船的最大运载重量。
////
////返回能在 D 天内将传送带上的所有包裹送达的船的最低运载能力。
////
////
////
////示例 1：
////
////输入：weights = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], D = 5
////输出：15
////解释：
////船舶最低载重 15 就能够在 5 天内送达所有包裹，如下所示：
////第 1 天：1, 2, 3, 4, 5
////第 2 天：6, 7
////第 3 天：8
////第 4 天：9
////第 5 天：10
////
////请注意，货物必须按照给定的顺序装运，因此使用载重能力为 14 的船舶并将包装分成(2, 3, 4, 5), (1, 6, 7), (8), (9), (10) 是不允许的。
////
////来源：力扣（LeetCode）
////链接：https ://leetcode-cn.com/problems/capacity-to-ship-packages-within-d-days
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <numeric>
//using namespace std;
//
//
//////暴力解法
////class Solution {
////public:
////	int shipWithinDays(vector<int>& weights, int D) {
////		int sum=accumulate(weights.begin(), weights.end(),0);
////		int avg = sum / D;
////		int ini = max(*max_element(weights.begin(), weights.end()),avg);
////		while (BoardCal(weights, ini) > D)
////		{
////			ini++;
////		}
////		return ini;
////
////	}
////	//计算用用一艘船载货量为ini的船，需要多少天搬完
////	int BoardCal(vector<int> &weight, int ini) {
////		int count = 0;
////		int sum = 0;
////		for (int i = 0; i < weight.size(); )
////		{
////			if (sum <= ini) {
////				sum = sum + weight[i];
////				i++;
////			}
////			else
////			{
////				sum = 0;
////				i--;
////				count++;
////			}
////		}
////		count++;//最后一个框里装了剩下的东西
////		if (sum > ini)(count++);//筐里装不下，还得再添一个框
////		return count;
////	}
////};
//
////二分解法，考虑到载货量的取值范围是确定的，判断条件也是确定的，可以用二分取代遍历
////暴力解法
//class Solution {
//public:
//	int shipWithinDays(vector<int>& weights, int D) {
//		int sum=accumulate(weights.begin(), weights.end(),0);
//		int avg = sum / D;
//		int ini = max(*max_element(weights.begin(), weights.end()),avg);
//		int l = ini;
//		int r = sum;
//		int currload=0;
//		//二分法
//		while (l<r)
//		{
//			currload = (l+r) / 2;
//			if (BoardCal(weights,currload,D))//符和条件
//			{
//				r= currload;
//			}
//			else  //currload 太大了
//			{
//				l = currload+1;
//			}
//		}
//		return r;
//
//	}
//	//计算用用一艘船载货量为ini的船，需要多少天搬完
//	bool BoardCal(vector<int> &weight, int ini,int D) {
//		int count = 0;
//		int sum = 0;
//		for (int i = 0; i < weight.size(); )
//		{
//			if (sum <= ini) {
//				sum = sum + weight[i];
//				i++;
//			}
//			else
//			{
//				sum = 0;
//				i--;
//				count++;
//			}
//		}
//		count++;//最后一个框里装了剩下的东西
//		if (sum > ini)(count++);//筐里装不下，还得再添一个框
//		return count<=D; //能装得下
//	}
//};
//
//
//
//
//int main() {
//	vector<int> weights = { 3,2,2,4,1,4 };
//	int D = 3;
//	Solution s1;
//	cout<<s1.shipWithinDays(weights, D)<<endl;
//
//	system("pause");
//	return 0;
//}