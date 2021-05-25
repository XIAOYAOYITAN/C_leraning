/********************************************************************
1. 题目来源：https://www.nowcoder.com/question/next?pid=20895625&qid=806393&tid=44181712

2. 原题
SIP is an important protcoal of IP Phone, it could be configed with some special information to display. huntPilot URI is one kind of, and  IP phone will catch and display alert name for third party calling if there is huntPilotName configed in  huntPilot URI.

HuntPilot URI Samples:
huntpiloturi = "<sip:10000@172.16.130.42>;"                                                 alertName=
huntpiloturi = " "<sip:10000@172.16.130.42>;                                                alertName=
huntpiloturi = "huntpilotname<sip:10000@172.16.130.42>";                           alertName=huntpilotname
huntpiloturi = "huntpilotname”<sip:10000@172.16.130.42>;                           alertName=huntpilotname
huntpiloturi = "%22huntpilotname%22<sip:10000@172.16.130.42>";            alertName=huntpilotname
huntpiloturi = "%22huntpilot%22name%22"<sip:10000@172.16.130.42>;     alertName=huntpilot%22name

输入描述:
String with URI information

输出描述:
String

输入例子1:
"Cisco<sip:10000@172.16.130.42>"

输出例子1:
Cisco

输入例子2:
"%22Cisco%22"<sip:10000@172.16.130.42>

输出例子2:
Cisco

3. 归类：

4. 解题要点：字符串的匹配，自己实现比较麻烦，建议使用string.find

**********************************************************************/

/*************************头文件*****************************/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
#include <string>
using namespace std;

/*************************实现函数*****************************/

/*************************main函数 输入输出*****************************/
int main() {

	//输入
	string in;
	cin >> in;
	auto it = in.find("< sip:");
	string huntpilotname(in.begin(), in.begin()+it);


	system("pause");
	return 0;
}