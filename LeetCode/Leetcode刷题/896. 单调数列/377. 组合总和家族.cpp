//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
///*********************************************组合总和I**********************************************************/
//
////给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。
////
////candidates 中的数字可以无限制重复被选取。
////
////来源：力扣（LeetCode）
////链接：https ://leetcode-cn.com/problems/combination-sum
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
////看到这道题就觉得是两数之和的翻版！！
////尝试用哈希表和动态规划做
//
////class Solution {
////public:
////	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
////		//1. 从1开始，逐渐往上加，直到加到target
////		map<int, set<vector<int>>> hashmap;//用set的目的是防止vector重复
////		for (int i = 1; i <= target; i++)
////		{
////			set<vector<int>> v1;
////			//2.i-candidate，若等于0，组成集合插入hashmap，若大于0，如果在hashmap里面找i-candidate
////			for (int j = 0; j < candidates.size(); j++)
////			{
////				int can = i - candidates[j];
////				//相等，直接作为vector<int>插入
////				if (can==0) {
////					vector<int> v2;
////					v2.push_back(i);
////					hashmap[i].insert(v2);
////				}
////				//不相等，在hashmap中找到已经存在的集合，在后面添上candidate-i的值
////				else if (can>0)
////				{
////					//遍历hashmap[can]，在里面添加新的元素candidate[j]
////					for (auto its = hashmap[can].begin(); its != hashmap[can].end(); its++) {
////						vector<int> the_vector = (*its);
////						the_vector.push_back(candidates[j]);
////						sort(the_vector.begin(), the_vector.end());//sort的目的是让[1,2]和[2,1]自排除
////						hashmap[i].insert(the_vector);
////					}
////				}
////			}
////		}
////
////		vector<vector<int>> out;
////		//将set<vector>转换成vector<vector>
////		for (set<vector<int>>::iterator it = hashmap[target].begin(); it != hashmap[target].end();it++) {
////			out.push_back(*it);
////		}
////		return out;
////
////	}
////};
//
////// 由@lan-yun-2提供
////map<int, set<vector<int> > > dpkv;
////class Solution {
////public:
////	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
////		set<vector<int> > avectorset;
////		// 初始化
////		for (int i = 1; i <= target; i++) {
////			dpkv[i] = avectorset; // 都赋值成一个空的数组
////		}
////		// 开始递推
////
////		for (int j = 1; j <= target; j++) {
////			for (vector<int>::iterator it = candidates.begin(); it != candidates.end(); it++) {
////				if (j == *it) {
////					// 直接作为一个vector<int>加入
////					vector<int> v_only_one_num;
////					v_only_one_num.push_back(j);
////					dpkv[j].insert(v_only_one_num);
////				}
////				else if (j > *it) { // 用dp[j - *it] 作为结果
////				 // 遍历dp[j - *it]
////					for (set<vector<int> >::iterator its = dpkv[j - *it].begin(); its != dpkv[j - *it].end(); its++) {
////						vector<int> the_vector = (*its);
////						the_vector.push_back(*it);
////						sort(the_vector.begin(), the_vector.end());
////						dpkv[j].insert(the_vector);
////					}
////				}
////			}
////		}
////		// 将set加工成vector
////		vector<vector<int>> target_v;
////		for (set<vector<int> >::iterator its = dpkv[target].begin(); its != dpkv[target].end(); its++) {
////			target_v.push_back(*its);
////		}
////
////		return target_v;
////	}
////};
//
//
/////*********************************************组合总和3**********************************************************/
//class Solution {
//public:
//	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//
//	}
//};
//
/////*********************************************组合总和4**********************************************************/
//////给你一个由 不同 整数组成的数组 nums ，和一个目标整数 target 。请你从 nums 中找出并返回总和为 target 的元素组合的个数。
//////
//////题目数据保证答案符合 32 位整数范围
//////
//////来源：力扣（LeetCode）
//////链接：https ://leetcode-cn.com/problems/combination-sum-iv
//////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
////
////class Solution {
////public:
////	int combinationSum4(vector<int>& nums, int target) {
////		map<int, int> dp;
////		//dp算法，从1开始，一直算到到target
////		for (int i = 1; i <= target; i++)
////		{
////			for (int j = 0; j < nums.size(); j++)
////			{
////				int tmp = i - nums[j];
////				if (tmp == 0) dp[i] += 1;
////				if (tmp > 0&&dp[tmp]<INT_MAX-dp[i]) dp[i] = dp[i]+dp[tmp];
////			}
////		}
////		return dp[target];
////	}
////};
//
//
//
//
//int main() {
//
//	vector<int> candidates = {};
//	int target = 999;
//	Solution s1;
//	cout<<s1.combinationSum4(candidates, target);
//
//	system("pause");
//	return 0;
//}
//
//
