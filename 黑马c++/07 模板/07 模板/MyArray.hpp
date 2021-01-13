//#pragma once
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//template <class T>
//class MyArray {
//public:
//	//���캯��
//	MyArray(int capacity){
//		/*cout << "���캯������" << endl;*/
//		this->m_capacity = capacity;
//		this->m_size = 0;
//		this->m_address = new T[capacity];		
//	}
//
//	//��������
//	~MyArray() {
//		//cout << "������������" << endl;
//		if (this->m_address != NULL)
//		{
//			delete[] this->m_address;
//			this->m_address = NULL;
//			this->m_capacity = 0;
//			this->m_size = 0;
//		}
//	}
//
//
//	//�������캯��
//	MyArray(const MyArray &arr) {
//		/*cout << "�������캯������" << endl;*/
//		this->m_capacity = arr.m_capacity;
//		this->m_size = arr.m_size;
//		this->m_address = new T[arr.m_capacity];
//		for (int i = 0; i < arr.m_size; i++) {
//			this->m_address[i] = arr.m_address[i];
//		}
//	}
//
//
//	//operation=�Զ���
//	MyArray& operator = (const MyArray& myarray) {
//	
//		/*cout << "operator=����" << endl;*/
//		//operator=�ض���
//		if (this->m_address != NULL)
//		{
//			delete[] this->m_address;
//			this->m_capacity = 0;
//			this->m_size = 0;
//		}
//
//		this->m_capacity = myarray.m_capacity;
//		this->m_size = myarray.m_size;
//		this->m_address = new T[myarray.m_capacity];
//		for (int i = 0; i < myarray.m_size; i++) {
//			this->m_address[i] = myarray.m_address[i];
//		}
//		return *this;
//	}
//
//	//�����±����[]�Զ���
//	T& operator [] (int val) {
//		return this->m_address[val];//������Խ��
//	}
//
//	//β�巨
//	void Push_Back(T &val) {
//		//���ж������ǲ�������
//		if (this->m_capacity == this->m_size) {
//			return;
//		}
//		this->m_address[this->m_size] = val;
//		this->m_size++;
//	}
//
//	//βɾ��
//	void Pop_Back() {
//	
//		if (this->m_size == 0) {
//			return;
//		}
//		this->m_size--;
//	}
//	
//	//���ش�С
//	int get_size() {
//		return this->m_size;
//	}
//
//	//��������
//	int get_capacity() {
//		return this->m_capacity;
//	}
//
//private:
//	T * m_address;//����ָ����׵�ַ
//	int m_capacity;//���������,���֧�ֵ�Ԫ�ظ���
//	int m_size;//Ԫ�صĸ���
//
//};