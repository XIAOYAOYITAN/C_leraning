///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/guess-number-higher-or-lower/
//
//2. ԭ��
//374. �����ִ�С
//��������Ϸ�Ĺ������£�
//
//ÿ����Ϸ���Ҷ���� 1 �� n ���ѡ��һ�����֡� �����ѡ�������ĸ����֡�
//�����´��ˣ��һ�����㣬��²�����ֱ���ѡ���������Ǵ��˻���С�ˡ�
//�����ͨ������һ��Ԥ�ȶ���õĽӿ� int guess(int num) ����ȡ�²���������ֵһ���� 3 �ֿ��ܵ������-1��1 �� 0����
//
//-1����ѡ�������ֱ���µ�����С pick < num
//1����ѡ�������ֱ���µ����ִ� pick > num
//0����ѡ�������ֺ���µ�����һ������ϲ����¶��ˣ�pick == num
//������ѡ�������֡�
//
//ʾ�� 1��
//
//���룺n = 10, pick = 6
//�����6
//ʾ�� 2��
//
//���룺n = 1, pick = 1
//�����1
//ʾ�� 3��
//
//���룺n = 2, pick = 1
//�����1
//ʾ�� 4��
//
//���룺n = 2, pick = 2
//�����2
//
//3. ���ࣺ
//
//4. ����Ҫ��
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
///**
// * Forward declaration of guess API.
// * @param  num   your guess
// * @return 	     -1 if num is lower than the guess number
// *			      1 if num is higher than the guess number
// *               otherwise return 0
// * int guess(int num);
// */
//
//class Solution {
//public:
//	int guessNumber(int n) {
//		int l = 1;
//		int r = n;
//		while (l <= r) {
//			int mid = l + (r - l) / 2;
//			if (guess(mid) == -1) r = mid - 1;
//			else if (guess(mid) == 1) l = mid + 1;
//			else return mid;
//		}
//		return -1;
//	}
//};
///*************************main���� �������*****************************/
//int main() {
//
//	system("pause");
//	return 0;
//}