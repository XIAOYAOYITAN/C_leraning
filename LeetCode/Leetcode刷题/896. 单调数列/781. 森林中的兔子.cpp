//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//class Solution1 {
//public:
//	int numRabbits(vector<int>& answers) {
//		multimap <int, int> Rabbits;
//		int sum=0;
//		for (int i = 0; i < answers.size(); i++)
//		{
//			auto it = Rabbits.find(answers[i]);
//			if (it==Rabbits.end())  //没找到
//			{
//				pair<int, int> p = make_pair(answers[i], answers[i]);
//				Rabbits.insert(p);
//			}
//			else    //找到了
//			{
//				it->second--;
//				if (it->second<0) //减完之后，创造一个新对，减完的这个对要删除掉，不能保留，不然下次查找会出问题
//				{
//					sum = sum + it->first + 1;
//					Rabbits.erase(it);
//					pair<int, int> p = make_pair(answers[i], answers[i]);
//					Rabbits.insert(p);
//				}
//			}
//		}
//		//循环结束之后，把键值对里面的键值叠加
//		for (multimap <int, int>::iterator it = Rabbits.begin(); it != Rabbits.end(); it++)
//		{
//			sum = sum + it->first + 1;
//		}
//		return sum;
//	}
//};
//
//class Solution2 {
//public:
//	int numRabbits(vector<int>& answers) {
//		sort(answers.begin(), answers.end());//先来排个序
//		int n = answers.size();
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			int cnt = answers[i];
//			ans += cnt + 1;
//			// 跳过「数值 cnt」后面的 cnt 个「数值 cnt」
//			int k = cnt;
//			while (k-- && i + 1 < n && answers[i] == answers[i + 1])
//				i++;
//		}
//		return ans;
//	}
//};
//
//class Solution3 {
//public:
//	static constexpr int N = 1009;
//	int numRabbits(vector<int>& answers) {
//		vector<int> counts(N, 0);//初始化 1009个0,
//		for (auto i : answers)//C++ 11的新特性，遍历answer容器
//			counts[i]++;//count用于兔子的计数，用数组的index作为键，数组的值作为值
//		int ans = counts[0];
//		//数值统计，内在算法为官解
//		for (int i = 1; i < N; i++) {
//			int per = i + 1;//2
//			int cnt = counts[i];//报1的兔子数目
//			int k = cnt / per;//报1的兔子的颜色种类数
//			if (k * per < cnt) k++;//可能0
//			ans += k * per;
//		}
//		return ans;
//	}
//};
//
//
//int main() {
//
//	vector<int> v = {1,1,2 };
//	Solution3 s3;
//	cout<<s2.numRabbits(v)<<endl;
//
//	system("pause");
//
//	return 0;
//}