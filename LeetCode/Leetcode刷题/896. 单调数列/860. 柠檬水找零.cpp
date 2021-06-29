///********************************************************************
//1. 题目来源：https://leetcode-cn.com/problems/lemonade-change/
//
//2. 原题
//860. 柠檬水找零
//在柠檬水摊上，每一杯柠檬水的售价为 5 美元。
//
//顾客排队购买你的产品，（按账单 bills 支付的顺序）一次购买一杯。
//
//每位顾客只买一杯柠檬水，然后向你付 5 美元、10 美元或 20 美元。你必须给每个顾客正确找零，也就是说净交易是每位顾客向你支付 5 美元。
//
//注意，一开始你手头没有任何零钱。
//
//如果你能给每位顾客正确找零，返回 true ，否则返回 false 。
//
//示例 1：
//
//输入：[5,5,5,10,20]
//输出：true
//解释：
//前 3 位顾客那里，我们按顺序收取 3 张 5 美元的钞票。
//第 4 位顾客那里，我们收取一张 10 美元的钞票，并返还 5 美元。
//第 5 位顾客那里，我们找还一张 10 美元的钞票和一张 5 美元的钞票。
//由于所有客户都得到了正确的找零，所以我们输出 true。
//示例 2：
//
//输入：[5,5,10]
//输出：true
//示例 3：
//
//输入：[10,10]
//输出：false
//示例 4：
//
//输入：[5,5,10,10,20]
//输出：false
//解释：
//前 2 位顾客那里，我们按顺序收取 2 张 5 美元的钞票。
//对于接下来的 2 位顾客，我们收取一张 10 美元的钞票，然后返还 5 美元。
//对于最后一位顾客，我们无法退回 15 美元，因为我们现在只有两张 10 美元的钞票。
//由于不是每位顾客都得到了正确的找零，所以答案是 false。
//
//3. 归类：基础查找
//
//4. 解题要点：哈希表解决
//
//**********************************************************************/
//
///*************************头文件*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
////
/////*************************实现函数*****************************/
////class Solution {
////public:
////	map<int, int> mp;//存纸币的种类和对应数目
////	const int pay = 5;
////	bool lemonadeChange(vector<int>& bills) {
////		int n = bills.size();
////
////		for (int i = 0; i < n; i++)
////		{
////			mp[bills[i]]++;
////			if (bills[i] > pay)
////			{
////				switch (bills[i])
////				{
////				case 20:
////					if (mp[10] > 0)
////					{
////						mp[10]--;
////						if (mp[5] > 0) mp[5]--;
////						else return false;
////					}
////					else 
////					{
////						if (mp[5] - 3 >= 0)
////							mp[5] = mp[5]- 3;
////						else
////						{
////							return false;
////						}
////					}
////					break;
////				case 10:
////					if (mp[5] > 0) mp[5]--;
////					else return false;
////					break;
////				default:
////					break;
////				}
////			}
////		}
////		return true;
////	}
////};
//
////写完了才发现根本不用哈希表，直接用变量维护five和ten的数量就完事了
//class Solution {
//public:
//	bool lemonadeChange(vector<int>& bills) {
//		int five = 0, ten = 0;
//		for (auto& bill : bills) {
//			if (bill == 5) {
//				five++;
//			}
//			else if (bill == 10) {
//				if (five == 0) {
//					return false;
//				}
//				five--;
//				ten++;
//			}
//			else {
//				if (five > 0 && ten > 0) {
//					five--;
//					ten--;
//				}
//				else if (five >= 3) {
//					five -= 3;
//				}
//				else {
//					return false;
//				}
//			}
//		}
//		return true;
//	}
//};
//
//
///*************************main函数 输入输出*****************************/
//int main() {
//	vector<int> bills = { 5, 5, 10, 5, 20, 5, 5, 5, 5, 5, 20, 5, 10, 5, 5, 5, 5, 20, 20, 5 };
//	Solution S;
//	cout<<S.lemonadeChange(bills)<<endl;
//
//	system("pause");
//	return 0;
//}