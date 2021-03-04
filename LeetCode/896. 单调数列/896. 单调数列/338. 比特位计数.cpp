//#include <iostream>
//#include <vector>
//#include <List>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> countBits(int num) {
//		vector<int> Bits_count;
//		for (int i = 0; i <= num; i++)
//		{
//			int temp = i;
//			int count = 0;
//			while (temp != 0)
//			{
//				if (temp % 2 == 1)
//					count++;
//				temp = temp / 2;
//
//			}
//			Bits_count.push_back(count);
//		}
//		return Bits_count;
//	}
//};
//
////class Solution {
////public:
////	vector<int> countBits(int num) {
////		vector<int> bits(num + 1);
////		int highbit = 0;
////		for (int i = 1; i <= num; i++)
////		{
////			if ((i&(i - 1)) == 0) {
////				highbit = i;
////			}
////			bits[i] = bits[i - highbit] + 1;
////		}
////		return bits;
////	}
////};
//
//
//int main() {
//	Solution s1;
//	vector<int> v1 = s1.countBits(12);
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//	system("pause");
//	return 0;
//}