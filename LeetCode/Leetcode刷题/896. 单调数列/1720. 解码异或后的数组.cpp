///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/decode-xored-array/
//
//2. ԭ��
//1720. �������������
//δ֪ �������� arr �� n ���Ǹ�������ɡ�
//
//��������Ϊ����Ϊ n - 1 ����һ���������� encoded ������ encoded[i] = arr[i] XOR arr[i + 1] �����磬arr = [1,0,2,1] �������õ� encoded = [1,2,3] ��
//
//������������� encoded ��ԭ���� arr �ĵ�һ��Ԫ�� first��arr[0]����
//
//����뷵��ԭ���� arr ������֤���𰸴��ڲ�����Ψһ�ġ�
//
//
//
//ʾ�� 1��
//
//���룺encoded = [1,2,3], first = 1
//�����[1,0,2,1]
//���ͣ��� arr = [1,0,2,1] ����ô first = 1 �� encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
//ʾ�� 2��
//
//���룺encoded = [6,2,7,3], first = 4
//�����[4,2,0,7,4]
//
//3. ���ࣺ
//
//4. ����Ҫ�㣺
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
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	vector<int> decode(vector<int>& encoded, int first) {
//		vector<int> out(encoded.size()+1,0);
//		out[0] = first;
//		for (int i = 1; i < out.size(); i++)
//		{
//			out[i] = out[i - 1] ^ encoded[i - 1];
//		}
//		return out;
//	}
//};
//
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> encoded = { 1,2,3 };
//	int first = 1;
//	Solution S;
//	vector<int> out=S.decode(encoded, first);
//	for (auto it : out)
//	{
//		cout << it<<endl;
//	}
// 
//	system("pause");
//	return 0;
//}