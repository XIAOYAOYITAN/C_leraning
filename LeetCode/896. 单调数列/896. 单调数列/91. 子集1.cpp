//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
////�Ƚ��뷨��
////����˼�룬��һ���ǿռ���Ȼ����ϵ�һ��Ԫ�أ��������ټӵڶ���Ԫ�أ����������ϵ�����Ԫ��
//
//class Solution1 {
//public:
//	vector<vector<int>> subsets_all = { {} };
//
//	vector<vector<int>> subsets(vector<int>& nums) {
//		int n = nums.size();
//		//ѭ��n�Σ�ֱ��ÿ��Ԫ�ض������
//		for (int i = 0; i < n; i++) {
//			vector<vector<int>> subsets_old = subsets_all;
//			for (int j = 0; j <subsets_old.size(); j++)
//			{
//				//ԭ�����п���
//				vector<int> tmp_new = subsets_old[j];
//				//��ԭ�����еĻ��������һ���µ���
//				tmp_new.push_back(nums[i]);
//				//���µ�����ӵ��µ��ܼ�
//				subsets_all.push_back(tmp_new);
//			}
//		}
//		return subsets_all;
//	}
//};
//
//class Solution2 {
//public:
//	vector<int> t;//�߹���·��
//	vector<vector<int>> ans;//�ܼ���
//
//	//cur������������λ�ã�nums��δ�߹���·��
//	void dfs(int cur, vector<int>& nums) {
//		//�������������ߵ����һ��ʱ�����߹���·���ŵ��ܼ��У�����
//		if (cur == nums.size()) {
//			ans.push_back(t);
//			return;
//		}
//		//���·��
//		t.push_back(nums[cur]);
//		//�����ߣ�ֱ���ߵ�ͷ
//		dfs(cur + 1, nums);
//		//���ߴ��·�³���
//		t.pop_back();
//		//�����ߣ�ֱ���ߵ�ͷ
//		dfs(cur + 1, nums);
//	}
//
//	vector<vector<int>> subsets(vector<int>& nums) {
//		dfs(0, nums);
//		return ans;
//	}
//};
//
//
//int main(void) {
//
//	vector<int> nums = {1,2,3};
//
//	Solution2 s1;
//
//	s1.subsets(nums);
//
//	system("pause");
//	return 0;
//}