///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/valid-number/
//
//2. ԭ��
//65. ��Ч����
//��Ч���֣���˳�򣩿��Էֳ����¼������֣�
//
//һ�� С�� ���� ����
//����ѡ��һ�� 'e' �� 'E' ���������һ�� ����
//С������˳�򣩿��Էֳ����¼������֣�
//
//����ѡ��һ�������ַ���'+' �� '-'��
//������ʽ֮һ��
//����һλ���֣��������һ���� '.'
//����һλ���֣��������һ���� '.' �������ٸ�������һλ����
//һ���� '.' �������������һλ����
//��������˳�򣩿��Էֳ����¼������֣�
//
//����ѡ��һ�������ַ���'+' �� '-'��
//����һλ����
//������Ч�����о����£�
//
//["2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789"]
//������Ч�����о����£�
//
//["abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53"]
//����һ���ַ��� s ����� s ��һ�� ��Ч���� ���뷵�� true ��
//
//ʾ�� 1��
//
//���룺s = "0"
//�����true
//ʾ�� 2��
//
//���룺s = "e"
//�����false
//ʾ�� 3��
//
//���룺s = "."
//�����false
//ʾ�� 4��
//
//���룺s = ".1"
//�����true
//
//��ʾ��
//
//1 <= s.length <= 20
//s ����Ӣ����ĸ����д��Сд�������֣�0-9�����Ӻ� '+' ������ '-' �����ߵ� '.' ��
//
//3. ���ࣺ����״̬�Զ���
//
//4. ����˼·��������ɶѽ��
//��ͷ�������ۣ������ļ�ֵ����
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
//class Solution {
//public:
//	//����״̬
//	enum State {
//		STATE_INITIAL,
//		STATE_INT_SIGN,
//		STATE_INTEGER,
//		STATE_POINT,
//		STATE_POINT_WITHOUT_INT,
//		STATE_FRACTION,
//		STATE_EXP,
//		STATE_EXP_SIGN,
//		STATE_EXP_NUMBER,
//		STATE_END
//	};
//
//	//�ַ�����
//	enum CharType {
//		CHAR_NUMBER,
//		CHAR_EXP,
//		CHAR_POINT,
//		CHAR_SIGN,
//		CHAR_ILLEGAL
//	};
//
//	CharType toCharType(char ch) {
//		if (ch >= '0' && ch <= '9') {
//			return CHAR_NUMBER;
//		}
//		else if (ch == 'e' || ch == 'E') {
//			return CHAR_EXP;
//		}
//		else if (ch == '.') {
//			return CHAR_POINT;
//		}
//		else if (ch == '+' || ch == '-') {
//			return CHAR_SIGN;
//		}
//		else {
//			return CHAR_ILLEGAL;
//		}
//	}
//
//	bool isNumber(string s) {
//		//����һ����������Ϊ�в��Ҳ�����������map��������ǰ״̬���������������ͺ��ɵ�״̬
//		unordered_map<State, unordered_map<CharType, State>> transfer{
//			{
//				STATE_INITIAL, {
//					{CHAR_NUMBER, STATE_INTEGER},
//					{CHAR_POINT, STATE_POINT_WITHOUT_INT},
//					{CHAR_SIGN, STATE_INT_SIGN}
//				}
//			}, {
//				STATE_INT_SIGN, {
//					{CHAR_NUMBER, STATE_INTEGER},
//					{CHAR_POINT, STATE_POINT_WITHOUT_INT}
//				}
//			}, {
//				STATE_INTEGER, {
//					{CHAR_NUMBER, STATE_INTEGER},
//					{CHAR_EXP, STATE_EXP},
//					{CHAR_POINT, STATE_POINT}
//				}
//			}, {
//				STATE_POINT, {
//					{CHAR_NUMBER, STATE_FRACTION},
//					{CHAR_EXP, STATE_EXP}
//				}
//			}, {
//				STATE_POINT_WITHOUT_INT, {
//					{CHAR_NUMBER, STATE_FRACTION}
//				}
//			}, {
//				STATE_FRACTION,
//				{
//					{CHAR_NUMBER, STATE_FRACTION},
//					{CHAR_EXP, STATE_EXP}
//				}
//			}, {
//				STATE_EXP,
//				{
//					{CHAR_NUMBER, STATE_EXP_NUMBER},
//					{CHAR_SIGN, STATE_EXP_SIGN}
//				}
//			}, {
//				STATE_EXP_SIGN, {
//					{CHAR_NUMBER, STATE_EXP_NUMBER}
//				}
//			}, {
//				STATE_EXP_NUMBER, {
//					{CHAR_NUMBER, STATE_EXP_NUMBER}
//				}
//			}
//		};
//
//		int len = s.length();
//		State st = STATE_INITIAL;//״̬�����ǳ�ʼ״̬
//
//		for (int i = 0; i < len; i++) {
//			CharType typ = toCharType(s[i]);//�ѵ�ǰ����ת������������
//			if (transfer[st].find(typ) == transfer[st].end()) {//�Ҳ�����������ζ����������
//				return false;
//			}
//			else {
//				st = transfer[st][typ];
//			}
//		}
//		//���ܵĽ���״̬
//		return st == STATE_INTEGER || st == STATE_POINT || st == STATE_FRACTION || st == STATE_EXP_NUMBER || st == STATE_END;
//	}
//};
//
///*************************main���� �������*****************************/
//int main() {
//	string s = ".";
//	Solution S;
//	cout<<S.isNumber(s);
//
//
//	system("pause");
//	return 0;
//}