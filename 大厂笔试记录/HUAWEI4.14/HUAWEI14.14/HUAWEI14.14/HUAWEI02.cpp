////�����ƶ����ݿ⣬�����������������Ϣ�ϱ����ƶˣ���������ÿ��0.5s����һ���ٶ����ݡ�
////
////�����ϱ���ÿ30s�ϱ�һ�Σ�������ĵ�һ���ٶȿ�ʼ���㣬��һ֡��Ҫ�ϱ���
////AEB���Զ������ƶ����ϱ����������ٶȱ���һ�����ɵ��ٶȼ�����9������ʱ����Ϊ����AEB���̣��������2s������AEB״̬������AEB�ϱ����ϱ������У�
////��1������AEB�����е������ٶ����ݣ�����AEBǰ2s�����ݺ�AEB������2s�����ݡ�
////��2���÷�Χ�ڵ�����������������Ѿ������ϱ������ݣ��ظ��ϱ�
////��3���������AEB�ϱ����������ص����ص������ϱ�һ�Ρ�
////������AEB�ϱ�����ʱ��������ͣ�����ϱ�������ʱ��ʹ���������ϱ�������Ҳ�����ϱ��ˡ���AEB�ϱ��������������������ϱ����µ����ڴ�AEB�ϱ������һ�����ݿ�ʼ���㡣
////�����������ٶ���Ϣ������ϱ����ƶ˵����ݡ�
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
