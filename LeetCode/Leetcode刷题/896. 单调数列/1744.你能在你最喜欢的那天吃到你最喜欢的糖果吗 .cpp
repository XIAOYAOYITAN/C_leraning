///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/can-you-eat-your-favorite-candy-on-your-favorite-day/
//
//2. ԭ��
//1744. ����������ϲ��������Ե�����ϲ�����ǹ���
//����һ���±�� 0 ��ʼ������������ candiesCount ������ candiesCount[i] ��ʾ��ӵ�еĵ� i ���ǹ�����Ŀ��ͬʱ����һ����ά���� queries ������ queries[i] = [favoriteTypei, favoriteDayi, dailyCapi] ��
//
//�㰴�����¹������һ����Ϸ��
//
//��ӵ� 0 �쿪ʼ���ǹ���
//���ڳ��� ���� �� i - 1 ���ǹ�֮ǰ������ ���κ�һ�ŵ� i ���ǹ���
//�ڳ��������ǹ�֮ǰ�������ÿ�� ���� �� һ�� �ǹ���
//���㹹��һ������������ answer ������ answer.length == queries.length ��answer[i] Ϊ true �������ǣ���ÿ��� ������ dailyCapi ���ǹ���ǰ���£�������ڵ� favoriteDayi ��Ե��� favoriteTypei ���ǹ������� answer[i] Ϊ false ��ע�⣬ֻҪ�������� 3 �������еĵڶ���������Ϳ�����ͬһ��Բ�ͬ���͵��ǹ���
//
//���㷵�صõ������� answer ��
//
//
//
//ʾ�� 1��
//
//���룺candiesCount = [7,4,5,3,8], queries = [[0,2,2],[4,2,4],[2,13,1000000000]]
//�����[true,false,true]
//��ʾ��
//1- �ڵ� 0 ��� 2 ���ǹ�(���� 0������ 1 ��� 2 ���ǹ������� 0������ 2 ������ԳԵ����� 0 ���ǹ���
//2- ÿ�������� 4 ���ǹ�����ʹ�� 0 ��� 4 ���ǹ������� 0������ 1 ��� 4 ���ǹ������� 0 ������ 1������Ҳû�취�ڵ� 2 ��Ե����� 4 ���ǹ�������֮����û����ÿ��� 4 ���ǹ����������ڵ� 2 ��Ե��� 4 ���ǹ���
//3- �����ÿ��� 1 ���ǹ���������ڵ� 13 ��Ե����� 2 ���ǹ���
//ʾ�� 2��
//
//���룺candiesCount = [5,2,6,4,1], queries = [[3,1,2],[4,10,3],[3,10,100],[4,100,30],[1,3,1]]
//�����[false,true,true,false,false]
//
//3. ���ࣺǰ׺��
//
//4. ����Ҫ�㣺
//�ڵ�i���ܳԵ����ǹ�����һ�����䣬��Ҫ�Ե��ǹ���һ�����䣬������ǿ�������������û�н�����
//����������������[x1,y1],[x2,y2]��ô�ж���������û�н����ļ򵥰취����x1>y2��y1<x2
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
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
//		// ǰ׺��
//			vector<long> candy_perfix(candiesCount.size() + 1);
//		for (int i = 0; i < candiesCount.size(); i++) {
//			candy_perfix[i + 1] = (long)(candy_perfix[i] + candiesCount[i]);
//		}
//
//		vector<bool> result(queries.size());
//		for (int i = 0; i < queries.size(); i++) {
//			long candy_max = (long)queries[i][2] * (queries[i][1]+1);
//			long candy_min = (long)queries[i][1]+1;
//			long favorite_min = candy_perfix[queries[i][0]]+1;
//			long favorite_max = candy_perfix[queries[i][0] + 1];
//
//			if (candy_max<favorite_min || candy_min>favorite_max)
//				result[i] = false;
//			else
//				result[i] = true;
//		}
//		return result;
//	}
//};
///*************************main���� �������*****************************/
//int main() {
//
//	vector<int> candiesCount = { 7, 11, 5, 3, 8 };
//	vector<vector<int>> queries = { {2, 2, 6},{4, 2, 4},{2, 13, 1000000000} };
//	Solution S;
//	vector<bool> rst = S.canEat(candiesCount, queries);
//	for (auto it : rst)
//		cout << it << endl;
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
