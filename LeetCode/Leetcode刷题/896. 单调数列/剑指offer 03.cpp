//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//
////1.����һ��ʹ�����������Զ�����Ȼ�����
////�ŵ������������ף��ȽϺ�ʵ��,ȱ����Ч�ʵͣ����Ӷ�O��N��
//class Solution1 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		multiset<int> s1;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			s1.insert(nums[i]);
//		}
//		auto it = s1.begin();
//		for ( ; it !=s1.end(); )
//		{
//			int temp1 = (*it);
//			int temp2 = *(++it);
//			if (temp1==temp2) {
//				return temp1;
//			}
//		}
//		return -1;
//	}
//};
//
////��������ʹ��ð�����򣬱�������ж�,���Ӷ�O��N^2��
//class Solution2 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//
//		//ð������
//		for (int j = nums.size() - 1; j >= 0; j--)
//		{
//			for (int i = 0; i < j; i++)
//			{
//				if (nums[i] == nums[i + 1]) return nums[i];
//				if (nums[i] > nums[i + 1]) {
//					int temp = nums[i];
//					nums[i] = nums[i + 1];
//					nums[i + 1] = temp;
//				}
//			}
//		}
//		return -1;
//
//	}
//};
//
////������,��������set��������
//class Solution3 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		set<int> s1;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			pair<set<int>::iterator,bool> ret=s1.insert(nums[i]);
//			if (!ret.second) return nums[i];
//		}
//		return -1;
//	}
//};
//
//
////�������⣺����Ϊ n ������ nums ����������ֶ��� 0��n-1 �ķ�Χ
////���ԣ����û���ظ�������֮��Ӧ����һ���ܲ�һ���ӣ�ʹ��ԭ���û�˼��
////i�ſӾ���Ҫi���ܲ�
//class Solution4 {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		for (int i = 0; i < nums.size(); i++)
//		{
//			while (nums[i] != i) {
//				//i�ſӰ��Լ���Ҫ���ܲ�����Ӧ�Ŀ�
//
//				if (nums[nums[i]] == nums[i])
//				{
//					return nums[i];
//				}
//
//				int temp = nums[i];
//				nums[i] = nums[nums[i]];
//				nums[temp] = temp;
//
//			}
//		}
//		return -1;
//	}
//};
//
//
//
//int main() {
//	vector<int> v1 = { 3,1,2,3 };
//	Solution4 s2;
//	cout<<s2.findRepeatNumber(v1);
//
//	system("pause");
//	return 0;
//}