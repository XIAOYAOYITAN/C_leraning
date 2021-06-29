///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/chalkboard-xor-game/
//
//2. 原题
//810. 黑板异或游戏
//黑板上写着一个非负整数数组 nums[i] 。Alice 和 Bob 轮流从黑板上擦掉一个数字，Alice 先手。
//如果擦除一个数字后，剩余的所有数字按位异或运算得出的结果等于 0 的话，当前玩家游戏失败。 
//(另外，如果只剩一个数字，按位异或运算得到它本身；如果无数字剩余，按位异或运算结果为 0。）
//
//换种说法就是，轮到某个玩家时，如果当前黑板上所有数字按位异或运算结果等于 0，这个玩家获胜。
//
//假设两个玩家每步都使用最优解，当且仅当 Alice 获胜时返回 true。
//
//
//
//示例：
//
//输入: nums = [1, 1, 2]
//输出: false
//解释:
//Alice 有两个选择: 擦掉数字 1 或 2。
//如果擦掉 1, 数组变成 [1, 2]。剩余数字按位异或得到 1 XOR 2 = 3。那么 Bob 可以擦掉任意数字，
//因为 Alice 会成为擦掉最后一个数字的人，她总是会输。
//如果 Alice 擦掉 2，那么数组变成[1, 1]。剩余数字按位异或得到 1 XOR 1 = 0。Alice 仍然会输掉游戏。
//
//3. 归类：异或,纯数学
//
//4. 解题要点：通过数学推理，证明石子是偶数的时候，先手必胜
//证明过程:
//  当前数字个数为偶数，且异或和不为0，Alice擦掉一个数后异或和为0，则Alice失败，我们来证明这是不可能的
//  首先：nums[0]^nums^[1]^......nums[n-1] !=0; 也就是S！=0
//  擦掉一个数以后等于0，我们记作 Si=0；
//  也就是 Si*nums[i]=S;
//  Si=S*nums[i];
//  把0到n-1每个Si乘起来
//  则(S*S*S....)*(num[0]*nums[1]*nums[2]...nums[n-1])=S=0
//  这和题设中S!=0矛盾，
//  所以只要是偶数，ALICE作为先手就一定能赢
//  如果是奇数，Bob后手就一定能赢
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
//#include <unordered_map>
//using namespace std;
//
///*************************实现函数*****************************/
//
////这道题的解法是数学题，通过奇偶性的判断来解这道题。
////Alice先手必胜的条件有以下两个，满足其中一个即可
////1. 当前石子是偶数
////2. 当前异或和为0
//class Solution {
//public:
//	bool xorGame(vector<int>& nums) {
//		if (nums.size() % 2 == 0) {
//			return true;
//		}
//		int xorsum = 0;
//		for (int num : nums) {
//			xorsum ^= num;
//		}
//		return xorsum == 0;
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> nums = { 0,0,1 };
//	Solution S;
//	cout<<S.xorGame(nums)<<endl;
//
//	system("pause");
//	return 0;
//}