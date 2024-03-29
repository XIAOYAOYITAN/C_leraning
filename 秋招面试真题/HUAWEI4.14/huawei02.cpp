#include <iostream>
#include <string>
#include <vector>
using namespace std;

//想法：贪心，每一步都尽量找到最远的步长去迈,place为所处的位置,len为剩下的长度，dst为全部数组
void step(int &place, int &len, vector<int> &dst) {
	int num = dst[place];
	int sum = num;
	int max_place = place;
	for (int i = 1; i <= num; i++)
	{
		if (sum < i+dst[i+place]) {//
			sum = i+dst[i+place];
			max_place = i + place;
		}
	}
	len = len - (max_place - place);
	place = max_place;
}

int main() {
	//int num = 0;
	//cin >> num;
	//vector<int> dst;
	//int tmp;
	//for (int i = 0; i < num; i++)
	//{
	//	cin >> tmp;
	//	dst.push_back(tmp);
	//}
	int num = 7;
	vector<int> dst = {4,1,1,3,1,1,1};

	int place = 0;
	int len = num - 1;
	int count=0;
	while (len>dst[place])
	{
		step(place, len, dst);
		count++;
	}

	count++;//迈出最后一步

	cout << count << endl;

	system("pause");
	return 0;
}

