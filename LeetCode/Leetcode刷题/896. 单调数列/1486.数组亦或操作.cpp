///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/xor-operation-in-an-array/
//
//2. ԭ��
//
//1486. ����������
//��������������n �� start ��
//
//���� nums ����Ϊ��nums[i] = start + 2*i���±�� 0 ��ʼ���� n == nums.length ��
//
//�뷵�� nums ������Ԫ�ذ�λ���XOR����õ��Ľ����
//
//
//
//ʾ�� 1��
//
//���룺n = 5, start = 0
//�����8
//���ͣ����� nums Ϊ [0, 2, 4, 6, 8]������ (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8 ��
//	 "^" Ϊ��λ��� XOR �������
//ʾ�� 2��
//
//���룺n = 4, start = 3
//�����8
//���ͣ����� nums Ϊ [3, 5, 7, 9]������ (3 ^ 5 ^ 7 ^ 9) = 8.
//ʾ�� 3��
//
//���룺n = 1, start = 7
//�����7
//ʾ�� 4��
//
//���룺n = 10, start = 5
//�����2
//
//3. ���ࣺ
//
//4. ����Ҫ��
//
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
////�򵥴ֱ�
////class Solution {
////public:
////	int xorOperation(int n, int start) {
////		int out=start;
////		for (int i = 1; i < n; i++) {
////			out = out ^ (start + 2 * i);
////		}
////		return out;
////	}
////};
//
////��ѧ����
////�� ans=start(start+2*1)(start+2*2)****(start+2*(i-1))
////���һ��2���õ�ans/2=s(s+1)(s+2)(s+3)****(s+n-1)
////�� ans/2=(0��s+n-1��xor(0��s-1)
////ans=������*2+���λ
////�������λ�����㣬����ԭ����ʽ�����棬���е�����ż�Զ���ͬ�����һλ�����ֵ��ֻ�е�startΪ������nҲΪ������ʱ�򣬲���1��������
//class Solution {
//public:
//	int xorOperation(int n, int start) {
//		int s = start >> 1;
//		int e =0;
//		if (start % 2 == 1 && n % 2 == 1) e = 1;
//		return (sumXor(s - 1)^sumXor( s + n - 1)) << 1 | e;
//	}
//
//	int sumXor(int s) {
//		if (s % 4 == 0) return s;
//		else if (s % 4 == 1) return 1;
//		else if (s % 4 == 2) return s + 1;
//		else return 0;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	int n = 5;
//	int start = 0;
//	Solution S;
//	cout<<S.xorOperation(n, 0)<<endl;
//
//	system("pause");
//	return 0;
//}