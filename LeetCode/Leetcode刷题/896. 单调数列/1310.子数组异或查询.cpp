///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/xor-queries-of-a-subarray/
//
//2. ԭ��
//1310. ����������ѯ
//��һ������������ arr���ָ���һ����Ӧ�Ĳ�ѯ���� queries������ queries[i] = [Li, Ri]��
//
//����ÿ����ѯ i���������� Li �� Ri �� XOR ֵ���� arr[Li] xor arr[Li+1] xor ... xor arr[Ri]����Ϊ���β�ѯ�Ľ����
//
//������һ������������ѯ queries ���н�������顣
//
//
//
//ʾ�� 1��
//
//���룺arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
//�����[2,7,14,8]
//���ͣ�
//������Ԫ�صĶ����Ʊ�ʾ��ʽ�ǣ�
//1 = 0001
//3 = 0011
//4 = 0100
//8 = 1000
//��ѯ�� XOR ֵΪ��
//[0,1] = 1 xor 3 = 2
//[1,2] = 3 xor 4 = 7
//[0,3] = 1 xor 3 xor 4 xor 8 = 14
//[3,3] = 8
//ʾ�� 2��
//
//���룺arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
//�����[8,0,4,4]
//
//3. ���ࣺ��ѧ�����
//
//4. ����Ҫ�㣺�ִ�һ��������򵥣������ǿ���ֱ���������ģ����ȱ�����Ȼ�����Ż�
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
////�����ⷨ�������һ����������������
//class Solution {
//public:
//	vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//		vector<int> out;
//		for (int i = 0; i < queries.size(); i++) {
//			int out_tmp = 0;
//			for (int j = queries[i][0]; j <= queries[i][1]; j++)
//			{
//				out_tmp ^= arr[j];
//			}
//			out.push_back(out_tmp);
//		}
//		return out;
//	}
//};
//
////�Ż������������Բ�ѯ�Ĺ����У��д������������ظ��ģ������ÿռ任ʱ�䣬ͬʱ��������ǰ׺����
////����[0,left-1]^[left,right]=[0,right]=>[left,right]=[0,left-1]^[0,right]
//class Solution {
//public:
//	vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//		vector<int> xor_pre;
//		vector<int> out;
//		xor_pre.resize(arr.size()+1);
//		xor_pre[0] = 0;
//		for (int i = 1; i <= arr.size(); i++)
//		{
//			xor_pre[i] ^= xor_pre[i - 1] ^ arr[i - 1];
//		}
//		for (int i = 0; i < queries.size(); i++)
//		{
//			int tmp = xor_pre[queries[i][0]] ^ xor_pre[queries[i][1]+1];
//			out.push_back(tmp);
//		}
//		return out;
//	}
//};
//
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> arr = { 1, 3, 4, 8 };
//	vector<vector<int>> queries = {{0,1 }, {1, 2},{0, 3},{3,3} };
//	Solution S;
//	vector<int> out=S.xorQueries(arr, queries);
//	for (auto it : out)
//		cout << it << endl;
//
//	system("pause");
//	return 0;
//}