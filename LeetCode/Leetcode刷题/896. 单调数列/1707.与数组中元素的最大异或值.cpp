///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/maximum-xor-with-an-element-from-array/
//
//2. ԭ��
//1707. ��������Ԫ�ص�������ֵ
//����һ���ɷǸ�������ɵ����� nums ������һ����ѯ���� queries ������ queries[i] = [xi, mi] ��
//
//�� i ����ѯ�Ĵ��� xi ���κ� nums �����в����� mi ��Ԫ�ذ�λ���XOR���õ������ֵ�����仰˵������ max(nums[j] XOR xi) ���������� j ������ nums[j] <= mi ����� nums �е�����Ԫ�ض����� mi�����մ𰸾��� -1 ��
//
//����һ���������� answer ��Ϊ��ѯ�Ĵ𰸣����� answer.length == queries.length �� answer[i] �ǵ� i ����ѯ�Ĵ𰸡�
//
//ʾ�� 1��
//
//���룺nums = [0,1,2,3,4], queries = [[3,1],[1,3],[5,6]]
//�����[3,3,7]
//���ͣ�
//1) 0 �� 1 �ǽ��е����������� 1 ��������0 XOR 3 = 3 �� 1 XOR 3 = 2 �������еĸ���ֵ�� 3 ��
//2) 1 XOR 2 = 3.
//3) 5 XOR 2 = 7.
//ʾ�� 2��
//
//���룺nums = [5,2,4,6,6,3], queries = [[12,4],[8,1],[6,3]]
//�����[15,-1,5]
//
//3. ���ࣺ���ǰ׺��
//
//4. ����Ҫ�㣺����Ϊ���ض��뷨��ȥ�������������ȸ�nums��С��������Ȼ����ֲ��ң���������ȡ���е����ֵ��
//�������б�Ҫ�Ż�����������Ƿ�����б�Ҫ������
//
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
//////������Ȼ���ڵ�60�����԰�����ʱ�����ˡ������Ż�
////class Solution {
////public:
////	vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
////		sort(nums.begin(), nums.end(),less<int>());
////		vector<int> out;
////		for (auto query : queries) {
////			auto rightbound=upper_bound(nums.begin(), nums.end(), query[1]);
////			int xor_max= -1;
////			int max_index = 0;
////			for (auto it = nums.begin(); it != rightbound; it++) 
////			{
////				int xor_tmp = query[0] ^ (*it);
////				if (xor_tmp > xor_max) {
////					xor_max = xor_tmp;
////					max_index = it - nums.begin();
////				}
////			}
////			out.push_back(xor_max);
////		}
////		return out;
////	}
////};
//
////˼����ʹ��208. ǰ׺���е��ֵ�����
////���ȣ�����˼��һ������������⣬��ô���������һ����������������������ֵ��
////������������е�������д��Ϊ�����Ʊ�ʾ���������ֵ����У�������;��ǲ������������ȡ�෴��·�����Ӷ��õ�������1
////����ԭ����mi������˳�����У����Ե���ת����˳�����У�Ȼ��һ��һ�����ȥ���γ��ֵ���
////�ֵ�����ʲô���ӵģ����磨25��������=11001���洢��ʽӦ����1 1 0 0 1���������ܾ����������
////��ô������������10^9��Ӧ��С��2^30���ֵ������Ӧ������Ϊ30
//class Solution {
//public:
//	class dictionary{
//	private:
//		vector<dictionary *> childern;
//		const int L = 30;
//	public:
//		dictionary() :childern(2){}
//		//���ֵ��в���һ����
//		void dic_insert(int num) {
//			dictionary *node = this;
//			for (int i =L-1 ; i >=0; i--) {
//				int bit = (num >>i)&1;
//				//ԭ���ڵ㲻���ڣ��ʹ���һ���½ڵ�
//				if (node->childern[bit]==nullptr) {
//					node->childern[bit] = new dictionary();
//				}
//				//�����ڣ�ֱ�ӽ���ԭ�нڵ�
//				node = node->childern[bit];
//			}
//		}
//		//����һ�����������������ֵ��������ֵ
//		//����ѭ�����ж�����Ӧ����������һ���������������2�����ˣ�һ����L=30�ı���������
//		int dic_xor(int num) {
//			dictionary *node = this;
//			int ret = 0;
//			for(int i=L-1;i>=0;i--)
//			{
//				int val = (num >> i) & 1;
//				//����෴����ڣ����෴�㣬���ڲ��о�����ͬ��
//				if (node->childern[val^1] != nullptr) {
//					val ^= 1;
//					ret = ret|(1 << i);
//				}
//				node = node->childern[val];
//			}
//			return ret;
//		}
//
//	};
//	vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
//		int qlength = queries.size();
//		vector<int> out(qlength);
//		dictionary *dic= new dictionary();
//		//����
//		sort(nums.begin(), nums.end(), less<int>());
//		for (int i = 0; i < qlength; i++) {
//			queries[i].push_back(i);
//		}
//		sort(queries.begin(), queries.end(), [](auto &x, auto &y) {return x[1] < y[1]; });
//		int dic_index = 0;
//		//ѭ�������룬Ȼ���������������out
//		for (int i = 0; i < qlength; i++) {
//			while (dic_index < nums.size()&&nums[dic_index]<=queries[i][1])
//			{
//				dic->dic_insert(nums[dic_index]);
//				dic_index++;
//			}
//			if (dic_index == 0) out[queries[i][2]] = -1;
//			else out[queries[i][2]] = dic->dic_xor(queries[i][0]);
//		}
//		return out;
//	}
//};
//
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> nums = { 5,2,4,6,6,3 };
//	vector<vector<int>> queries = { {12, 4},{8, 1},{6, 3} };
//	Solution S;
//	vector<int> out=S.maximizeXor(nums, queries);
//	for (auto it : out)
//	{
//		cout << it << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}