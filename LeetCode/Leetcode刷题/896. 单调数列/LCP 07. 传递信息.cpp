///********************************************************************
//1. ��Ŀ��Դ��
//
//2. ԭ��
//С���� A �ں� ta ��С������洫��Ϣ��Ϸ����Ϸ�������£�
//
//�� n ����ң�������ұ�ŷֱ�Ϊ 0 �� n-1������С���� A �ı��Ϊ 0
//ÿ����Ҷ��й̶������ɸ��ɴ���Ϣ��������ң�Ҳ����û�У�������Ϣ�Ĺ�ϵ�ǵ���ģ����� A ������ B ����Ϣ���� B ������ A ����Ϣ����
//ÿ����Ϣ������Ҫ���ݸ���һ���ˣ�����Ϣ���ظ�����ͬһ����
//����������� n���Լ��� [��ұ��,��Ӧ�ɴ�����ұ��] ��ϵ��ɵĶ�ά���� relation��������Ϣ��С A (��� 0 ) ���� k �ִ��ݵ����Ϊ n-1 ��С��鴦�ķ������������ܵ������ 0��
//
//ʾ�� 1��
//
//���룺n = 5, relation = [[0,2],[2,1],[3,4],[2,3],[1,4],[2,0],[0,4]], k = 3
//
//�����3
//
//���ͣ���Ϣ��С A ��� 0 ����ʼ���� 3 �ִ��ݣ������� 4������ 3 �ַ������ֱ��� 0->2->0->4�� 0->2->1->4�� 0->2->3->4��
//
//ʾ�� 2��
//
//���룺n = 3, relation = [[0,2],[2,1]], k = 2
//
//�����0
//
//���ͣ���Ϣ���ܴ�С A ������ 2 �ִ��ݵ���� 2
//
//���ƣ�
//
//2 <= n <= 10
//1 <= k <= 5
//1 <= relation.length <= 90, �� relation[i].length == 2
//0 <= relation[i][0],relation[i][1] < n �� relation[i][0] != relation[i][1]
//
//3. ���ࣺBFS
//
//4. ����Ҫ��:���ղ�νṹ��ÿ�ΰ�һ������ݷ�����У���һ����pop����
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
//#include <queue>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	int numWays(int n, vector<vector<int>>& relation, int k) {
//		//deq�����浱ǰ�����ջ����
//		deque<int> deq;
//		vector<vector<int>> v(n);
//		//Ԥ�����þ�������ʾ����ͼ
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
//		//����deq�д����k���ܹ�����ĵ�
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
///*************************main���� �������*****************************/
//int main() {
//	int n = 3;
//	vector<vector<int>>relation = { {0, 2},{2, 1} };
//	int k = 2;
//	Solution S;
//	S.numWays(n, relation, k);
//	system("pause");
//	return 0;
//}
