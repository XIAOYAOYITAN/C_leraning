//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//	bool exist(vector<vector<char>>& board, string word) {
//		int row = board.size(); //行数目
//		int column = board[0].size();//列数目
//		vector<pair<int, int>> v1;
//		vector<vector<int>> visited(row, vector<int> (column));
//
//		//1.第一遍遍历，并记录起点位置
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < column; j++)
//			{
//				if (board[i][j] == word[0]) {
//					v1.push_back(make_pair(i,j));
//				}
//			}
//		}
//		if (!v1.size()) return false; //没找到起点
//
//		if ( v1.size()>=1&&word.size()==1) {
//			//特殊情况,只有一个元素,直接找到了，没必要DFS
//			return true;
//		}
//		else {
//			//从起点出发开始做DFS
//			for (auto it = v1.begin(); it != v1.end(); it++)
//			{
//				int i = it->first;
//				int j = it->second;
//				int flag = DFS(i, j, 0, board, word, visited);
//				if (flag)
//				{
//					return true;
//				}
//			}
//		}
//		return false;
//	}
//
//	//1. 判断走的这一步是否相等，不相等直接return
//	//2. 判断是否已经走完（word到末尾）
//	bool DFS(int i, int j, int k, vector<vector<char>>& board, string &word, vector<vector<int>> &visited) {
//
//		int result = false;//判别该节点下的路径是否能通
//
//		vector<pair<int, int>> v2 = { {0,-1} ,{0,1},{-1,0} ,{1,0} };
//		visited[i][j] = true;
//		for (auto it = v2.begin(); it != v2.end(); it++)
//		{
//			int newi = i + it->first;
//			int newj = j + it->second;
//			if (newi >= 0 && newi < board.size() && newj >= 0 && newj < board[0].size())//没有越界
//			{
//				if (visited[newi][newj] == false) {//该节点未被访问
//					if (board[newi][newj] == word[k + 1]) {//下一步迈过去相等
//						if (k+1 == word.size() - 1) return true;//最关键的语句，找到了全部的字符串！！！
//						int flag = DFS(newi, newj, k + 1, board, word, visited);
//						if (flag)
//						{
//							result = true;
//							break;
//						}
//					}
//				}
//			}
//		}
//		visited[i][j] = false;//回溯，失败之后就当没来过
//		return result;
//	}
//};
//
////class Solution {
////public:
////	bool exist(vector<vector<char>>& board, string word) {
////		int row = board.size(); //行数目
////		int column = board[0].size();//列数目
////		vector<vector<int>> visited(row, vector<int>(column));
////		
////		for (int i = 0; i <row ; i++)
////		{
////			for (int j = 0; j < column; j++) {
////				int k = 0;
////				int flag=check(i, j, k, board, word,visited);
////				if (flag)
////				{
////					return true;
////				}
////			}
////		}
////		return false;
////
////	}
////	bool check(int i, int j, int k, vector<vector<char>>& board, string & word, vector<vector<int>> &visited)
////	{
////		if (board[i][j] != word[k]) return false;//当前节点的值不匹配，回溯
////		if (k == word.size() - 1) return true;//word已经遍历完毕
////		visited[i][j] = true;//该节点已经被访问
////		vector<pair<int, int>> v2 = {{0,1},{0,-1},{1,0},{-1,0} };
////		bool result=false;
////		for (auto it = v2.begin(); it != v2.end(); it++)
////		{
////			int newi = i + it->first;
////			int newj = j + it->second;
////			if (!(newi >= board.size() || newi < 0 || newj >= board[0].size() || newj < 0)) {//没有越界
////				if (!visited[newi][newj]) {
////					bool flag = check(newi, newj, k + 1, board, word, visited);//遍历下一遍
////					if (flag) {
////						result = true;
////						break;
////					}
////				}
////
////			}
////		}
////		visited[i][j] = false;//回溯后，该节点未被访问
////		return result;
////	}
////};
//
//int main() {
//	vector<vector<char>> board = { {'A'}, {'A' } };
//	Solution s1;
//	cout << s1.exist(board,"A") << endl;
//
//	system("pause");
//	return 0;
//}