////�Լ���ͨ����
//#pragma once
//#include<iostream>
//using namespace std;
//template<class T>
//class MyArray
//{
//public:
//	//�вι��� ���� ����
//	MyArray(int capacity)
//	{
//		this->m_Capacity = capacity;
//		this->m_Size = 0;
//		this->pAddress = new T[this->m_Capacity];
//		//cout << "�����в�" << endl;
//	}
//	//��������
//	MyArray(const MyArray& arr)
//	{
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		//���
//		this->pAddress = new T[arr.m_Capacity];
//		//��arr�е����ݶ���������
//		for (int i = 0;i < this->m_Size;i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//		//cout << "���ǿ���" << endl;
//	}
//	//operator=����ǳ��������
//	MyArray& operator=(const MyArray& arr)
//	{
//		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
//		if (this->m_Capacity != NULL)
//		{
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//			this->m_Capacity = 0;
//			this->m_Size = 0;
//		}
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		//���
//		this->pAddress = new T[arr.m_Capacity];
//		//��arr�е����ݶ���������
//		for (int i = 0;i < this->m_Size;i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//		return *this;
//	}
//	//��������
//	~MyArray()
//	{
//		if (this->m_Capacity != NULL)
//		{
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//		}
//		//cout << "��������" << endl;
//	}
//	//β�巨
//	void Push_Back(const T &val)
//	{
//		//�ж��Ƿ�����
//		if (this->m_Capacity == this->m_Size)
//		{
//			cout << "��������" << endl;
//			return;
//		}
//		this->pAddress[this->m_Size] = val;
//		this->m_Size++;
//	}
//	//βɾ��
//	void Pop_Back()
//	{
//		if (this->m_Size == 0)
//		{
//			return;
//		}
//		this->m_Size--;
//	}
//	//ͨ���±귽ʽ��������
//	//����[]
//	T& operator[](int index)
//	{
//		return this->pAddress[index];
//	}
//	//������������
//	int getCapacity()
//	{
//		return this->m_Capacity;
//	}
//	//���������С
//	int getSize()
//	{
//		return this->m_Size;
//	}
//private:
//	T* pAddress;//ָ��ָ��������ٵ���ʵ����
//	int m_Capacity;//��������
//	int m_Size;//�����С
//};