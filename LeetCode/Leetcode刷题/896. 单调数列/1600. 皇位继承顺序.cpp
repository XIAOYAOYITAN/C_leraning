///********************************************************************
//1. ��Ŀ��Դ��https://leetcode-cn.com/problems/throne-inheritance/
//
//2. ԭ��
//1600. ��λ�̳�˳��
//һ��������ס�Ź��������ĺ����ǡ����������ǵȵȡ�ÿһ��ʱ��㣬�����ͥ�����˳���Ҳ����������
//
//���������һ����ȷ�涨�Ļ�λ�̳�˳�򣬵�һ�̳������ǹ����Լ������Ƕ���ݹ麯�� Successor(x, curOrder) ������һ���� x �͵�ǰ�ļ̳�˳�򣬸ú������� x ����һ�̳��ˡ�
//
//Successor(x, curOrder):
//	��� x û�к��ӻ������� x �ĺ��Ӷ��� curOrder �У�
//		��� x �ǹ�������ô���� null
//		���򣬷��� Successor(x �ĸ���, curOrder)
//	���򣬷��� x ���� curOrder �����곤�ĺ���
//�ȷ�˵�����������ɹ��������ĺ��� Alice �� Bob ��Alice �� Bob �곤���� Alice �ĺ��� Jack ��ɡ�
//
//һ��ʼ�� curOrder Ϊ ["king"].
//���� Successor(king, curOrder) ������ Alice ���������ǽ� Alice ���� curOrder �У��õ� ["king", "Alice"] ��
//���� Successor(Alice, curOrder) ������ Jack ���������ǽ� Jack ���� curOrder �У��õ� ["king", "Alice", "Jack"] ��
//���� Successor(Jack, curOrder) ������ Bob ���������ǽ� Bob ���� curOrder �У��õ� ["king", "Alice", "Jack", "Bob"] ��
//���� Successor(Bob, curOrder) ������ null �����յõ��̳�˳��Ϊ ["king", "Alice", "Jack", "Bob"] ��
//ͨ�����ϵĺ��������������ܵõ�һ��Ψһ�ļ̳�˳��
//
//����ʵ�� ThroneInheritance �ࣺ
//
//ThroneInheritance(string kingName) ��ʼ��һ�� ThroneInheritance ��Ķ��󡣹�����������Ϊ���캯���Ĳ������롣
//void birth(string parentName, string childName) ��ʾ parentName ��ӵ����һ����Ϊ childName �ĺ��ӡ�
//void death(string name) ��ʾ��Ϊ name ����������һ���˵���������Ӱ�� Successor ������Ҳ����Ӱ�쵱ǰ�ļ̳�˳�������ֻ������˱��Ϊ����״̬��
//string[] getInheritanceOrder() ���� ��ȥ ������Ա�ĵ�ǰ�̳�˳���б�
//
//
//ʾ����
//
//���룺
//["ThroneInheritance", "birth", "birth", "birth", "birth", "birth", "birth", "getInheritanceOrder", "death", "getInheritanceOrder"]
//[["king"], ["king", "andy"], ["king", "bob"], ["king", "catherine"], ["andy", "matthew"], ["bob", "alex"], ["bob", "asha"], [null], ["bob"], [null]]
//�����
//[null, null, null, null, null, null, null, ["king", "andy", "matthew", "bob", "alex", "asha", "catherine"], null, ["king", "andy", "matthew", "alex", "asha", "catherine"]]
//
//���ͣ�
//ThroneInheritance t= new ThroneInheritance("king"); // �̳�˳��king
//t.birth("king", "andy"); // �̳�˳��king > andy
//t.birth("king", "bob"); // �̳�˳��king > andy > bob
//t.birth("king", "catherine"); // �̳�˳��king > andy > bob > catherine
//t.birth("andy", "matthew"); // �̳�˳��king > andy > matthew > bob > catherine
//t.birth("bob", "alex"); // �̳�˳��king > andy > matthew > bob > alex > catherine
//t.birth("bob", "asha"); // �̳�˳��king > andy > matthew > bob > alex > asha > catherine
//t.getInheritanceOrder(); // ���� ["king", "andy", "matthew", "bob", "alex", "asha", "catherine"]
//t.death("bob"); // �̳�˳��king > andy > matthew > bob���Ѿ�ȥ����> alex > asha > catherine
//t.getInheritanceOrder(); // ���� ["king", "andy", "matthew", "alex", "asha", "catherine"]
//
//
//��ʾ��
//
//1 <= kingName.length, parentName.length, childName.length, name.length <= 15
//kingName��parentName�� childName �� name ������СдӢ����ĸ��
//���еĲ��� childName �� kingName ������ͬ��
//���� death �����е��������� name Ҫô�ǹ�����Ҫô���Ѿ������˵���Ա���֡�
//ÿ�ε��� birth(parentName, childName) ʱ��������������֤ parentName ��Ӧ����Ա�ǻ��ŵġ�
//������ 105 ��birth �� death ��
//������ 10 �� getInheritanceOrder ��
//
//3. ���ࣺ�Զ������ݽṹӦ���⣨��ҵ������
//
//4. ����Ҫ�㣺��λ�ļ̳�˳����һ����������̳�˳���Ƕ������������
//
//**********************************************************************/
//
///*************************ͷ�ļ�*****************************/
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
///*************************ʵ�ֺ���*****************************/
////class ThroneInheritance {
////public:
////	class person {
////	public:
////		string m_name;
////		bool m_status;
////		vector<person> m_son;
////		person(string name, bool status) {
////			m_name = name;
////			m_status = status;
////		}
////	};
////	ThroneInheritance(string kingName) {
////		person *root=new person(kingName,true);
////	}
////
////	void birth(string parentName, string childName) {
////
////	}
////
////	void death(string name) {
////
////	}
////
////	vector<string> getInheritanceOrder() {
////
////	}
////};
////��map��ʵ��
//class ThroneInheritance {
//public:
//	unordered_map<string, vector<string>> mp;
//	unordered_set<string> deaths;
//	string king;
//
//	ThroneInheritance(string kingName) {
//		king = kingName;
//		mp[kingName] = vector<string>();
//	}
//
//	void birth(string parentName, string childName) {
//		mp[parentName].push_back(childName);
//		mp[childName] = vector<string>();
//	}
//
//	void death(string name) {
//		deaths.insert(name);
//	}
//
//	vector<string> getInheritanceOrder() {
//		vector<string> out;
//		output(king,out);
//		return out;
//	}
//	void output(string curr, vector<string> &out) {
//		if (!deaths.count(curr)) {
//			out.push_back(curr);
//		}
//		for (auto it : mp[curr]) {
//			output(it,out);
//		}
//	}
//};
//
///**
// * Your ThroneInheritance object will be instantiated and called as such:
// * ThroneInheritance* obj = new ThroneInheritance(kingName);
// * obj->birth(parentName,childName);
// * obj->death(name);
// * vector<string> param_3 = obj->getInheritanceOrder();
// */
//
///*************************main���� �������*****************************/
//int main() {
//	ThroneInheritance *t = new ThroneInheritance("king");
//	t->birth("king", "andy"); // �̳�˳��king > andy
//	t->birth("king", "bob"); // �̳�˳��king > andy > bob
//	t->birth("king", "catherine"); // �̳�˳��king > andy > bob > catherine
//	t->birth("andy", "matthew"); // �̳�˳��king > andy > matthew > bob > catherine
//	t->birth("bob", "alex"); // �̳�˳��king > andy > matthew > bob > alex > catherine
//	t->birth("bob", "asha"); // �̳�˳��king > andy > matthew > bob > alex > asha > catherine
//	t->getInheritanceOrder(); // ���� ["king", "andy", "matthew", "bob", "alex", "asha", "catherine"]
//	t->death("bob"); // �̳�˳��king > andy > matthew > bob���Ѿ�ȥ����> alex > asha > catherine
//	t->getInheritanceOrder(); // ���� ["king", "andy", "matthew", "alex", "asha", "catherine"]
//
//	system("pause");
//	return 0;
//}