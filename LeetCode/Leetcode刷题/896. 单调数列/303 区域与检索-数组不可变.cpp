/********************************************************************
1. 题目来源：https://leetcode-cn.com/problems/range-sum-query-immutable/

2. 原题
给定一个整数数组  nums，求出数组从索引 i 到 j（i ≤ j）范围内元素的总和，包含 i、j 两点。

实现 NumArray 类：

NumArray(int[] nums) 使用数组 nums 初始化对象
int sumRange(int i, int j) 返回数组 nums 从索引 i 到 j（i ≤ j）范围内元素的总和，包含 i、j 两点（也就是 sum(nums[i], nums[i + 1], ... , nums[j])）
 

示例：

输入：
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
输出：
[null, 1, -1, -3]

解释：
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return 1 ((-2) + 0 + 3)
numArray.sumRange(2, 5); // return -1 (3 + (-5) + 2 + (-1))
numArray.sumRange(0, 5); // return -3 ((-2) + 0 + 3 + (-5) + 2 + (-1))

3. 归类：前缀和 哈希表

4. 解题要点

**********************************************************************/

/*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
/*************************实现函数*****************************/

/*************************main函数 输入输出*****************************/
//int main() {
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include<numeric>
//using namespace std;
//
////暴力求解
////class numarray {
////public:
////	numarray(vector<int>& nums) :m_nums(nums){
////		
////	}
////
////	int sumrange(int i, int j) {
////		int sum=0;
////		for (int k = i; k <= j; k++)
////		{
////			sum = sum + this->m_nums[k];
////
////		}
////		
////		return  sum;
////
////	}
////
////	vector<int>& m_nums;
////};
//
//////使用c++的暴力累加
////class numarray {
////public:
////	numarray(vector<int>& nums) :m_nums(nums) {
////
////	}
////
////	int sumrange(int i, int j) {
////		return accumulate(m_nums.begin() + i, m_nums.begin() + j + 1, 0);
////
////	}
////
////	vector<int>& m_nums;
////};
//
//
////使用前缀和
//class numarray {
//public:
//
//	vector<int> persum;
//
//	numarray(vector<int>& nums) {
//
//		this->persum.resize(nums.size() + 1);
//		for (int i = 0; i < nums.size(); i++) {
//		
//			persum[i + 1] = persum[i] + nums[i];
//		}
//
//	}
//
//	int sumrange(int i, int j) {
//		return persum[j + 1] - persum[i];
//
//	}
//
//};
//
//int main() {
//	
//	vector<int> v1;
//	v1.push_back(-2);
//	v1.push_back(0);
//	v1.push_back(3);
//	v1.push_back(-5);
//	v1.push_back(2);
//	v1.push_back(-1);
//
//	numarray *n1 = new numarray(v1);
//	cout<< n1->sumrange(0, 2);
//
//	system("pause");
//	return 0;
//}
