///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/minimum-number-of-days-to-make-m-bouquets/
//
//2. ԭ��
//1482. ���� m �����������������
//����һ���������� bloomDay���Լ��������� m �� k ��
//
//����Ҫ���� m ��������������ʱ����Ҫʹ�û�԰�� ���ڵ� k �仨 ��
//
//��԰���� n �仨���� i �仨���� bloomDay[i] ʱʢ����ǡ�� �������� һ�� ���С�
//
//���㷵�شӻ�԰��ժ m ������Ҫ�ȴ������ٵ��������������ժ�� m �����򷵻� -1 ��
//
//ʾ�� 1��
//
//���룺bloomDay = [1,10,3,10,2], m = 3, k = 1
//�����3
//���ͣ�������һ��۲�������Ļ������̣�x ��ʾ�������� _ ��ʾ����δ����
//������Ҫ���� 3 ������ÿ��ֻ��Ҫ 1 �䡣
//1 ���[x, _, _, _, _]   // ֻ������ 1 ����
//2 ���[x, _, _, _, x]   // ֻ������ 2 ����
//3 ���[x, _, x, _, x]   // �������� 3 ��������Ϊ 3
//ʾ�� 2��
//
//���룺bloomDay = [1,10,3,10,2], m = 3, k = 2
//�����-1
//���ͣ�Ҫ���� 3 ������ÿ����Ҫ 2 �仨��Ҳ����һ����Ҫ 6 �仨������԰��ֻ�� 5 �仨���޷���������Ҫ�󣬷��� -1 ��
//ʾ�� 3��
//
//���룺bloomDay = [7,7,7,7,12,7,7], m = 2, k = 3
//�����12
//���ͣ�Ҫ���� 2 ������ÿ����Ҫ 3 �䡣
//��԰�� 7 ���� 12 ����������£�
//7 ���[x, x, x, x, _, x, x]
//������ǰ 3 ��ʢ���Ļ�������һ������������ʹ�ú� 3 ��ʢ���Ļ�����Ϊ���ǲ����ڡ�
//12 ���[x, x, x, x, x, x, x]
//��Ȼ�����ǿ����ò�ͬ�ķ�ʽ������������
//ʾ�� 4��
//
//���룺bloomDay = [1000000000,1000000000], m = 1, k = 1
//�����1000000000
//���ͣ���Ҫ�� 1000000000 ����ܲɵ�������������
//ʾ�� 5��
//
//���룺bloomDay = [1,10,2,9,3,8,4,7,5,6], m = 4, k = 2
//�����9
//
//
//��ʾ��
//
//bloomDay.length == n
//1 <= n <= 10^5
//1 <= bloomDay[i] <= 10^9
//1 <= m <= 10^6
//1 <= k <= n
//
//3. ���ࣺ
//
//4. ����Ҫ��
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
//using namespace std;
//
//
//////��ʱ�����ж����Ż�
/////*************************ʵ�ֺ���*****************************/
////class Solution {
////public:
////	int minDays(vector<int>& bloomDay, int m, int k) {
////		if (m*k > bloomDay.size()) return -1;
////		set<int> day_set;
////		for (int i = 0; i < bloomDay.size(); i++) {
////			day_set.insert(bloomDay[i]);
////		}
////		for (auto day : day_set) {
////			if(findgroup(day, bloomDay, m, k)) return day;
////		}
////		return -1;
////	}
////
////	bool findgroup(const int &day,vector<int>& bloomDay, const int &m, const int &k)
////	{
////		int k_tmp = k;
////		int m_tmp = m;
////		for (int i = 0; i < bloomDay.size(); i++) {
////			if (day >= bloomDay[i]) k_tmp--;
////			else k_tmp = k;
////			if (k_tmp == 0) {
////				k_tmp = k;
////				m_tmp--;
////			}
////			if (m_tmp == 0) {
////				return true;
////			}
////		}
////		return false;
////	}
////};
//
////��ʱ�����ж����Ż����ҵ����ֵ���ҵ���Сֵ��Ȼ������ҵ���һ������������ֵ
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	int minDays(vector<int>& bloomDay, int m, int k) {
//		if (m*k > bloomDay.size()) return -1;
//		set<int> day_set;
//		int min = *min_element(bloomDay.begin(), bloomDay.end());
//		int max = *max_element(bloomDay.begin(), bloomDay.end());
//		int ans = 0;
//		while (min<=max)
//		{
//			int mid = (min + max) / 2;
//			if (findgroup(mid, bloomDay, m, k) == false) {
//				min = mid + 1;
//			}
//			else
//			{
//				ans = mid;
//				max = mid - 1;
//			}
//		}
//
//		return ans;
//	}
//
//	bool findgroup(const int &day, vector<int>& bloomDay, const int &m, const int &k)
//	{
//		int k_tmp = k;
//		int m_tmp = m;
//		for (int i = 0; i < bloomDay.size(); i++) {
//			if (day >= bloomDay[i]) k_tmp--;
//			else k_tmp = k;
//			if (k_tmp == 0) {
//				k_tmp = k;
//				m_tmp--;
//			}
//			if (m_tmp == 0) {
//				return true;
//			}
//		}
//		return false;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> bloomDay = { 7,7,7,7,12,7,7 };
//	int m = 2;
//	int k = 3;
//	Solution S1;
//	cout<<S1.minDays(bloomDay, m, k)<<endl;
//
//	system("pause");
//	return 0;
//}