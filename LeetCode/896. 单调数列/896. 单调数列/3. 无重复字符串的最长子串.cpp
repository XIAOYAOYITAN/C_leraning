//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//
////�뷨����̬����
//class Solution1 {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int windoes_length = 1;
//		int windoes_length_max = 0;
//		int i = 0;
//		//�쳣���
//		if (s.size() < 2) return s.size();
//		int sublength;
//		while (i+windoes_length<s.size())
//		{
//			string s_tmp = s.substr(i, windoes_length);//���ڵ��ַ���
//			int pos = i+s_tmp.find(s[i + windoes_length]);
//			if (pos==i+s.npos)//�µ��ַ�����ԭ���Ӵ�����󴰵ĳ��ȣ����µ��ַ�����ȥ
//			{
//				windoes_length++;
//			}
//			else//�µ��ַ���ԭ�д���,�ҵ��ظ���λ�ã����ĳ��ȹ�1�����¼����µĳ���
//			{
//				i = pos + 1;
//				windoes_length_max = max(windoes_length,windoes_length_max);
//				windoes_length = 1;
//			}
//		}
//		return max(windoes_length,windoes_length_max);
//	}
//};
//
////��������
//class Solution2 {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int i = 0;//��ָ��
//		int j = 1;//��ָ��
//		int max_length = 0;
//		set<char> set_char;
//		set_char.insert(s[i]);
//		//�쳣���
//		if (s.size() < 2) return s.size();
//		while (j < s.size())
//		{
//			while (!set_char.insert(s[j]).second) //����ʧ��
//			{
//				set_char.erase(s[i]);
//				i++;
//			}
//			//����ɹ�
//			j++;
//			max_length = max((int)set_char.size(),max_length);
//		}
//		return max_length;
//	}
//};
//
//
//
//int main() {
//	string string1 =  "abcabcbb";
//	Solution2 s1;
//	cout<<s1.lengthOfLongestSubstring(string1);
//
//	system("pause");
//	return 0;
//}