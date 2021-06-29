///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
//
//2. ԭ��
//1442. �γ������������������Ԫ����Ŀ
//����һ���������� arr ��
//
//����Ҫ��������ȡ�����±� i��j �� k ������ (0 <= i < j <= k < arr.length) ��
//
//a �� b �������£�
//
//a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
//b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
//ע�⣺^ ��ʾ ��λ��� ������
//
//�뷵���ܹ��� a == b ��������Ԫ�� (i, j , k) ����Ŀ��
//
//3. ���ࣺ������⣬��ѧ����
//
//4. ����Ҫ�㣺�Ƶ�һ���ҵ�����Ĺؼ�
//a==b ��ζ��i��j-1��������j��k�����ͬ���ȼ��ڣ�0��i-1�����*��0��j-1�������=��0��j-1�����*��0��k�������
//����0��j-1������j��ʵû���ã����õ�ֻ��i-1��k��
//iҪ��1��ʼȡ��i-1����0,��over
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
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//////�Լ���ĵ�һ���ⷨ��ʹ��map�����ظ����ֵļ�¼��
//////��ʱ����35%���ڴ����5%�����Ż���
////class Solution {
////public:
////
////	int cal(const vector<int> &in) {
////		int sum = 0;
////		for (int i = 0; i < in.size(); i++)
////		{
////			for (int j = i + 1; j < in.size(); j++)
////			{
////				sum += in[j] - in[i] - 1;
////			}
////		}
////		return sum;
////	}
////	int countTriplets(vector<int>& arr) {
////		vector<int>  xor_sum(arr.size() + 1, 0);
////		int temp = 0;
////		for (int i = 0; i < arr.size(); i++)
////		{
////			temp = temp ^ arr[i];
////			xor_sum[i + 1] = temp;
////		}
////
////		map<int, vector<int>> map;
////		for (int i = 0; i < xor_sum.size(); i++)
////		{
////			vector<int> tmp;
////			tmp.push_back(i);
////			if (!map.insert(make_pair(xor_sum[i], tmp)).second) {
////				map[xor_sum[i]].push_back(i);
////			}
////		}
////
////		int count = 0;
////		for (auto it : map)
////		{
////			if (it.second.size() > 1) {
////				int temp = cal(it.second);
////				count += temp;
////			}
////		}
////		return count;
////	}
////};
//
////�ⷨ2������ѭ��
//class Solution {
//public:
//	int countTriplets(vector<int>& arr) {
//		vector<int>  xor_sum(arr.size() + 1, 0);
//		int temp = 0;
//		for (int i = 0; i < arr.size(); i++)
//		{
//			temp = temp ^ arr[i];
//			xor_sum[i + 1] = temp;
//		}
//		int sum = 0;
//		for (int i = 0; i < xor_sum.size(); i++)
//		{
//			for (int j = i+1; j < xor_sum.size(); j++)
//			{
//				if (xor_sum[i]==xor_sum[j])
//				{
//					sum += j - i - 1;
//				}
//			}
//		}
//		return sum;
//	}
//};
//
//
//class Solution {
//public:
//	int countTriplets(vector<int> &arr) {
//		int n = arr.size();
//		vector<int> s(n + 1);
//		for (int i = 0; i < n; ++i) {
//			s[i + 1] = s[i] ^ arr[i];
//		}
//		unordered_map<int, int> cnt, total;
//		int ans = 0;
//		for (int k = 0; k < n; ++k) {
//			if (cnt.count(s[k + 1])) {
//				ans += cnt[s[k + 1]] * k - total[s[k + 1]];
//			}
//			++cnt[s[k]];
//			total[s[k]] += k;
//		}
//		return ans;
//	}
//};
//
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> arr = { 1,1,1,1,1 };
//	Solution S;
//	cout<<S.countTriplets(arr)<<endl;
//
//
//	system("pause");
//	return 0;
//}