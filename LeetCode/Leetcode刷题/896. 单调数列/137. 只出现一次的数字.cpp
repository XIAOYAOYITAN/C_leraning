///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/single-number/
//
//2. ԭ�⣺
//
//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
//
//˵����
//
//����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����
//
//ʾ�� 1:
//����: [2,2,1]
//���: 1
//ʾ�� 2:
//
//����: [4,1,2,1,2]
//���: 4
//
//3. ���ࣺ
//
//4. ���ⷽ����
//1. ʹ��set����Ҫ����ռ䣬�¼����Ӷ�O��N�����ռ临�Ӷ�O��N��
//2. ʹ�����򣬲���Ҫ����ռ�
//3. �����������ʣ����������û�뵽
//
//5. ˼·�벽�裺
//
//6. Ҫ���ܽ᣺
//���Ԥ�����������
//1. a^0=a
//2.a^a=0;
//3.�����ɺͽ����
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
////��ʱ9.58%
////�ڴ�5.01%
////����˵�Ǻܲ���
////class Solution {
////public:
////	int singleNumber(vector<int>& nums) {
////		set<int> set;
////		for (int i = 0; i < nums.size(); i++)
////		{
////			if (!set.insert(nums[i]).second) {
////				set.erase(nums[i]);
////			}
////		}
////		return *set.begin();
////	}
////};
//
////�Ż�,ʹ������˼�룬��һ����
////class Solution {
////public:
////	int singleNumber(vector<int>& nums) {
////		int ret = 0;
////		for (int it : nums)
////		{
////			ret = ret ^ it;
////		}
////		return ret;
////
////
////	}
////};
//
////����һ�£��ڶ�����
////����һ���������� nums ����ĳ��Ԫ�ؽ����� һ�� �⣬����ÿ��Ԫ�ض�ǡ���� ���� �������ҳ��������Ǹ�ֻ������һ�ε�Ԫ�ء�
//
////����˼·����ϣ������
///*************************ʵ�ֺ���*****************************/
////class Solution {
////public:
////	int singleNumber(vector<int>& nums) {
////		map<int, int> map;
////		for (int i = 0; i < nums.size(); i++)
////		{
////			int count = 0;
////			if (!map.insert(make_pair(nums[i], count)).second) {
////				map[nums[i]]++;
////			}
////		}
////		for (auto it =map.begin();it!=map.end();it++)
////		{
////			if (it->second==0) return it->first;
////		}
////		return INT_MIN;
////	}
////};
////��������
//class Solution {
//public:
//	int singleNumber(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		for (int i = 2; i < nums.size(); i=i+3) {
//			if (!(nums[i] == nums[i - 1] && nums[i - 1] == nums[i - 2])) {
//				return nums[i] ^ nums[i - 1] ^ nums[i - 2];
//			}
//		}
//		return nums[nums.size()-1];
//
//	}
//};
//
//
//
///*************************main���� �������*****************************/
//
//int main() {
//	vector<int> v = { 2,2,3,2 };
//	Solution s1;
//	cout<<s1.singleNumber(v)<<endl;
//
//	system("pause");
//	return 0;
//}