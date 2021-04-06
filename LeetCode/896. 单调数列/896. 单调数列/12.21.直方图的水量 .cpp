//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//class Solution {
//public:
//	int trap(vector<int>& height) {
//
//		int sum=0;
//		int highest = -1;
//
//		if (height.empty())
//		{
//			return 0;
//		}
//		//1. 找到最高水水柱
//		stack<int> stk;//记录左边的水区遍历
//		for (int i = 0; i < height.size(); i++)
//		{
//			if (highest <= height[i]) {
//				highest = height[i];
//				stk.push(i);
//			}
//		}
//
//		//2. 向左找到次高水柱，计算水区
//		int h_top = stk.top(); stk.pop();//最高水柱
//		while (!stk.empty())
//		{
//			int h_sec = stk.top(); stk.pop();//次高水柱
//			sum = sum + water_cal(h_sec, h_top, height);
//			h_top = h_sec;
//		}
//
//		//3. 向右找次高水柱，计算水区
//		highest = -1;
//		for (int i = height.size()-1; i >=0; i--)
//		{
//			if (highest < height[i]) {
//				highest = height[i];
//				stk.push(i);
//			}
//		}
//
//		 h_top = stk.top(); stk.pop();//最高水柱
//		while (!stk.empty())
//		{
//			int h_sec = stk.top(); stk.pop();//次高水柱
//			sum = sum + water_cal(h_sec, h_top, height);
//			h_top = h_sec;
//		}
//
//		//4. 加起来
//
//		return sum;
//
//	}
//
//	//h1为次高水柱index，h2为最高水柱index
//	int water_cal(int h1, int h2, vector<int>& height) {
//		int sum = 0;//中间的砖块
//		int water = 0;
//		if (h1 < h2) {
//			for (int i = h1 + 1; i < h2; i++) {
//				sum = sum + height[i];
//			}
//			water = height[h1] * (h2 - h1 - 1) - sum;
//		}
//		if (h1>h2)
//		{
//			for (int i = h2 + 1; i < h1; i++) {
//				sum = sum + height[i];
//			}
//			water = height[h1] * (h1 - h2 - 1) - sum;
//		}
//		return water;
//	}
//};
//
//class Solution2 {
//public:
//	int trap(vector<int>& height) {
//	
//	
//	}
//};
//
//
//int main() {
//
//	vector<int> water = {0};
//	Solution s1;
//	cout<<s1.trap(water)<<endl;
//
//	system("pause");
//	return 0;
//}
