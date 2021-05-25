///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/maximum-xor-with-an-element-from-array/
//
//2. 原题
//1707. 与数组中元素的最大异或值
//给你一个由非负整数组成的数组 nums 。另有一个查询数组 queries ，其中 queries[i] = [xi, mi] 。
//
//第 i 个查询的答案是 xi 和任何 nums 数组中不超过 mi 的元素按位异或（XOR）得到的最大值。换句话说，答案是 max(nums[j] XOR xi) ，其中所有 j 均满足 nums[j] <= mi 。如果 nums 中的所有元素都大于 mi，最终答案就是 -1 。
//
//返回一个整数数组 answer 作为查询的答案，其中 answer.length == queries.length 且 answer[i] 是第 i 个查询的答案。
//
//示例 1：
//
//输入：nums = [0,1,2,3,4], queries = [[3,1],[1,3],[5,6]]
//输出：[3,3,7]
//解释：
//1) 0 和 1 是仅有的两个不超过 1 的整数。0 XOR 3 = 3 而 1 XOR 3 = 2 。二者中的更大值是 3 。
//2) 1 XOR 2 = 3.
//3) 5 XOR 2 = 7.
//示例 2：
//
//输入：nums = [5,2,4,6,6,3], queries = [[12,4],[8,1],[6,3]]
//输出：[15,-1,5]
//
//3. 归类：异或，前缀和
//
//4. 解题要点：用最为朴素额想法的去看（暴力），先给nums从小到大排序，然后二分查找，再逐个异或，取其中的最大值。
//其中最有必要优化的问题就是是否真的有必要逐个异或？
//
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
///*************************实现函数*****************************/
//////果不其然地在第60个测试案例超时翻车了。尝试优化
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
////思考：使用208. 前缀树中的字典树。
////首先，我们思考一个弱化版的问题，怎么求这个数和一个数组中任意数的异或最大值？
////所有这个数组中的数可以写成为二进制表示，并插入字典树中，最大异或和就是查找这棵树，并取相反的路径，从而得到的最多的1
////由于原题中mi并不是顺序排列，所以得先转换成顺序排列，然后一个一个插进去，形成字典树
////字典树是什么样子的？比如（25）二进制=11001，存储格式应该是1 1 0 0 1，这样才能尽可能找最大，
////那么由于最大的数是10^9，应该小于2^30，字典树深度应当设置为30
//class Solution {
//public:
//	class dictionary{
//	private:
//		vector<dictionary *> childern;
//		const int L = 30;
//	public:
//		dictionary() :childern(2){}
//		//在字典中插入一个数
//		void dic_insert(int num) {
//			dictionary *node = this;
//			for (int i =L-1 ; i >=0; i--) {
//				int bit = (num >>i)&1;
//				//原来节点不存在，就创建一个新节点
//				if (node->childern[bit]==nullptr) {
//					node->childern[bit] = new dictionary();
//				}
//				//若存在，直接进入原有节点
//				node = node->childern[bit];
//			}
//		}
//		//输入一个数，求它和现有字典的异或最大值
//		//结束循环的判断条件应该有两个，一个是输入的数除以2除完了，一个是L=30的遍历结束了
//		int dic_xor(int num) {
//			dictionary *node = this;
//			int ret = 0;
//			for(int i=L-1;i>=0;i--)
//			{
//				int val = (num >> i) & 1;
//				//如果相反点存在，走相反点，是在不行就走相同点
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
//		//排序
//		sort(nums.begin(), nums.end(), less<int>());
//		for (int i = 0; i < qlength; i++) {
//			queries[i].push_back(i);
//		}
//		sort(queries.begin(), queries.end(), [](auto &x, auto &y) {return x[1] < y[1]; });
//		int dic_index = 0;
//		//循环，插入，然后求最大异或，输出到out
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
///*************************main函数 输入输出*****************************/
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