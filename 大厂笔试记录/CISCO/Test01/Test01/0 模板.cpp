/********************************************************************
1. ��Ŀ��Դ��https://www.nowcoder.com/question/next?pid=20895625&qid=806393&tid=44181712

2. ԭ��
SIP is an important protcoal of IP Phone, it could be configed with some special information to display. huntPilot URI is one kind of, and  IP phone will catch and display alert name for third party calling if there is huntPilotName configed in  huntPilot URI.

HuntPilot URI Samples:
huntpiloturi = "<sip:10000@172.16.130.42>;"                                                 alertName=
huntpiloturi = " "<sip:10000@172.16.130.42>;                                                alertName=
huntpiloturi = "huntpilotname<sip:10000@172.16.130.42>";                           alertName=huntpilotname
huntpiloturi = "huntpilotname��<sip:10000@172.16.130.42>;                           alertName=huntpilotname
huntpiloturi = "%22huntpilotname%22<sip:10000@172.16.130.42>";            alertName=huntpilotname
huntpiloturi = "%22huntpilot%22name%22"<sip:10000@172.16.130.42>;     alertName=huntpilot%22name

��������:
String with URI information

�������:
String

��������1:
"Cisco<sip:10000@172.16.130.42>"

�������1:
Cisco

��������2:
"%22Cisco%22"<sip:10000@172.16.130.42>

�������2:
Cisco

3. ���ࣺ

4. ����Ҫ�㣺�ַ�����ƥ�䣬�Լ�ʵ�ֱȽ��鷳������ʹ��string.find

**********************************************************************/

/*************************ͷ�ļ�*****************************/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
#include <string>
using namespace std;

/*************************ʵ�ֺ���*****************************/

/*************************main���� �������*****************************/
int main() {

	//����
	string in;
	cin >> in;
	auto it = in.find("< sip:");
	string huntpilotname(in.begin(), in.begin()+it);


	system("pause");
	return 0;
}