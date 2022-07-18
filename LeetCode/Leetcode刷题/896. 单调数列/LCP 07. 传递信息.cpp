///********************************************************************
//1. 题目来源：
//
//2. 原题
//小朋友 A 在和 ta 的小伙伴们玩传信息游戏，游戏规则如下：
//
//有 n 名玩家，所有玩家编号分别为 0 ～ n-1，其中小朋友 A 的编号为 0
//每个玩家都有固定的若干个可传信息的其他玩家（也可能没有）。传信息的关系是单向的（比如 A 可以向 B 传信息，但 B 不能向 A 传信息）。
//每轮信息必须需要传递给另一个人，且信息可重复经过同一个人
//给定总玩家数 n，以及按 [玩家编号,对应可传递玩家编号] 关系组成的二维数组 relation。返回信息从小 A (编号 0 ) 经过 k 轮传递到编号为 n-1 的小伙伴处的方案数；若不能到达，返回 0。
//
//示例 1：
//
//输入：n = 5, relation = [[0,2],[2,1],[3,4],[2,3],[1,4],[2,0],[0,4]], k = 3
//
//输出：3
//
//解释：信息从小 A 编号 0 处开始，经 3 轮传递，到达编号 4。共有 3 种方案，分别是 0->2->0->4， 0->2->1->4， 0->2->3->4。
//
//示例 2：
//
//输入：n = 3, relation = [[0,2],[2,1]], k = 2
//
//输出：0
//
//解释：信息不能从小 A 处经过 2 轮传递到编号 2
//
//限制：
//
//2 <= n <= 10
//1 <= k <= 5
//1 <= relation.length <= 90, 且 relation[i].length == 2
//0 <= relation[i][0],relation[i][1] < n 且 relation[i][0] != relation[i][1]
//
//3. 归类：BFS
//
//4. 解题要点:按照层次结构，每次把一层的数据放入队列，再一次性pop出来
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
//#include <queue>
//using namespace std;
//
///*************************实现函数*****************************/
//class Solution {
//public:
//	int numWays(int n, vector<vector<int>>& relation, int k) {
//		//deq用来存当前层的入栈数字
//		deque<int> deq;
//		vector<vector<int>> v(n);
//		//预处理，用矩阵来表示有向图
//		for (auto it : relation) {
//			v[it[0]].push_back(it[1]);
//		}
//
//		deq.push_back(0);
//		for (int i = 0; i < k; i++)
//		{
//			int n = deq.size();
//			while (n>0)
//			{
//				int curr = deq.front();
//				deq.pop_front();
//				for (auto it : v[curr]) {
//					deq.push_back(it);
//				}
//				n--;
//			}
//		}
//		int count = 0;
//		//现在deq中存的是k步能够到达的点
//		for (auto it : deq) {
//			if (it == n - 1)
//				count++;
//		}
//		return count;
//	}
//};
//
////class Solution {
////public:
////	int numWays(int n, vector<vector<int>> &relation, int k) {
////		vector<vector<int>> edges(n);
////		for (auto &edge : relation) {
////			int src = edge[0], dst = edge[1];
////			edges[src].push_back(dst);
////		}
////
////		int steps = 0;
////		queue<int> que;
////		que.push(0);
////		while (!que.empty() && steps < k) {
////			steps++;
////			int size = que.size();
////			for (int i = 0; i < size; i++) {
////				int index = que.front();
////				que.pop();
////				for (auto &nextIndex : edges[index]) {
////					que.push(nextIndex);
////				}
////			}
////		}
////
////		int ways = 0;
////		if (steps == k) {
////			while (!que.empty()) {
////				if (que.front() == n - 1) {
////					ways++;
////				}
////				que.pop();
////			}
////		}
////		return ways;
////	}
////};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	int n = 3;
//	vector<vector<int>>relation = { {0, 2},{2, 1} };
//	int k = 2;
//	Solution S;
//	S.numWays(n, relation, k);
//	system("pause");
//	return 0;
//}
