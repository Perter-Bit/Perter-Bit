#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
//8.2
//��ϰ8.4:��д�������Զ�ģʽ��һ���ļ����������ݶ��뵽һ�� string ��vecto�У���ÿһ����Ϊһ��������Ԫ�ش��� vector �С�
//int main()
//{
//	ifstream in("data");//��in���ķ�ʽ��һ����Ϊdata���ļ�
//	if (!in)//�ж��Ƿ�򿪳ɹ�
//	{
//		cerr << "�޷��������ļ�" << endl;
//		return -1;
//	}
//	string line;
//	vector<string> words;
//	while (getline(in, line))//��in�ж�ȡ���ݵ�line
//	{
//		words.push_back(line);
//	}
//	in.close();//�ر���
//	for (vector<string>::iterator it = words.begin();it != words.end();it++)
//	{
//		cout << *it << endl;
//	}
//	return 0;
//}
//��ϰ8.5 : ��д����ĳ��򣬽�ÿ��������Ϊһ��������Ԫ�ؽ��д洢��
//int main()
//{
//	ifstream in("data");//��in���ķ�ʽ��һ����Ϊdata���ļ�
//	if (!in)//�ж��Ƿ�򿪳ɹ�
//	{
//		cerr << "�޷��������ļ�" << endl;
//		return -1;
//	}
//	string line;
//	vector<string> words;
//	while(in>>line)//��in�ж�ȡ���ݵ�line
//	{
//		words.push_back(line);
//	}
//	in.close();//�ر���
//	for (vector<string>::iterator it = words.begin();it != words.end();it++)
//	{
//		cout << *it << endl;
//	}
//	return 0;
//}
////��ϰ 8.6 : ��д 7.1.1 �ڵ�������(�� 229 ҳ)����һ���ļ��ж�ȡ���׼�¼�����Ļ�����Ϊһ���������ݸ� main(�μ� 6.2.5 �ڣ��� 196ҳ)��
//int main(int argc, char** argv)
//{
//	if (argc != 2)//����
//	{
//		cerr << "������ļ���" << endl;
//		return -1;
//	}
//	ifstream in(argv[1]);
//	if (!in)
//	{
//		//��ʧ��
//		cerr << "��ʧ��������" << endl;
//		return -1;
//	}
//	Sales_data total;
//	if (read(in, total))
//	{
//		Sales_data trans;
//		while (read(in, trans))
//		{
//			if (trans.isbn() == total.isbn())
//			{
//				total.combine(trans);
//			}//����Ѱ����һ��
//			else
//			{
//				print(cout, total);//�����Ϣ
//				totol = trans;//���������ǰ�治�ظ���transѰ����һ���Ƿ�һ��
//			}
//		}
//		cout << total << endl;//����ĩβ
//	}
//	else
//	{
//		cerr << "����!" << endl;
//	}
//}
//ϰ8.10 : ��д���򣬽�����һ���ļ��е��б�����һ�� vector<string>�С�Ȼʹ��һ��istringstream��vector��ȡ����Ԫ�أ�ÿ�ζ�ȡһ�����ʡ�
//int main()
//{
//	//���ļ�
//	ifstream in("data");
//	if (!in)
//	{
//		cerr << "������Ч" << endl;
//	}
//	vector<string> v1;
//	string line;
//	while (getline(in, line))
//	{
//		v1.push_back(line);
//	}
//	in.close();
//	vector<string>::iterator it = v1.begin();
//	while (it != v1.end())
//	{
//		istringstream ifs(*it);//��һ�а󶨵�ifs��
//		string word;
//		while (ifs>>word)
//		{
//			cout << word << " ";
//		}
//		cout << endl;
//		it++;
//	}
//	return 0;
//}
//��ϰ8.11 : ���ڵĳ�������� while ѭ���ж����� istringstream ������ record��������ѭ��֮�⣬����Ҫ�Գ�������������޸� ? ��д���򣬽� record�Ķ����Ƶ� while ѭ��֮�⣬
//��֤��������޸ķ����Ƿ���ȷ��
//struct PersonInfo
//{
//	string name;//����
//	vector<string> phones;//�绰������һ���˿����кܶ�ĵ绰
//};
//int main()
//{
//	string line, word;
//	istringstream record;
//	vector<PersonInfo> p1;
//	while (getline(cin, line))
//	{
//		PersonInfo info;
//		record.clear();//�Ƚ�reword���
//		record.str(line);//���Ʋ���
//		record >> info.name;
//		while (record >> word)
//		{
//			info.phones.push_back(word);
//		}
//		p1.push_back(info);
//	}
//}
