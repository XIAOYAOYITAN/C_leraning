///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/frog-jump/
//
//2. 原题:
//一只青蛙想要过河。 假定河流被等分为若干个单元格，并且在每一个单元格内都有可能放有一块石子（也有可能没有）。 青蛙可以跳上石子，但是不可以跳入水中。
//给你石子的位置列表 stones（用单元格序号 升序 表示）， 请判定青蛙能否成功过河（即能否在最后一步跳至最后一块石子上）。
//开始时， 青蛙默认已站在第一块石子上，并可以假定它第一步只能跳跃一个单位（即只能从单元格 1 跳至单元格 2 ）。
//如果青蛙上一步跳跃了 k 个单位，那么它接下来的跳跃距离只能选择为 k - 1、k 或 k + 1 个单位。 另请注意，青蛙只能向前方（终点的方向）跳跃。
//
//示例 1：
//
//输入：stones = [0,1,3,5,6,8,12,17]
//输出：true
//解释：青蛙可以成功过河，按照如下方案跳跃：跳 1 个单位到第 2 块石子, 然后跳 2 个单位到第 3 块石子, 接着 跳 2 个单位到
//第 4 块石子, 然后跳 3 个单位到第 6 块石子, 跳 4 个单位到第 7 块石子, 最后，跳 5 个单位到第 8 个石子（即最后一块石子）。
//示例 2：
//
//输入：stones = [0,1,2,3,4,8,9,11]
//输出：false
//解释：这是因为第 5 和第 6 个石子之间的间距太大，没有可选的方案供青蛙跳跃过去。
//
//
//3. 归类：递归,DFS深度优先，剪枝，记忆法，二分法
//
//3. 解题方法：
//结题思路整体上是递归，中间需要用剪枝减低复杂度
//
//
//4. 思路与步骤：
//
//5. 要点总结：
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
///*************************实现函数*****************************/
////自己写的，第一个版本，AC，执行用时10.61%和内存5.04%。尝试优化
////class Solution {
////public:
////	vector<unordered_map<int, int>> rec;
////	bool canCross(vector<int>& stones) {
////		int place = 0;
////		int pace = 0;
////		bool flag = false;
////		rec.resize(stones.size());
////	    gotonext(stones, place, pace,flag);
////		return flag;
////	}
////
////	void gotonext(vector<int> stone, int place, int pace,bool& flag) {
////		if (place==stone.size()-1) { flag = true; return; };//走到终点，成功
////		for (int i = -1; i <=1; i++)
////		{
////			if (pace + i <= 0) continue;//不要原地走
////			int rst = binary_search(stone, stone[place] + pace + i,place);
////			if (rst!=-1&& (rec[rst][pace + i]==false))//找到并且未访问
////			{
////				rec[rst][pace + i] = true;
////				gotonext(stone,rst, pace + i, flag);
////			}
////			if (flag == true) break;
////		}
////	}
////	//写一个简单的二分查找,返回index的位置
////	int binary_search(vector<int> stone, int num,int place) {
////		int l = place;
////		int r = stone.size() - 1;
////		int ans = -1;
////		while (l<=r)
////		{
////			int mid = (l + r) / 2;
////			if (stone[mid] <= num) {
////				l = mid + 1;
////			}
////			else
////			{
////				r = mid - 1;
////			}
////			if (stone[mid]==num)
////			{
////				ans = mid;
////			}
////		}
////		return ans;
////	}
////};
//
////用系统自带的二分法
//class Solution {
//public:
//	vector<unordered_map<int, int>> rec;
//	bool canCross(vector<int>& stones) {
//		int place = 0;
//		int pace = 0;
//		bool flag = false;
//		rec.resize(stones.size());
//		gotonext(stones, place, pace, flag);
//		return flag;
//	}
//
//	void gotonext(vector<int> stone, int place, int pace, bool& flag) {
//		if (place == stone.size() - 1) { flag = true; return; };//走到终点，成功
//		for (int i = -1; i <= 1; i++)
//		{
//			if (pace + i <= 0) continue;//不要原地走
//			int rst = lower_bound(stone.begin(),stone.end(),stone[place]+pace+i)-stone.begin();
//			if (rst != stone.size() && (rec[rst][pace + i] == false)&&(stone[rst]== stone[place] + pace + i))//找到并且未访问
//			{
//				rec[rst][pace + i] = true;
//				gotonext(stone, rst, pace + i, flag);
//			}
//			if (flag == true) break;
//		}
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//
//int main() {
//	vector<int> stones = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,999};
//	Solution s1;
//	cout<<s1.canCross(stones)<<endl;
//
//	system("pause");
//	return 0;
//}