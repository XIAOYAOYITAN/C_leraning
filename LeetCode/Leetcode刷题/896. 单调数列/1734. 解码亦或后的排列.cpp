///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/decode-xored-permutation/
//
//2. 原题
//给你一个整数数组 perm ，它是前 n 个正整数的排列，且 n 是个 奇数 。
//
//它被加密成另一个长度为 n - 1 的整数数组 encoded ，满足 encoded[i] = perm[i] XOR perm[i + 1] 。比方说，如果 perm = [1,3,2] ，那么 encoded = [2,1] 。
//
//给你 encoded 数组，请你返回原始数组 perm 。题目保证答案存在且唯一。
//
// 
//
//示例 1：
//
//输入：encoded = [3,1]
//输出：[1,2,3]
//解释：如果 perm = [1,2,3] ，那么 encoded = [1 XOR 2,2 XOR 3] = [3,1]
//示例 2：
//
//输入：encoded = [6,5,4,6]
//输出：[2,4,1,5,3]
//
//
//3. 归类：数学题，亦或
//
//4. 解题要点：在1720编码亦或后的数组的基础上进行扩展，在不告诉你第一个元素的情况下，怎么得到原数组,
//解题的关键点在于两个条件：1.n是奇数，2.perm是1到n的排列
//想办法得到第一个元素，然后按照1720去解就完事了
//怎么得到第一个元素呢？充分利用两个条件：
//perm是1到n的排列，那么perm元素全部亦或的结果就是1到n亦或的结果
//得到encoded的奇数项亦或的结果，就是perm第二项到第n-1项的亦或结果，进而求出perm[0]
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
//class Solution {
//public:
//	vector<int> decode(vector<int>& encoded) {
//		int xor_n_1 = 0;
//		int xor_n = 0;
//		int n = encoded.size() + 1;
//		vector<int> perm(n);
//		for (int i = 1; i <= encoded.size() - 1; i=i+2) {
//			xor_n_1 = xor_n_1 ^ encoded[i];
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			xor_n = xor_n ^ i;
//		}
//		perm[0] = xor_n ^ xor_n_1;
//		for (int i = 1; i < n; i++)
//		{
//			perm[i] = perm[i - 1] ^ encoded[i - 1];
//		}
//		return perm;
//	}
//};
//
///*************************main函数 输入输出*****************************/
//int main() {
//
//	vector<int> encoded = {6,5,4,6};
//	Solution S1;
//	vector<int> perm=S1.decode(encoded);
//	for (auto it : perm) {
//		cout << it;
//	}
//
//	system("pause");
//	return 0;
//}
//
