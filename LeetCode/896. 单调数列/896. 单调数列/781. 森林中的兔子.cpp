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
//			if (it==Rabbits.end())  //û�ҵ�
//			{
//				pair<int, int> p = make_pair(answers[i], answers[i]);
//				Rabbits.insert(p);
//			}
//			else    //�ҵ���
//			{
//				it->second--;
//				if (it->second<0) //����֮�󣬴���һ���¶ԣ�����������Ҫɾ���������ܱ�������Ȼ�´β��һ������
//				{
//					sum = sum + it->first + 1;
//					Rabbits.erase(it);
//					pair<int, int> p = make_pair(answers[i], answers[i]);
//					Rabbits.insert(p);
//				}
//			}
//		}
//		//ѭ������֮�󣬰Ѽ�ֵ������ļ�ֵ����
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
//		sort(answers.begin(), answers.end());//�����Ÿ���
//		int n = answers.size();
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			int cnt = answers[i];
//			ans += cnt + 1;
//			// ��������ֵ cnt������� cnt ������ֵ cnt��
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
//		vector<int> counts(N, 0);//��ʼ�� 1009��0,
//		for (auto i : answers)//C++ 11�������ԣ�����answer����
//			counts[i]++;//count�������ӵļ������������index��Ϊ���������ֵ��Ϊֵ
//		int ans = counts[0];
//		//��ֵͳ�ƣ������㷨Ϊ�ٽ�
//		for (int i = 1; i < N; i++) {
//			int per = i + 1;//2
//			int cnt = counts[i];//��1��������Ŀ
//			int k = cnt / per;//��1�����ӵ���ɫ������
//			if (k * per < cnt) k++;//����0
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