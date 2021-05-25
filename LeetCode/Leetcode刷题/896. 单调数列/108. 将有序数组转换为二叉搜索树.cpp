///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/
//
//2. ԭ��
//108. ����������ת��Ϊ����������
//����һ���������� nums ������Ԫ���Ѿ��� ���� ���У����㽫��ת��Ϊһ�� �߶�ƽ�� ������������
//
//�߶�ƽ�� ��������һ�����㡸ÿ���ڵ���������������ĸ߶Ȳ�ľ���ֵ������ 1 ���Ķ�������
//
//
//
//ʾ�� 1��
//���룺nums = [-10,-3,0,5,9]
//�����[0,-3,9,-10,null,5]
//���ͣ�[0,-10,5,null,-3,null,9] Ҳ������Ϊ��ȷ�𰸣�
//
//ʾ�� 2��
//���룺nums = [1,3]
//�����[3,1]
//���ͣ�[1,3] �� [3,1] ���Ǹ߶�ƽ�������������
//
//3. ���ࣺdfs
//
//4. ����Ҫ��:�ҵ�vector�м�㣬�����Ϊ���������ұ���Ϊ��������Ȼ��dfs
//��ֹ����Ϊvector.size����=0;
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
//
////  Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
// 
//class Solution {
//public:
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		TreeNode* root = dfs(nums, 0, nums.size() - 1);
//		return root;
//
//	}
//
//	TreeNode* dfs(vector<int>& nums, int left_index, int right_index) {
//		if (left_index > right_index) return nullptr;
//		int mid = (left_index + right_index) / 2;
//		TreeNode* curr = new TreeNode(nums[mid]);
//		curr->left=dfs(nums, left_index, mid-1);
//		curr->right=dfs(nums, mid + 1, right_index);
//		return curr;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> in = { -10,-3,0,5,9 };
//	Solution s1;
//	s1.sortedArrayToBST(in);
//
//	system("pause");
//	return 0;
//}