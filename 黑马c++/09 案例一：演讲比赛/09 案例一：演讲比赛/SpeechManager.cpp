#include<iostream>
using namespace std;
#include"SpeechManager.h"
#include <string>

//构造函数
SpeechManager::SpeechManager() {
	//初始化属性
	this->SpeakerInit();

	//创建并初始化演讲者
	this->createSpeakers();

}

//析构函数
SpeechManager::~SpeechManager() {


}

//显示初始菜单
void SpeechManager::showMenu() {

	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//退出系统
void SpeechManager::ExitSystem() {

	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//成员属性初始化
void SpeechManager::SpeakerInit() {

	//初始化容器
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m_speaker.clear();

	//初始化轮数
	this->m_Index = 1;

}

//创建选手，进行姓名，编号，成绩的初始化
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

		//选手编号
		this->v1.push_back(10001 + i);

		//生成演讲者和编号之间的键值对，用于根据编号排序和找人
		this->m_speaker.insert(make_pair(i + 10001, sp));

	}
	//打印测试代码
	//for (map<int, speaker>::iterator it = m_speaker.begin(); it != m_speaker.end(); it++) {
	//
	//	cout << " 演讲者编号：" << it->first << " 演讲者姓名：" << it->second.m_name
	//		<< " 演讲者分数" << it->second.m_score[0] << endl;
	//}

}

//抽签函数
void SpeechManager::speakerDraw() {
	cout << "-----------第<<" << this->m_Index << ">>轮选手正在抽签---------" << endl;
	if (this->m_Index == 1)
	{
		//第一轮比赛
		cout << "-------------第<<" << this->m_Index << ">>轮比赛的顺序是--------------" << endl;
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//第二轮比赛
		cout << "-------------第<<" << this->m_Index << ">>轮比赛的顺序是--------------" << endl;
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}

//开始比赛
void SpeechManager::speakerContest() {

	cout << "--------------第<<" << this->m_Index << ">>轮比赛正式开始--------------" << endl;

	//创建一个临时容器用来存放每轮比赛的数据,first分数，second是选手编号,按照选手编号排序
	multimap<double, int, greater<int>> groupscore;
	vector<int> v;

	//分组标识
	int num=0;

	//根据比赛的轮数确定使用哪组编号
	if (this->m_Index == 1) {
		//第一轮比赛
		v = this->v1;
	}
	else {
		//第二轮比赛
		v = this->v2;
	}

	//每一位选手分别上台，就是遍历一遍
	for (vector<int>::iterator it= v.begin();it!=v.end();it++) 
	{

		//每遍历一次增加
		num++;

		//建一个双端数组，用于存放每一位裁判给选手的分数
		//为什么用双端数组？方便排序，方便去掉第一个和最后一个
		deque<double> d;

		//评委打分		
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//600~1000/10=60到100
			d.push_back(score);
			//测试：输出一下分数看看
			//cout << score << " ";
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);//累加求总值
		const double avg = sum / d.size();

		//将平均分保存到数组中
		this->m_speaker[*it].m_score[m_Index - 1] = avg;

		//将分数暂存到小组的分数记录中，进行排序
		groupscore.insert(make_pair(avg,(*it)));

		//cout << " 演讲者编号：" << it->first << " 演讲者姓名：" << it->second.m_name
		//	 << " 演讲者分数: " << it->second.m_score[this->m_Index - 1] << endl;

		//取前三名
		int count = 0;
		

		//分组，6个人为一组	
		if (num % 6 == 0)//有六个人演讲完毕
		{
			cout << "第" << num / 6 << "小组比赛名次：" << endl;
			for (multimap<double, int, greater<int>>::iterator git = groupscore.begin(); git != groupscore.end(); git++)
			{
				
				cout << "编号：" << git->second << " 姓名：" << this->m_speaker[git->second].m_name
					<< "成绩：" << this->m_speaker[git->second].m_score[this->m_Index - 1] << endl;
				//把分数前三名的保存到下一轮的参加者名单
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
	cout << "--------------第<<" << this->m_Index << ">>轮比赛结束--------------" << endl;
	system("pause");
}

//显示比赛分数
void SpeechManager::showScore() {
	cout << "--------------第<<" << this->m_Index << ">>轮晋级名单如下：--------------" << endl;
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
		cout << "选手编号:" << *it << "姓名：" << this->m_speaker[*it].m_name << "得分："
			<< this->m_speaker[*it].m_score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->showMenu();
}

//保存分数
void SpeechManager::saveRecord() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//用输出的方式打开文件，追加形式

	//将每个人的数据写到文件中
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) {
	
		ofs << *it << "," << this->m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	//关闭文件
	ofs.close();

	cout << "记录已保存" << endl;
}

//查看记录
void SpeechManager::loadRecord() {

	ifstream ifs;
	ifs.open("speech.csv", ios::in);//输入流对象 读取文件
	if (!ifs.is_open()) {
		this->fileisEmpty = true;
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof()) {
	
		cout << "文件为空" << endl;
		this->fileisEmpty = true;
		ifs.close();
		return;
	}

	//如果文件不为空
	this->fileisEmpty = false;

	ifs.putback(ch);//读取的单个字符放回去

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
		cout << "第" << i + 1 << "届 " <<
			"冠军编号：" << this->m_Record[i][0] << " 得分：" << this->m_Record[i][1] << " "
			"亚军编号：" << this->m_Record[i][2] << " 得分：" << this->m_Record[i][3] << " "
			"季军编号：" << this->m_Record[i][4] << " 得分：" << this->m_Record[i][5] << endl;

	}
	system("pause");
	system("cls");
}

//清空记录
void SpeechManager::clearRecord() {
	cout << "确认清空？" << endl;
	cout << "1. 确认" << endl;
	cout << "2. 返回" << endl;

	int select = 0;
	cin >> select;
	if (select==1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		cout << "清空成功" << endl;

	}
	system("pause");
	system("cls");

}