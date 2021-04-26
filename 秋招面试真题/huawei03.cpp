#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
		int num = 0;
		cin >> num;
		vector<int> dst;
		int tmp;
		for (int i = 0; i < num; i++)
		{
			cin >> tmp;
			dst.push_back(tmp);
		}
		for (int i = 1; i < num; i++)
		{
			if (dst[i] - dst[i - 1] > 9) {
				

			}
			else
			{

			}
		}

}