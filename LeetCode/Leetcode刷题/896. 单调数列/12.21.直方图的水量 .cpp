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
//		//1. �ҵ����ˮˮ��
//		stack<int> stk;//��¼��ߵ�ˮ������
//		for (int i = 0; i < height.size(); i++)
//		{
//			if (highest <= height[i]) {
//				highest = height[i];
//				stk.push(i);
//			}
//		}
//
//		//2. �����ҵ��θ�ˮ��������ˮ��
//		int h_top = stk.top(); stk.pop();//���ˮ��
//		while (!stk.empty())
//		{
//			int h_sec = stk.top(); stk.pop();//�θ�ˮ��
//			sum = sum + water_cal(h_sec, h_top, height);
//			h_top = h_sec;
//		}
//
//		//3. �����Ҵθ�ˮ��������ˮ��
//		highest = -1;
//		for (int i = height.size()-1; i >=0; i--)
//		{
//			if (highest < height[i]) {
//				highest = height[i];
//				stk.push(i);
//			}
//		}
//
//		 h_top = stk.top(); stk.pop();//���ˮ��
//		while (!stk.empty())
//		{
//			int h_sec = stk.top(); stk.pop();//�θ�ˮ��
//			sum = sum + water_cal(h_sec, h_top, height);
//			h_top = h_sec;
//		}
//
//		//4. ������
//
//		return sum;
//
//	}
//
//	//h1Ϊ�θ�ˮ��index��h2Ϊ���ˮ��index
//	int water_cal(int h1, int h2, vector<int>& height) {
//		int sum = 0;//�м��ש��
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
