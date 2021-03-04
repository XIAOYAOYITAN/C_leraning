///**
// * Your NumArray object will be instantiated and called as such:
// * NumArray* obj = new NumArray(nums);
// * int param_1 = obj->sumRange(i,j);
// */
//
//#include <iostream>
//#include <vector>
//#include<numeric>
//using namespace std;
//
////暴力求解
////class NumArray {
////public:
////	NumArray(vector<int>& nums) :m_nums(nums){
////		
////	}
////
////	int sumRange(int i, int j) {
////		int sum=0;
////		for (int k = i; k <= j; k++)
////		{
////			sum = sum + this->m_nums[k];
////
////		}
////		
////		return  sum;
////
////	}
////
////	vector<int>& m_nums;
////};
//
//////使用C++的暴力累加
////class NumArray {
////public:
////	NumArray(vector<int>& nums) :m_nums(nums) {
////
////	}
////
////	int sumRange(int i, int j) {
////		return accumulate(m_nums.begin() + i, m_nums.begin() + j + 1, 0);
////
////	}
////
////	vector<int>& m_nums;
////};
//
//
////使用前缀和
//class NumArray {
//public:
//
//	vector<int> persum;
//
//	NumArray(vector<int>& nums) {
//
//		this->persum.resize(nums.size() + 1);
//		for (int i = 0; i < nums.size(); i++) {
//		
//			persum[i + 1] = persum[i] + nums[i];
//		}
//
//	}
//
//	int sumRange(int i, int j) {
//		return persum[j + 1] - persum[i];
//
//	}
//
//};
//
//int main() {
//	
//	vector<int> v1;
//	v1.push_back(-2);
//	v1.push_back(0);
//	v1.push_back(3);
//	v1.push_back(-5);
//	v1.push_back(2);
//	v1.push_back(-1);
//
//	NumArray *n1 = new NumArray(v1);
//	cout<< n1->sumRange(0, 2);
//
//	system("pause");
//	return 0;
//}
