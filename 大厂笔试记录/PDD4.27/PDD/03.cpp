//#include <iostream>
//#include <vector>
//#include <bitset>
//#include <list>
//using namespace std;
//
//
//int cal_1(unsigned int in) {
//	int count = 0;
//	while (in > 0)
//	{
//		if (in & 1 == 1) {
//			count++;
//		}
//		in >>= 1;
//	}
//	return count;
//}
//
//void print_binary(unsigned long out) {
//
//	list<int> L;
//	while (out!=0)
//	{
//		L.push_front(out % 2);
//		out= out >> 1;
//	}
//	for (auto it:L)
//	{
//		cout << it;
//	}
//
//	cout << endl;
//
//}
//
//
//
//int main() {
//	int k=0;
//	bitset<100000> bint;
//	cin >> bint;
//	cin >> k;
//	unsigned long in = bint.to_ulong();
//	in++;
//	while (cal_1(in)!=k)
//	{
//		in++;
//	}
//
//	print_binary(in);
//
//
//	system("pause");
//	return 0;
//}
//
