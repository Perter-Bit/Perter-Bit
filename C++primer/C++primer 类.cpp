#include<iostream>
#include<string>
using namespace std;
//7.1.3 ����ϰ
//��ϰ 7.6:���ں��� add��read��print���������Լ��İ汾��
class Sales_data
{
	friend Sales_data add(const Sales_data& rh1, const Sales_data& rh2);
	friend istream& read(istream& is, Sales_data rhs);
	friend ostream& print(ostream& os, const Sales_data s);
	//����Ϊ��Ԫ��ʹ���Ա�Ϊ��privateҲ�ǿ��Է��ʵ�
public:
	double avg_price()const;//���ڲ��ĳ�Ա����Ĭ����������(��ʽ����)
	//{
	//	if (units_sold)//����������
	//	{
	//		return revenue / units_sold;
	//	}
	//	else
	//	{
	//		return 0;
	//	}
	//}
	//ʹ��ί�й��캯����д
	/*Sales_data(const string& bookNo, const unsigned num, const double sellp, const double salep) : bookno(bookNo), units_sold(num), saleprice(sellp), sellingprice(salep)
	{
		if (sellingprice != 0)
		{
			discount = saleprice / sellingprice;
		}
	}
	Sales_data(const string& bookno) : Sales_data(bookno, 0, 0, 0)
	{
		cout << "�����û�����������Ϣ" << endl;
	}
	Sales_data() : Sales_data("", 0, 0, 0)
	{
		cout << "û���յ��κ���Ϣ" << endl;
	}
	Sales_data(std::istream &is) : Sales_data()
	{
		read(is, *this);
		cout << "�����û��������Ϣ" << endl;
	}*/
	Sales_data() = default;//Ĭ�Ϲ��캯��
	Sales_data(const string& bookNo) : bookno(bookNo) {};
	Sales_data(const string& bookNo, const unsigned num, const double sellp, const double salep) : bookno(bookNo), units_sold(num), saleprice(sellp), sellingprice(salep)
	{
		if (sellingprice != 0)
		{
			discount = saleprice / sellingprice;
		}
	}
	Sales_data(const string& bookNo, const unsigned num, const double sellp, const double salep, const string discount) : bookno(bookNo), 
		units_sold(0), saleprice(0), sellingprice(0), discount(0) {};
	Sales_data(istream& is);
	string isbn() const{ return this->bookno; };
	Sales_data& combine(const Sales_data& s1);
	string bookno;//�鼮���
	unsigned units_sold = 0;//������
	double revenue = 0.0;//��������
	double discount = 0.0;
	double saleprice = 0.0;//ʵ���۳��۸�
	double sellingprice = 0.0;//ԭʼ�۸�
};
inline double Sales_data::avg_price() const
{
	if (units_sold)//����������
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}
}
//Sales_data::Sales_data(istream &is)//û����д
//{
//	is >> *this;
//}
Sales_data& Sales_data::combine(const Sales_data& s1)
{
	units_sold += s1.units_sold;
	saleprice = (s1.sellingprice * s1.units_sold + sellingprice * units_sold) / (s1.units_sold + units_sold);//�ϲ����ƽ��ʵ�����ۼ۸�
	if (sellingprice != 0)//ԭʼ�۸�Ϊ0�������ۿ�
	{
		discount = saleprice / sellingprice;//ԭʼ�۸���һ����.
	}
}
Sales_data add(const Sales_data& rh1, const Sales_data& rh2)
{
	Sales_data sum = rh1;
	sum.combine(rh2);
	return sum;
}
istream& read(istream& is, Sales_data rhs)//��ȡrhs����Ϣ��is����
{
	is >> rhs.bookno >> rhs.units_sold >> rhs.sellingprice >> rhs.saleprice;
	return is;
}
ostream& print(ostream& os, const Sales_data s)
{
	os << s.isbn() << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount << " " << endl;
}
//��ϰ 7.7 : ʹ����Щ�º�����д 7.1.2 ��(�� 233 ҳ)��ϰ�еĽ��״������
//���״������
int main()
{
	cout << "�����뽻�׼�¼:(ISBN����������ԭ�ۡ�ʵ���ۼ�)" << endl;
	Sales_data total;
	if (read(cin,total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (trans.bookno == total.bookno)
			{
				total = add(total,trans);
			}
			else
			{
				print(cout,total);
				total = trans;
			}
		}
		print(cout, trans);
		cout << endl;
	}
	else
	{
		cout << "�����������������¼��" << endl;
	}
	return 0;
}
//��ϰ 7.9 : ���� 7.1.2 ��(�� 233 ҳ)��ϰ�еĴ��룬��Ӷ�ȡ�ʹ�ӡ Person ����Ĳ�����
//class Person
//{
//private:
//	string strName;//����
//	string strAddress;//��ַ
//public:
//	Person(const string& strName, const string& strAddress) : strName(strName), strAddress(strAddress) {};
//	string getname() const{ return strName; };
//	string getAddress() const{ return strAddress; };
//
//};
//istream& read(istream& s1, Person s2)
//{
//	s1 >> s2.getname() >> s2.getAddress();
//	return s1;
//}
//ostream& print(ostream& s1, const Person s2)
//{
//	s1 << s2.getname() << s2.getAddress();
//	return s1;
//}
//��ϰ 7.11:����� Sales data �������üӹ��캯����Ȼ���дһ�γ��������õ�ÿ�����캯����
//int main()
//{
//	Sales_data s1;//Ĭ�Ϲ���
//	Sales_data s2("dsiuh");
//	Sales_data s3("sidaj", 15, 12.0, 51);
//	Sales_data s4(cin);
//	return 0;
//}
////��ϰ 7.13 : ʹ�� istream ���캯����д�� 229 ҳ�ĳ���
//int main()
//{
//	cout << "�����뽻�׼�¼:(ISBN����������ԭ�ۡ�ʵ���ۼ�)" << endl;
//	Sales_data total(cin);
//	if (cin)
//	{
//		Sales_data trans(cin);
//		do
//		{
//			if (trans.bookno == total.bookno)
//			{
//				total = add(total, trans);
//			}
//			else
//			{
//				print(cout, total);
//				total = trans;
//			}
//		} while (read(cin, trans));
//	print(cout, trans);
//	cout << endl;
//	}
//	else
//	{
//		cout << "�����������������¼��" << endl;
//	}
//	return 0;
//}
//��ϰ7.14 : ��дһ�����캯���������������ṩ�����ڳ�ʼֵ��ʽ�س�ʼ����Ա��
//��ϰ 7.15 : Ϊ��� Person �������ȷ�Ĺ��캯����
//��ϰ 7.23:��д���Լ��� screen �ࡣ
class Window_mgr
{
public:
	void clear();
};
class Screen
{
	friend void Window_mgr::clear();
public:
	Screen() = default;
	Screen(unsigned height, unsigned width) : height(height), width(width), contents ( height * width,' ') {};
	Screen(unsigned height, unsigned width,char c) : height(height), width(width), contents(height * width,c) {};
	Screen& move(unsigned r, unsigned c)
	{
		cursor = r * width * c;
		return *this;
	}
	Screen& set(char c)//��ǰ���λ�÷���c
	{
		contents[cursor] = c;
		return *this;
	}
	Screen& set(unsigned r, unsigned c, char ch)//ѡ���ض���λ�÷���c
	{
		contents[r * width + c] = ch;
		return *this;
	}
	Screen& display()
	{
		cout << contents;
		return *this;
	}
private:
	unsigned height = 0, width = 0;//��Ļ�ĸ߶ȺͿ��
	unsigned cursor = 0;//���ĵ�ǰλ��
	string contents;//��Ļ������
};
//��ϰ 7.24 : ����� Screen ������������캯�� : һ��Ĭ�Ϲ��캯��;��һ�����캯�����ܿ�͸ߵ�ֵ��Ȼ�� contents
//��ʼ���ɸ��������Ŀհ�;���������캯�����ܿ�͸ߵ�ֵ�Լ�һ���ַ������ַ���Ϊ��ʼ��֮����Ļ�����ݡ�
//��ϰ 7.25:Screen �ܰ�ȫ�������ڿ����͸�ֵ������Ĭ�ϰ汾�� ? ����ܣ�Ϊʲô ? ������ܣ�Ϊʲô ?
// ���Screen���е����ݳ�Ա��ָ����,��ôʹ����Щ���캯�����������(����������ָ�붼ָ��ͬһ��λ��,һ��ָ�뱻�ͷŵ����Ǹ�λ�õĿռ䱻�ͷţ����ǿ���������ָ���Ի��
// ��Ƭ�ռ���в�����������������ϵĿ�����������ָ�����͵����ݳ�Ա��˵��Σ�յ�)�����ⶼ�������������ͣ�������Ӱ�졣
//��ϰ 7.26 : �� Sales_data::avg_price ���������������
//��ϰ 7.27:�����Լ��� Screen ����� move��set �� display ������ͨ��ִ������Ĵ������������Ƿ���ȷ��
//��ϰ 7.28: ��� move��set �� display �����ķ������Ͳ��� Screen & ���� Screen, ������һ����ϰ�н��ᷢ��ʲô��� ?
//������صĲ���Screen��������õĻ�,��ô���Ǹ�ֵ������һ���µĸ���,������������������������ÿ�η��ص�Screen���ݶ�����ͬһ�����޷��ﵽԤ�ڶ���ͬһ��������д����Ч��
//��ϰ 7.31:����һ����X��Y������X����һ��ָ��Y��ָ�룬��Y����һ������Ϊ X�Ķ���
//class X;//����X
//class Y
//{
//	X* x;//��ʱ����X�ǲ���ȫ���͵�ָ��,���ǿ�������ָ���������͵�ָ�뵫�����ǲ����������Ķ�����ΪX��û�ж��壬������Ҳ��֪��ҪΪ����ΪX��������ݷ�������ڴ�
//};
//class X
//{
//	Y y;//��������Y���͵Ķ�����ΪY�ѽ��������
//}
//��ϰ 7.32 : �������Լ��� Screen ��w Window_mgr������clear��Wind                  ow_mgr�ĳ�Ա���� Screen ����Ԫ��
//һ����ĳ�Ա��������һ�������Ԫ
//void Window_mgr::clear()
//{
//	Screen myScreen(10, 10, 'X');
//	cout << myScreen.contents << endl;//��ΪScreen����Ԫ����ʹ��
//}
//��ϰ 7.38:��Щ���������ϣ���ṩ ci n ��Ϊ���� istream & �����Ĺ��캯����Ĭ��ʵ�Σ������������Ĺ��캯����
//Sales_data(istream& is = cin) { return *this; };
//��ϰ 7.39 : ������� string �Ĺ��캯���ͽ��� istream & �Ĺ��캯����ʹ��Ĭ��ʵ�Σ�������Ϊ�Ϸ��� ? �������Ϊʲô ?
//��������ڴ�������ʱ���ṩ�κεĲ�������ô�������Ͳ�֪���õ����ĸ���������Ϊ���ṩ��Ĭ��ʵ�Σ��൱�ڶ���Ĭ�Ϲ��캯�����������������
//��ϰ 7.40:������ĳ��������ѡ��һ��(�������Լ�ָ��һ��)��˼������������Ҫ��Щ���ݳ�Ա���ṩһ�����Ĺ��캯������������������ԭ��
//(a) Book(b) Date(c) Employee
//(d) Vehicle(e)object(f) Tree
//class Book
//{
//public:
//	Book() = default;
//	Book(istream& is) { is >> *this; };
//	Book(const string n1, const string n2, double price, const string n4, const string n5)
//	{
//		name = n1;
//		isbn = n2;
//		this->price = price;
//		author = n4;
//		publisher = n5;
//	}
//private:
//	string name, isbn, author, publisher;
//	double price = 0;
//};
//��ϰ 7.41:ʹ��ί�й��캯�����±�д��� Sales data�࣬��ÿ�����캯�������
//һ����䣬����һ��ִ�оʹ�ӡһ����Ϣ���ø��ֿ��ܵķ�ʽ�ֱ𴴽� Sales data���������о�ÿ���������Ϣֱ����ȷʵ�����ί�й��캯����ִ��˳��
//��ϰ 7.42 : ����������ϰ 7.40(�μ� 7.5.1 �ڣ��� 261 ҳ)�б�д���࣬ȷ����Щ���캯������ʹ��ί�С�������ԵĻ�����дί�й��캯����
//��������ԣ��ӳ�������б�������ѡ��һ������Ϊ����ʹ��ί�й��캯���ģ�Ϊ��ѡ������������д�ඨ�塣
//��ϰ 7.43:�ٶ���һ����Ϊ NoDefault ���࣬����һ������ int �Ĺ��캯��������û��Ĭ�Ϲ��캯���������� c��C��һ�� NoDefault���͵ĳ�Ա������c��Ĭ�Ϲ��캯����
//class NoDefault
//{
//public:
//	NoDefault(int x) { val = x; };//�����˹��캯������㲻�ᴴ��Ĭ�ϵĹ��캯��,������涨���nd��δ����
//	int val;
//};
//class C
//{
//public:
//	NoDefault nd;
//	C(int i = 0) : nd(i) {};//��Ҫ��ʾ�Ķ���
//};
//int main()
//{
//	C c;
//	cout << c.nd.val<< endl;
//	return  0;
//}
//��ϰ7.44 : �������������Ϸ��� ? �������Ϊʲô ?
//vector<NoDefault> vec(10);
//����,�����ĺ����Ƕ���һ��vector,vector�����ݵ�������Nodefault,��ʮ������,��������δ������Ĭ�Ϻ��������Ա���ʧ�ܡ�
//��ϰ 7.46 : ������Щ�۶��ǲ���ȷ�� ? Ϊʲô ?
//(a)һ������������ṩһ�����캯�������� Ĭ��
//��ϰ7.52:ʹ��2.6.1��(��64ҳ)��sales data�࣬��������ĳ�ʼ�����̡���
//���������⣬�����޸�������
//Sales data item = { "978-0590353403" 25��15.99 };
//Sales_data�಻�Ǿ���,ȥ������ʼֵ
//��ϰ 7.53:�������Լ��� Debug��
class Debug
{
public:
	constexpr Debug(bool b = true) : hw(b), io(b), other(b) {};
	constexpr Debug(bool h, bool i, bool o) :hw(h), io(i), other(o) {};
	constexpr bool any() { return hw || io || other; };//����Ƿ���ִ���,������ʲô����
	void set_io(bool b) { io = b; };
	void set_hw(bool b) { hw = b; };
	void set_other(bool b) { other = b; };
private:
	bool hw;//Ӳ������
	bool io;//IO����
	bool other;//��������
};
//��ϰ 7.57 : ��д���Լ��� Account �ࡣ
//class Account
//{
//private:
//	string strName;
//	double dAmount = 0.0;
//	static double dRate;
//};
//��ϰ 7.58 : ����ľ�̬���ݳ�Ա�������Ͷ����д����� ? �����ԭ��
//// example.h
//class Example {
//public:
//	static double rate = 6.5;
//	static const int vecsize = 20;
//	static vector<double> vec(vecsize);
//};
//// example.c
//#include "example.h" double Example::rate;
//vector<double> Example::vec;
//����Ϊconst�ľ�̬��Ա�������������ڳ�ʼ��,��������Ҫ�����ⶨ���ʼ����������.h�ļ���rate��vec����.c�ļ���vec��rateӦ�ó�ʼ��