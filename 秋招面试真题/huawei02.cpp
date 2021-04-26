#include <iostream>
#include <string>
#include <vector>
using namespace std;

//�뷨��̰�ģ�ÿһ���������ҵ���Զ�Ĳ���ȥ��,placeΪ������λ��,lenΪʣ�µĳ��ȣ�dstΪȫ������
void step(int &place, int &len, vector<int> &dst) {
	int num = dst[place];
	int sum = 0;
	int max_place = 0;
	for (int i = 1; i <= num; i++)
	{
		sum = i + dst[i + place];
		if (sum > dst[max_place]) {
			max_place = i + place;
		}
	}
	len = len - (max_place - place);
	place = max_place;
	
}

int main() {
	int num = 0;
	cin >> num;
	vector<int> dst;
	int tmp;
	for (int i = 0; i < num; i++)
	{
		cin >> tmp;
		dst.push_back(tmp);
	}
	//int num = 6;
	//vector<int> dst = {1,1,1,1,1,1};

	int place = 0;
	int len = num - 1;
	int count=0;
	while (len>dst[place])
	{
		step(place, len, dst);
		count++;
	}

	count++;//�������һ��

	cout << count << endl;

	system("pause");
	return 0;
}

