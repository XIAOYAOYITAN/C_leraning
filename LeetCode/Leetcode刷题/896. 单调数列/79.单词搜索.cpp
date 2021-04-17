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
//		int row = board.size(); //����Ŀ
//		int column = board[0].size();//����Ŀ
//		vector<pair<int, int>> v1;
//		vector<vector<int>> visited(row, vector<int> (column));
//
//		//1.��һ�����������¼���λ��
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < column; j++)
//			{
//				if (board[i][j] == word[0]) {
//					v1.push_back(make_pair(i,j));
//				}
//			}
//		}
//		if (!v1.size()) return false; //û�ҵ����
//
//		if ( v1.size()>=1&&word.size()==1) {
//			//�������,ֻ��һ��Ԫ��,ֱ���ҵ��ˣ�û��ҪDFS
//			return true;
//		}
//		else {
//			//����������ʼ��DFS
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
//	//1. �ж��ߵ���һ���Ƿ���ȣ������ֱ��return
//	//2. �ж��Ƿ��Ѿ����꣨word��ĩβ��
//	bool DFS(int i, int j, int k, vector<vector<char>>& board, string &word, vector<vector<int>> &visited) {
//
//		int result = false;//�б�ýڵ��µ�·���Ƿ���ͨ
//
//		vector<pair<int, int>> v2 = { {0,-1} ,{0,1},{-1,0} ,{1,0} };
//		visited[i][j] = true;
//		for (auto it = v2.begin(); it != v2.end(); it++)
//		{
//			int newi = i + it->first;
//			int newj = j + it->second;
//			if (newi >= 0 && newi < board.size() && newj >= 0 && newj < board[0].size())//û��Խ��
//			{
//				if (visited[newi][newj] == false) {//�ýڵ�δ������
//					if (board[newi][newj] == word[k + 1]) {//��һ������ȥ���
//						if (k+1 == word.size() - 1) return true;//��ؼ�����䣬�ҵ���ȫ�����ַ���������
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
//		visited[i][j] = false;//���ݣ�ʧ��֮��͵�û����
//		return result;
//	}
//};
//
////class Solution {
////public:
////	bool exist(vector<vector<char>>& board, string word) {
////		int row = board.size(); //����Ŀ
////		int column = board[0].size();//����Ŀ
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
////		if (board[i][j] != word[k]) return false;//��ǰ�ڵ��ֵ��ƥ�䣬����
////		if (k == word.size() - 1) return true;//word�Ѿ��������
////		visited[i][j] = true;//�ýڵ��Ѿ�������
////		vector<pair<int, int>> v2 = {{0,1},{0,-1},{1,0},{-1,0} };
////		bool result=false;
////		for (auto it = v2.begin(); it != v2.end(); it++)
////		{
////			int newi = i + it->first;
////			int newj = j + it->second;
////			if (!(newi >= board.size() || newi < 0 || newj >= board[0].size() || newj < 0)) {//û��Խ��
////				if (!visited[newi][newj]) {
////					bool flag = check(newi, newj, k + 1, board, word, visited);//������һ��
////					if (flag) {
////						result = true;
////						break;
////					}
////				}
////
////			}
////		}
////		visited[i][j] = false;//���ݺ󣬸ýڵ�δ������
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