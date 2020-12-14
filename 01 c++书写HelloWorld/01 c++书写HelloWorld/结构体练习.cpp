#include <iostream>
using namespace std;
#include <string>

//1.定义结构体
//2.创建数组存放5个英雄的个人信息
//3.根据年龄进行升序排序
//4.将排序后的结果打印输出
struct Hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex;
};
//对英雄年龄进行升序冒泡排序
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age) {
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}

	}
};

void printHero(struct Hero heroArray[],int len) {

	for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << heroArray[i].name << "年龄：" << heroArray[i].age
			 << "性别： " << heroArray[i].sex << endl;
	}
}

int main(){
	//数组信息排序
	struct Hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//打印侧首
	//for (int i = 0; i < len; i++)
	//{
	//	cout << "姓名： " << heroArray[i].name << "年龄：" << heroArray[i].age
	//		<< "性别： " << heroArray[i].sex << endl;
	//}

	bubbleSort(heroArray,len);
	printHero(heroArray,len);

	system("pause");

	return 0;
}