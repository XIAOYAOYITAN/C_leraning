////����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݡ�ÿ�䷿�ڶ�����һ�����ֽ�Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ������������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ�������
////
////����һ������ÿ�����ݴ�Ž��ķǸ��������飬������ ����������װ�õ������ ��һҹ֮���ܹ�͵�Ե�����߽�
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//#include <unordered_map>
//using namespace std;
////
//////�ռ临�Ӷ�O��N��
////class Solution1 {
////public:
////	int rob(vector<int>& nums) {
////		if (nums.size() == 0) return 0;
////		if (nums.size() == 1) return nums[0];
////		//����
////		vector <int> S;
////		S.resize(nums.size());
////		S[0] = nums[0];
////		S[1] = max(nums[0], nums[1]);
////		for (int i = 2; i < nums.size(); i++)
////		{
////			S[i] = max(S[i-1],S[i-2]+nums[i]);
////		}
////		return S[nums.size()-1];
////	}
////};
////
//////�ռ临�Ӷ�O��1��
////class Solution2 {
////public:
////	int rob(vector<int>& nums) {
////		if (nums.size() == 0) return 0;
////		if (nums.size() == 1) return nums[0];
////		//����
////		int first = nums[0];
////		int second = max(nums[1],nums[0]);
////		for (int i = 2; i < nums.size(); i++)
////		{
////			int tmp;
////			tmp = second;
////			second = max(second,first + nums[i]);
////			first = tmp;
////		}
////		return second;
////	}
////};
//
//////���װ棬����Χ��һ��Ȧ��ͷ��β�����ڵ�
////class Solution {
////public:
////	int rob_old(vector<int>& nums,int begin,int end) {
////		if (begin==end) return nums[begin];
////		//����
////		vector <int> S;
////		S.resize(end-begin+1);
////		S[0] = nums[begin];
////		S[1] = max(nums[begin], nums[begin+1]);
////		for (int i = 2; i <end-begin+1; i++)
////		{
////			S[i] = max(S[i-1],S[i-2]+nums[begin+i]);
////		}
////		return S[end - begin];
////	}
////	int rob(vector<int> &nums) {
////		int n = nums.size();
////		if (nums.size() == 0) return 0;
////		if (nums.size() == 1) return nums[0];
////		int dp=0;
////		dp = max(rob_old(nums, 0, nums.size() - 2), rob_old(nums, 1, nums.size() - 1));
////
////		return dp;
////	};
////
////};
//
////�����װ�
////���ϴδ����һ���ֵ�֮���һȦ���ݺ�С͵�ַ�����һ���µĿ����Եĵ�����
////�������ֻ��һ����ڣ����ǳ�֮Ϊ�������� ���ˡ�����֮�⣬ÿ����������ֻ��һ��������������֮������
////һ�����֮�󣬴�����С͵��ʶ��������ط������з��ݵ�����������һ�ö��������� �������ֱ�������ķ�����ͬһ�����ϱ���٣����ݽ��Զ�������
//
//
// //Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
////��Ҫ�뷨����̬�滮���ҹ��ɣ���
////���ڸ��ڵ㣬�����ֿ��ܣ�ѡ�����߲�ѡ��Ӧ������������
// //���ڸ��ڵ�ѡ������������ӽڵ㲻����ѡ�����СӦ���������ӽڵ㲻��ѡ������µ����ӽڵ����֮��
// //f(o)=val+g(l)+g(r)
// //���ڸ��ڵ㲻ѡ������������ӽڵ㶼����ѡ���߲�ѡ�����СӦ���������ӽڵ�ѡ���߲�ѡ��������ֵ֮�͡�
// //g(o)=max(f(l)+f(l))+max(f(r)+g(r))
//
//class Solution {
//public:
//	unordered_map <TreeNode *, int> f, g;
//	int rob(TreeNode* root) {
//		
//		dfs(root);
//		return max(f[root],g[root]);
//	}
//	
//	//dfs��Ŀ�ģ�������ӽڵ���������͵��ֵ,�Ӹ��ڵ���룬�Ӷ��������Ź�ϣ��
//	void dfs(TreeNode *node) {
//		if (node == nullptr) return;
//		//��͵�󣬺�͵�ɣ�͵��֮����Լ���
//		dfs(node->left);
//		dfs(node->right);
//		f[node] = node->val+g[node->left] + g[node->right];
//		g[node] = max(f[node->left],g[node->left]) + max(f[node->right],g[node->right]);
//	}
//};
//
//int main() {
//	TreeNode *root=&TreeNode(3,&TreeNode(2,nullptr,&TreeNode(3)),&TreeNode(3,nullptr,&TreeNode(1)));
//	Solution s1;
//	cout<<s1.rob(root)<<endl;
//
//	system("pause");
//	return 0;
//}
