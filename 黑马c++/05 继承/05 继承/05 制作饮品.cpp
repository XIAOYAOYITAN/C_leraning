#include <iostream>
using namespace std;

class AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//��������
	virtual void PutSomething() = 0;

	//�涨����
	void MakeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}

};

class coffee :public AbstractDrinking {
	//��ˮ
	void Boil() {
		cout << "��ˮ" << endl;
	}

	//����
	void Brew() {
		cout << "���뿧��" << endl;
	}

	//���뱭��
	void PourInCup() {
		cout << "���뱭��" << endl;
	}

	//��������
	void PutSomething() {
		cout << "����èʺ" << endl;
	
	}
};

class tea :public AbstractDrinking {
	//��ˮ
	void Boil() {
		cout << "��ˮ" << endl;
	}

	//����
	void Brew() {
		cout << "�����Ҷ" << endl;
	}

	//���뱭��
	void PourInCup() {
		cout << "���뱭��" << endl;
	}

	//��������
	void PutSomething() {
		cout << "�������" << endl;

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