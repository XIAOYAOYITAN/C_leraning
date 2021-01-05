//#include <iostream>
//using namespace std;
//
//template<typename T>
//void myswap(T &a, T &b) {
//
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename T>
//void mysort(T array[], int len) {
//
//	//由大到小排序
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i+1; j < len; j++)
//		{
//			
//			if (array[j] > array[max])
//			{
//				max = j;
//			}
//
//		}
//		if (max != i) {
//			myswap(array[max], array[i]);
//		}
//
//	}
//}
//
//template<typename T>
//void printArray(T array[], int len) {
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i] << " ";
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "bdcfeagh";
//	int num = sizeof(charArr) / sizeof(char);
//	mysort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
//	int num = sizeof(intArr) / sizeof(int);
//	mysort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}