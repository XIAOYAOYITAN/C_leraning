///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/top-k-frequent-words/
//
//2. ԭ��
//692. ǰK����Ƶ����
//��һ�ǿյĵ����б�����ǰ k �����ִ������ĵ��ʡ�
//
//���صĴ�Ӧ�ð����ʳ���Ƶ���ɸߵ������������ͬ�ĵ�������ͬ����Ƶ�ʣ�����ĸ˳������
//
//ʾ�� 1��
//
//����: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
//���: ["i", "love"]
//����: "i" �� "love" Ϊ���ִ��������������ʣ���Ϊ2�Ρ�
//	ע�⣬����ĸ˳�� "i" �� "love" ֮ǰ��
//
//
//ʾ�� 2��
//
//����: ["the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"], k = 4
//���: ["the", "is", "sunny", "day"]
//����: "the", "is", "sunny" �� "day" �ǳ��ִ��������ĸ����ʣ�
//	���ִ�������Ϊ 4, 3, 2 �� 1 �Ρ�
//
//
//ע�⣺
//
//�ٶ� k ��Ϊ��Чֵ�� 1 �� k �� ����Ԫ������
//����ĵ��ʾ���Сд��ĸ��ɡ�
//
//
//��չ��ϰ��
//
//������ O(n log k) ʱ�临�ӶȺ� O(n) �ռ临�ӶȽ����
//
//3. ���ࣺ��ϣ�� Ƶ������
//
//4. ����Ҫ�㣺�Ƚ���һ�Ź�ϣ��unordered_map������һ���ǵ��ʣ��ڶ�����Ƶ�Σ�Ȼ�����Ƶ���������Ƚ�k֮�������
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//
////�Ҿ����Լ��Ĵ����ǿ��Եģ�����IDE��������i LOVE,������leetcode����love i������֣�
//class Solution {
//public:
//	//static bool mycomp(const pair<string, int> p1, const pair<string, int> p2) {
//	//	return (p1.second > p2.second);
//	//}
//	class mycomp {
//	public:
//		bool operator()(const pair<string, int>&p1, const pair<string, int>&p2) {
//			if (p1.second != p2.second) return p1.second > p2.second;
//			else return p1.second < p2.second;
//		}
//	};
//
//	vector<string> topKFrequent(vector<string>& words, int k) {
//		unordered_map<string,int> map;
//		for (string &word : words) map[word]++;
//		//��mapʹ��value���������ȴ浽vector<pair>���棬Ȼ����sort����
//		vector<pair<string, int>> v(map.begin(),map.end());
//		sort(v.begin(), v.end(), mycomp());
//		
//		vector<string> out;
//		for (int i = 0; i < k; i++)
//		{
//			out.push_back(v[i].first);
//		}
//		return out;	
//	}
//};
//
//////�ٷ��ⷨ
//struct Cmp {
//	bool operator()(const pair<string, int>& p1, const pair<string, int>& p2) {
//		if (p1.second != p2.second) return p1.second > p2.second;
//		else return p1.first < p2.first;
//	}
//};
//
//class Solution {
//public:
//	vector<string> topKFrequent(vector<string>& words, int k) {
//		unordered_map<string, int> m;
//		for (string& word : words) m[word]++;
//		vector<pair<string, int>> sorted_list(m.begin(), m.end());
//		sort(sorted_list.begin(), sorted_list.end(), Cmp());
//		vector<string> res;
//		for (int i = 0; i < k; i++) res.push_back(sorted_list[i].first);
//		return res;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<string> words = { "i", "love", "leetcode", "i", "love", "coding" };
//	int k = 2;
//	Solution S;
//	vector<string> out= S.topKFrequent(words, k);
//	for (auto it : out) {
//		cout << it << endl;
//	}
//
//	system("pause");
//	return 0;
//}
