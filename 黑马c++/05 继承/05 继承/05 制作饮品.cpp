#include <iostream>
using namespace std;

class AbstractDrinking {
public:
	//烧水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入佐料
	virtual void PutSomething() = 0;

	//规定流程
	void MakeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}

};

class coffee :public AbstractDrinking {
	//烧水
	void Boil() {
		cout << "烧水" << endl;
	}

	//冲泡
	void Brew() {
		cout << "加入咖啡" << endl;
	}

	//倒入杯中
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}

	//加入佐料
	void PutSomething() {
		cout << "加入猫屎" << endl;
	
	}
};

class tea :public AbstractDrinking {
	//烧水
	void Boil() {
		cout << "烧水" << endl;
	}

	//冲泡
	void Brew() {
		cout << "加入茶叶" << endl;
	}

	//倒入杯中
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}

	//加入佐料
	void PutSomething() {
		cout << "加入枸杞" << endl;

	}
};

void doWork(AbstractDrinking *abd) {
	abd->MakeDrink();
	delete abd;

}


void test03() {
	doWork(new coffee);
	cout << "-----------------------" << endl;
	doWork(new tea);

}

//
//int main() {
//	test03();
//
//	system("pause");
//	return 0;
//}