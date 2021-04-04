//#include <iostream>
//#include <vector>
//#include <List>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int maxEnvelopes(vector<vector<int>>& envelopes) {
//		sort(envelopes);
//		int size = envelopes.size();
//		vector<vector<int>>::iterator w= envelopes.begin();
//		int count=1;
//		vector<int> htmp=*w;
//
//		for (int i = 1; i < size; i++)
//		{
//			vector<int> htmp2 = *(w + i);
//			if (htmp.front()<htmp2.front()&&htmp.back()<htmp2.back())
//			{
//				htmp = htmp2;
//				count++;
//			}
//		}
//		return count;
//
//	}
//
//	//自定义二维数组冒泡排序，先第一个数由小到大排序，若第一个数相等，第二个数由小到大排序
//	void sort(vector<vector<int>>& envelopes) {
//		vector<vector<int>>::iterator w;
//		int size = envelopes.size();
//
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = size -1; j > i; j--)//这里是大于0还是大于i?
//			{
//				w = envelopes.begin();
//				vector<int> *h1 = &(*(w + j));//
//				vector<int> *h2 = &(*(w + j - 1));
//				if (h1->front() < h2->front()) //先第一个数由小到大排序
//				{
//					h1->swap(*h2);
//				}
//				if (h1->front()==h2->front())//若第一个数相等，第二个数由小到大排序
//				{
//					if (h1->back() < h2->back()) {
//						h1->swap(*h2);
//					}
//				}
//			}
//		}
//	}
//};
//
//int main() {
//
//	vector<vector<int>> en = {{2, 100},{3, 200},{4, 300},{5, 500},{5, 400},{5, 250},{6, 370},{6, 360},{7, 380}};
//
//
//	Solution s1;
//	cout << s1.maxEnvelopes(en) << endl;
//	system("pause");
//	return 0;
//}