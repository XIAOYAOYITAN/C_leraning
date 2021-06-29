#include <iostream>
#include <vector>
#include <map>
using namespace std;


//解题思路，
int maxArea(vector<int> height, int heightSize) {

	//双指针维护左右，对比之后相互运动
	int i = 0, j = heightSize - 1;
	int volume=0;
	while (i != j)
	{
		if (height[i] > height[j]) {
			volume = height[j] * (j - i);
			j--;
		}
		else
		{
			volume = height[i] * (j - i);
			i++;
		}
	}
	return volume;
	
}

int main() {
	vector<int> height = { 1,8,6,2,5,4,8,3,7 };
	cout<<maxArea(height, height.size());

	system("pause");
	return 0;
}