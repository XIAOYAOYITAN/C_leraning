#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;


//����һ���Ǹ��������飬�����λ������ĵ�һ��λ�á�
//�����е�ÿ��Ԫ�ش������ڸ�λ�ÿ�����Ծ����󳤶ȡ�
//���Ŀ����ʹ�����ٵ���Ծ����������������һ��λ�á�
//���������ǿ��Ե�����������һ��λ�á�

//ʾ�� 1:
//
//����: [2, 3, 1, 1, 4]
//	��� : 2
//	���� : �������һ��λ�õ���С��Ծ���� 2��
//	���±�Ϊ 0 �����±�Ϊ 1 ��λ�ã��� 1 ����Ȼ���� 3 ��������������һ��λ�á�
//	ʾ�� 2 :
//
//	���� : [2, 3, 0, 1, 4]
//	��� : 2

//����˼·1��̰�ģ���취���ⲽ������һ����õ�λ�ã���ζ�����ã�index+pace�����Ϊ���
class Solution {
public:
	int jump(vector<int>& nums) {

		//1.�ҵ��ӵ�ǰλ�ó�������������õ�λ��
		int curr = 0;
		int count = 0;		
		while (curr!=nums.size()-1)
		{
			curr=best_pace(nums,curr);
			count++;
		}
		return count;
	}
	int best_pace(vector<int> &nums,int &index) {
		int max_sum = 0;
		int max_index = index + 1;
		for (int i = index + 1; i <= index + nums[index]; i++) {
			if (i == nums.size()-1)
			{
				max_index = nums.size()-1;
				break;
			}
			if (i + nums[i] > max_sum) {
				max_sum = i + nums[i];
				max_index = i;
			}
		}
		return max_index;
	}
};



int main() {
	vector<int> nums = { 2,1 };
	Solution s1;
	cout<<s1.jump(nums)<<endl;

	system("pause");
	return 0;
}