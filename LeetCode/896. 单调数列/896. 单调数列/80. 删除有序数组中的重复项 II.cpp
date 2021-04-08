#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
	
		if (nums.size()<=2)
		{
			return nums.size();
		}

		int i = 2; 
		int j = 2;
		while (j<nums.size())
		{
			if (nums[i-2]!=nums[j])
			{
				nums[i] = nums[j];
				i++;
			}
			j++;
		}
		return i + 1;
	
	}
};
int main() {

	vector<int> v = { 0,0,1,1,1,1,2,3,3 };
	Solution s1;
	cout<<s1.removeDuplicates(v)<<endl;
	for (auto it : v)
		cout << it << " ";
	system("pause");
	return 0;
}