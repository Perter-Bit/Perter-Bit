#include<iostream>
using namespace std;
//7.1.2 ����ϰ
//��ϰ 7.2:���� 2.6.2 �ڵ���ϰ(�� 67 ҳ��)�б�д��һ�� Sales_data �࣬������������ combine �� isbn ��Ա��
//class Sales_data
//{
//private:
//	string bookno;//�鼮���,��ʽ��ʼ��Ϊ�մ�
//	unsigned units_sold = 0;//����������ʾ��ʼ��Ϊ0
//	double sellingprice = 0.0;//ԭʼ�۸�,��ʼ��Ϊ0.0
//	double sellprice = 0.0;//ʵ�ۼ۸�,��ʼ��Ϊ0.0
//	double discount = 0.0;//�ۿ�
//public:
//	string isbn() { return bookno; };
//	Sales_data& combine(const Sales_data s1)
//	{
//		this->units_sold += s1.units_sold;//���������
//		sellprice = (s1.sellprice * s1.units_sold + sellprice * units_sold) / (units_sold + s1.units_sold);//���¼������۵���
//		if (sellingprice != 0)
//		{
//			discount = sellprice / sellingprice;//���¼����ۿ�
//		}
//		return *this;
//	}
//}
//��ϰ 7.4 : ��дһ����Ϊ Person ���࣬ ʹ���ʾ��Ա��������סַ��ʹ�� string ��
//������ЩԪ�أ�����������ϰ�����ϳ�ʵ����������������
class Person
{
private:
	string name;
	string address;
public:
	string name() const{ return this->name; };
	string address() const{ return this->address; };
};