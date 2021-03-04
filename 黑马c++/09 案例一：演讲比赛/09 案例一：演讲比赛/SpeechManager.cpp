#include<iostream>
using namespace std;
#include"SpeechManager.h"
#include <string>

//���캯��
SpeechManager::SpeechManager() {
	//��ʼ������
	this->SpeakerInit();

	//��������ʼ���ݽ���
	this->createSpeakers();

}

//��������
SpeechManager::~SpeechManager() {


}

//��ʾ��ʼ�˵�
void SpeechManager::showMenu() {

	cout << "********************************************" << endl;
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void SpeechManager::ExitSystem() {

	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��Ա���Գ�ʼ��
void SpeechManager::SpeakerInit() {

	//��ʼ������
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m_speaker.clear();

	//��ʼ������
	this->m_Index = 1;

}

//����ѡ�֣�������������ţ��ɼ��ĳ�ʼ��
void SpeechManager::createSpeakers() {
	string nameseed = "ABCDEFGHIJKL";
	for (int i = 0; i < 12; i++)
	{
		string name;
		name += nameseed[i];
		speaker sp;
		sp.m_name = name;
		sp.m_score[0] = 0;
		sp.m_score[1] = 0;

		//ѡ�ֱ��
		this->v1.push_back(10001 + i);

		//�����ݽ��ߺͱ��֮��ļ�ֵ�ԣ����ڸ��ݱ�����������
		this->m_speaker.insert(make_pair(i + 10001, sp));

	}
	//��ӡ���Դ���
	//for (map<int, speaker>::iterator it = m_speaker.begin(); it != m_speaker.end(); it++) {
	//
	//	cout << " �ݽ��߱�ţ�" << it->first << " �ݽ���������" << it->second.m_name
	//		<< " �ݽ��߷���" << it->second.m_score[0] << endl;
	//}

}

//��ǩ����
void SpeechManager::speakerDraw() {
	cout << "-----------��<<" << this->m_Index << ">>��ѡ�����ڳ�ǩ---------" << endl;
	if (this->m_Index == 1)
	{
		//��һ�ֱ���
		cout << "-------------��<<" << this->m_Index << ">>�ֱ�����˳����--------------" << endl;
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ��ֱ���
		cout << "-------------��<<" << this->m_Index << ">>�ֱ�����˳����--------------" << endl;
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}

//��ʼ����
void SpeechManager::speakerContest() {

	cout << "--------------��<<" << this->m_Index << ">>�ֱ�����ʽ��ʼ--------------" << endl;

	//����һ����ʱ�����������ÿ�ֱ���������,first������second��ѡ�ֱ��,����ѡ�ֱ������
	multimap<double, int, greater<int>> groupscore;
	vector<int> v;

	//�����ʶ
	int num=0;

	//���ݱ���������ȷ��ʹ��������
	if (this->m_Index == 1) {
		//��һ�ֱ���
		v = this->v1;
	}
	else {
		//�ڶ��ֱ���
		v = this->v2;
	}

	//ÿһλѡ�ֱַ���̨�����Ǳ���һ��
	for (vector<int>::iterator it= v.begin();it!=v.end();it++) 
	{

		//ÿ����һ������
		num++;

		//��һ��˫�����飬���ڴ��ÿһλ���и�ѡ�ֵķ���
		//Ϊʲô��˫�����飿�������򣬷���ȥ����һ�������һ��
		deque<double> d;

		//��ί���		
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//600~1000/10=60��100
			d.push_back(score);
			//���ԣ����һ�·�������
			//cout << score << " ";
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);//�ۼ�����ֵ
		const double avg = sum / d.size();

		//��ƽ���ֱ��浽������
		this->m_speaker[*it].m_score[m_Index - 1] = avg;

		//�������ݴ浽С��ķ�����¼�У���������
		groupscore.insert(make_pair(avg,(*it)));

		//cout << " �ݽ��߱�ţ�" << it->first << " �ݽ���������" << it->second.m_name
		//	 << " �ݽ��߷���: " << it->second.m_score[this->m_Index - 1] << endl;

		//ȡǰ����
		int count = 0;
		

		//���飬6����Ϊһ��	
		if (num % 6 == 0)//���������ݽ����
		{
			cout << "��" << num / 6 << "С��������Σ�" << endl;
			for (multimap<double, int, greater<int>>::iterator git = groupscore.begin(); git != groupscore.end(); git++)
			{
				
				cout << "��ţ�" << git->second << " ������" << this->m_speaker[git->second].m_name
					<< "�ɼ���" << this->m_speaker[git->second].m_score[this->m_Index - 1] << endl;
				//�ѷ���ǰ�����ı��浽��һ�ֵĲμ�������
				if (count<3)
				{
					count++;
					if (this->m_Index == 1) {
						v2.push_back(git->second);
					}
					else
					{
						v3.push_back(git->second);
					}
				}
			}			
			groupscore.clear();
			cout << endl;
		}

	}
	cout << "--------------��<<" << this->m_Index << ">>�ֱ�������--------------" << endl;
	system("pause");
}

//��ʾ��������
void SpeechManager::showScore() {
	cout << "--------------��<<" << this->m_Index << ">>�ֽ����������£�--------------" << endl;
	vector<int> v;
	if (this->m_Index == 1) {
		v = v2;
	}
	else
	{
		v = v3;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end();it++)
	{
		cout << "ѡ�ֱ��:" << *it << "������" << this->m_speaker[*it].m_name << "�÷֣�"
			<< this->m_speaker[*it].m_score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->showMenu();
}

//�������
void SpeechManager::saveRecord() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//������ķ�ʽ���ļ���׷����ʽ

	//��ÿ���˵�����д���ļ���
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) {
	
		ofs << *it << "," << this->m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	//�ر��ļ�
	ofs.close();

	cout << "��¼�ѱ���" << endl;
}

//�鿴��¼
void SpeechManager::loadRecord() {

	ifstream ifs;
	ifs.open("speech.csv", ios::in);//���������� ��ȡ�ļ�
	if (!ifs.is_open()) {
		this->fileisEmpty = true;
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof()) {
	
		cout << "�ļ�Ϊ��" << endl;
		this->fileisEmpty = true;
		ifs.close();
		return;
	}

	//����ļ���Ϊ��
	this->fileisEmpty = false;

	ifs.putback(ch);//��ȡ�ĵ����ַ��Ż�ȥ

	string data;
	int index = 0;
	while (ifs>>data)
	{
		/*cout << data << endl;*/
		vector<string> v;
		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1) {
				break;
			}
			string tmp = data.substr(start, pos - start);
			v.push_back(tmp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();

}

void SpeechManager::showRecord() {
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "��" << i + 1 << "�� " <<
			"�ھ���ţ�" << this->m_Record[i][0] << " �÷֣�" << this->m_Record[i][1] << " "
			"�Ǿ���ţ�" << this->m_Record[i][2] << " �÷֣�" << this->m_Record[i][3] << " "
			"������ţ�" << this->m_Record[i][4] << " �÷֣�" << this->m_Record[i][5] << endl;

	}
	system("pause");
	system("cls");
}

//��ռ�¼
void SpeechManager::clearRecord() {
	cout << "ȷ����գ�" << endl;
	cout << "1. ȷ��" << endl;
	cout << "2. ����" << endl;

	int select = 0;
	cin >> select;
	if (select==1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		cout << "��ճɹ�" << endl;

	}
	system("pause");
	system("cls");

}