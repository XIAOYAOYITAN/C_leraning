﻿////通常，正整数 n 的阶乘是所有小于或等于 n 的正整数的乘积。例如，factorial(10) = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1。
////
////相反，我们设计了一个笨阶乘 clumsy：在整数的递减序列中，我们以一个固定顺序的操作符序列来依次替换原有的乘法操作符：乘法(*)，除法(/ )，加法(+)和减法(-)。
////
////例如，clumsy(10) = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1。然而，这些运算仍然使用通常的算术运算顺序：我们在任何加、减步骤之前执行所有的乘法和除法步骤，并且按从左到右处理乘法和除法步骤。
////
////另外，我们使用的除法是地板除法（floor division），所以 10 * 9 / 8 等于 11。这保证结果是一个整数。
////
////实现上面定义的笨函数：给定一个整数 N，它返回 N 的笨阶乘。
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//
////先做一个比较无脑的版本，四个一组，分别计算，算完之后把剩下的算了
//class Solution {
//public:
//	int clumsy(int N) {
//		if (N <= 4)
//		{
//			if (N == 1) return 1;
//			if (N == 2) return 2;
//			if (N == 3) return 6;
//			if (N == 4) return 7;
//		}
//		int sum= N * (N - 1) / (N - 2) + N - 3;
//		
//		while (N>=4)
//		{
//			sum = sum + cla(N-4);
//			N = N - 4;
//			
//		}
//		return sum;
//	}
//
//	int cla(int N) {
//		if (N < 4 )
//		{
//			if (N == 1) return -1;
//			if (N == 2) return -2;
//			if (N == 3) return -6;
//			if (N == 0) return 0;
//		}
//		return (-1)* N * (N - 1) / (N - 2) + N - 3;
//	}
//};
//
////注意，这不是递归！这不是！！
//class Solution2 {
//public:
//	int clumsy(int N) {
//		if (N <=2) return N;
//		if (N == 3) return 6;
//
//		int sum = N * (N - 1) / (N - 2) + N - 3;
//		N = N - 4;
//		while (N >= 4)
//		{		
//			sum = sum -N*(N-1)/(N-2)+N-3;
//			N = N - 4;
//		}
//
//		if (N <=2)  sum=sum- N;
//		if (N == 3) sum=sum- 6;
//
//		return sum;
//	}
//};
//class Solution3 {
//public:
//	int clumsy(int N) {
//		stack<int> s1;
//		int sum=0;
//		int index = 0;
//
//		s1.push(N);
//		N--;
//
//		while (N>0)
//		{
//			
//			if (index % 4 == 0) s1.top()*=N;
//			if (index % 4 == 1) s1.top()/=N;
//			if (index % 4 == 2) s1.push(N);
//			if (index % 4 == 3) s1.push(-N);
//			index++;	
//			N--;
//		}
//
//		while (!s1.empty())
//		{
//			sum = sum + s1.top();
//			s1.pop();
//		}
//
//		return sum;
//	}
//
//};
//
//
//
//
//int main() {
//
//	int num = 8;
//	Solution3 s1;
//	cout<<s1.clumsy(num)<<endl;
//
//	system("pause");
//	return 0;
//}
//
//
//
