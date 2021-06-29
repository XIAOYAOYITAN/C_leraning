///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/peak-index-in-a-mountain-array/
//
//2. ԭ��
//852. ɽ������ķ嶥����
//�����������Ե����� arr ��Ϊ ɽ������ ��
//arr.length >= 3
//���� i��0 < i < arr.length - 1��ʹ�ã�
//arr[0] < arr[1] < ... arr[i-1] < arr[i]
//arr[i] > arr[i+1] > ... > arr[arr.length - 1]
//������������ɵ�ɽ������ arr �������κ����� arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] ���±� i ��
//
//ʾ�� 1��
//���룺arr = [0,1,0]
//�����1
//ʾ�� 2��
//
//���룺arr = [0,2,1,0]
//�����1
//ʾ�� 3��
//
//���룺arr = [0,10,5,2]
//�����1
//ʾ�� 4��
//
//���룺arr = [3,4,5,1]
//�����2
//ʾ�� 5��
//
//���룺arr = [24,69,100,99,79,78,67,36,26,19]
//�����2
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
//class Solution {
//public:
//	int peakIndexInMountainArray(vector<int>& arr) {
//		int l = 0;
//		int r = arr.size();
//		int rst = 0;
//		while (l<r)
//		{
//			int mid = l + (r - l) / 2;
//			if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
//				rst = mid; 
//				break;
//			}
//			else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1]) r = mid ;
//			else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]) l = mid ;
//			else;
//		}
//		return rst;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	vector<int> arr = { 24,69,100,99,79,78,67,36,26,19 };
//	Solution S;
//
//	cout<<S.peakIndexInMountainArray(arr)<<endl;
//
//	system("pause");
//	return 0;
//}