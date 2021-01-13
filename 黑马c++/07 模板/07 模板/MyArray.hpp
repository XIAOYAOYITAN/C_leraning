//#pragma once
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//template <class T>
//class MyArray {
//public:
//	//构造函数
//	MyArray(int capacity){
//		/*cout << "构造函数调用" << endl;*/
//		this->m_capacity = capacity;
//		this->m_size = 0;
//		this->m_address = new T[capacity];		
//	}
//
//	//析构函数
//	~MyArray() {
//		//cout << "析构函数调用" << endl;
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
//	//拷贝构造函数
//	MyArray(const MyArray &arr) {
//		/*cout << "拷贝构造函数调用" << endl;*/
//		this->m_capacity = arr.m_capacity;
//		this->m_size = arr.m_size;
//		this->m_address = new T[arr.m_capacity];
//		for (int i = 0; i < arr.m_size; i++) {
//			this->m_address[i] = arr.m_address[i];
//		}
//	}
//
//
//	//operation=自定义
//	MyArray& operator = (const MyArray& myarray) {
//	
//		/*cout << "operator=调用" << endl;*/
//		//operator=重定义
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
//	//数组下标访问[]自定义
//	T& operator [] (int val) {
//		return this->m_address[val];//不考虑越界
//	}
//
//	//尾插法
//	void Push_Back(T &val) {
//		//先判断数组是不是满了
//		if (this->m_capacity == this->m_size) {
//			return;
//		}
//		this->m_address[this->m_size] = val;
//		this->m_size++;
//	}
//
//	//尾删法
//	void Pop_Back() {
//	
//		if (this->m_size == 0) {
//			return;
//		}
//		this->m_size--;
//	}
//	
//	//返回大小
//	int get_size() {
//		return this->m_size;
//	}
//
//	//返回容量
//	int get_capacity() {
//		return this->m_capacity;
//	}
//
//private:
//	T * m_address;//数组指向的首地址
//	int m_capacity;//数组的容量,最大支持的元素个数
//	int m_size;//元素的个数
//
//};