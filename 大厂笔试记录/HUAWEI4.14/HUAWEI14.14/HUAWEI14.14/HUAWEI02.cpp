////建立云端数据库，汽车将自身的运行信息上报到云端，汽车自身每隔0.5s生成一次速度数据。
////
////周期上报：每30s上报一次，启动后的第一个速度开始计算，第一帧需要上报。
////AEB（自动紧急制动）上报：当汽车速度比上一次生成的速度减少了9及以上时，认为触发AEB流程，如果连续2s均保持AEB状态，触发AEB上报，上报内容有：
////（1）本次AEB过程中的所有速度数据，触发AEB前2s的数据和AEB结束后2s的数据。
////（2）该范围内的数据中如果包含了已经周期上报的数据，重复上报
////（3）如果两次AEB上报的数据有重叠，重叠数据上报一次。
////在满足AEB上报条件时会立刻暂停周期上报，即此时即使进入周期上报的周期也不再上报了。在AEB上报结束后重新启动周期上报，新的周期从AEB上报的最后一个数据开始计算。
////请根据输入的速度信息，输出上报到云端的内容。
//
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> ve(N);
//	int temp;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> temp;
//		ve[i] = temp;
//	}
//	vector<int> ans;
//	ans.push_back(ve[0]);
//	int i = 1, lastspeed = ve[0], count = 1, ABEflag = 0, ABEedge = 0;
//	while (i < N)
//	{
//		if (lastspeed - ve[i] >= 9)
//		{
//			ABEflag++;
//		}
//		else
//		{
//			if (ABEflag >= 4)
//			{
//				int l = max(ABEedge, i - ABEflag - 4);
//				int r = min(N - 1, i + 3);
//				for (int jj = l; jj <= r; jj++)
//					ans.push_back(ve[jj]);
//				ABEedge = i + 4;
//				count = -3;
//			}
//			ABEflag = 0;
//
//		}
//		if (count == 60 && ABEflag < 4)
//		{
//			ans.push_back(ve[i]);
//			count = 0;
//		}
//		lastspeed = ve[i]; i++; count++;
//
//	}
//
//
//	if (ABEflag >= 4)
//	{
//		int l = max(ABEedge, i - ABEflag - 4);
//		int r = min(N - 1, i + 3);
//		for (int jj = l; jj <= r; jj++)
//			ans.push_back(ve[jj]);
//	}
//
//
//	int numcc = ans.size() - 1;
//	for (int luo = 0; luo < numcc; luo++)
//		cout << ans[luo] << ',';
//	cout << ans[numcc] << endl;
//	return 0;
//}
//
//
