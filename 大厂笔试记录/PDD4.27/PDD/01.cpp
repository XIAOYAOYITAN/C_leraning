//#include <iostream>
//#include <vector>
//#include <list>
//using namespace std;
//
//vector<int> cal(int nums, int &day) {
//	vector<int> out;
//	int count = 1;
//	while (nums != 0)
//	{
//
//		int a = 0;
//		a = nums % 2;
//		if (a == 1) {
//			out.push_back(count);
//		}
//		nums = nums / 2;
//		count++;
//	}
//	day = count-1;
//	return out;
//}
//
//int main() {
//	int n = 0;
//	cin >> n;
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		int in = 0;
//		cin >> in;
//		v.push_back(in);
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		int day = 0;
//		vector<int> out = cal(v[i], day);
//		cout << day << endl;
//		for (int it : out)
//		{
//			cout << it << " ";
//		}
//		cout << endl;
//
//	}
//
//	
//	system("pause");
//	return 0;
//
//}
//
