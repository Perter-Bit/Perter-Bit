#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
using namespace std;
//��ϰ9.22 : �ٶ�iv��һ��int��vector ����ĳ������ʲô���� ? �㽫����޸� ?
//int main()
//{
//	vector<int> v1 = { 1,2,3 };
//	int some_val = 1;
//	vector<int>::iterator iter = v1.begin();
//	int org_size = v1.size();//��ʼ��С
//	int new_size = 0;
//	while (iter != (v1.begin() + org_size / 2 +new_size))//ʹ��iter��������ԭ���м��λ��
//	{
//		if (*iter != some_val)
//		{
//			iter++;//����
//		}
//		else
//		{
//			iter = v1.insert(iter, 2 * some_val);//��Ϊ����Ԫ�غ��������ʧЧ�����������Ҫ������и���
//			iter += 2;
//		}
//	}
//}
//��ϰ 9.24 : ��д���򣬷ֱ�ʹ��at�� �±��������front��begin��ȡһ��vector
//�еĵ�һ��Ԫ�ء���һ����vector �ϲ�����ĳ���
//int main()
//{
//	vector<int> v1{ 0,1,2,3 };
//	auto a = v1.front();//������Ԫ�ص�����
//	auto b = v1[0];
//	auto c = *v1.begin();
//	auto d = c = v1.at(0);//������Ԫ�ص�����
//}
//��ϰ9.26 : ʹ��������붨���ia���� ia ������һ�� vector ��һ�� list �С�ʹ
//�õ��������汾��erase��list��ɾ������Ԫ�أ��� vector ��ɾ��ż��Ԫ�ء�
//int ia[] = { 0��1,1��2�� 3,5, 8��13��21��55��89 };
//int main()
//{
//	int ia[] = { 0,1,1,2,3,5, 8,13,21,55,89 };
//	vector<int> v1;
//	list<int> l1;
//	v1.assign(ia, ia + 11);
//	l1.assign(ia, ia + 11);
//	vector<int>::iterator it1 = v1.begin();
//	while (it1 != v1.end())
//	{
//		if (*it1 % 2 == 0)
//		{
//			vector<int>::iterator iter = v1.erase(iter);
//		}
//		else
//		{
//			it1++;
//		}
//	}
//}
//9.3.4����ϰ
//��ϰ 9.27:��д���򣬲��Ҳ�ɾ�� forwar id list<int>�е�����Ԫ�ء�
//int main()
//{
//	forward_list<int> f;
//	auto v1 = f.begin();
//	auto v2 = f.before_begin();
//	for (auto i : f)
//	{
//		if (i % 2 == 1)
//		{
//			f.erase_after(v2);
//		}
//		else
//		{
//			v2 = v1;
//			v1++;
//		}
//	}
//}
//��ϰ 9.28 : ��д����������һ�� forward list<string>������ string ��������
//��������Ӧ�������в��ҵ�һ�� string, �����ڶ��� string���뵽�����ŵ�һ��
//string֮���λ�á�����һ�� stringδ�������У��򽫵ڶ���string���뵽����ĩβ��
//void charu(forward_list<string> f1, string s1, string s2) 
//{
//	auto v1 = f1.begin();
//	auto v2 = f1.before_begin();
//	for (auto i : f1)
//	{
//		if (i == s1)
//		{
//			f1.insert_after(v1,s2);
//			return;
//		}
//		else
//		{
//			v2 = v1;
//			v1++;
//		}
//	}
//	f1.insert_after(v2, s2);
//}
//��ϰ9.31 : �ڳ̲�������ist�� forward_list��Ϊʲô ? �޸ĳ���ʹ֮Ҳ��������Щ���͡�
//ԭ��:��Ԫ�ز��������洢�ģ���֧�ּӡ���������֧�ּӼӣ�����������Ϊ�Ӽӡ���������.
//��ϰ9.38 : ��д����̽������ı�׼��ʵ���У�vector ����������ġ�
//int main()
//{
//	vector<int> v1;
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//	for (int i = 0;i < 5;i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//	for (int i = 0;i < 5;i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//	for (int i = 0;i < 5;i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//}
//��ϰ9.41 : ��д���򣬴�һ��vector<char>��ʼ��һ�� string.
//int main()
//{
//	vector<char> v1;
//	string s(v1.data(), v1.size());//data�������ڷ���v1�����ĵ�һ��Ԫ�صĵ�ַ
//}
//��ϰ9.42 : �ٶ���ϣ��ÿ�ζ�ȡһ���ַ�����һ��string�У�����֪��������Ҫ��ȡ100���ַ���Ӧ�������߳�������� ?
//int main()
//{
//	string s;
//	s.reserve(100);//Ԥ�ȷ���100���ڴ�ռ�
//	char c;
//	while (cin >> c)
//	{
//		s.push_back(c);
//	}
//}
//��ϰ 9.43 : ��дһ���������������� string ���� s�� oldVal��newVal��ʹ�õ���
//����insert��erase������s������oldval�滻ΪnewVal��������ĳ��������滻ͨ�õļ�д��ʽ���磬��"tho"�滻Ϊ"though"������"thru"�滻Ϊ"through"��
//void tihuan(string &s, string oldval, string newVal)
//{
//	auto l = s.size();
//	if (!l)
//	{
//		return;
//	}
//	auto i1 = s.begin();
//	while(i1 < s.end())
//	{
//		auto i2 = i1;
//		auto i3 = oldval.begin();
//		while (i3 != oldval.end() && *i2 == *i3)
//		{
//			i2++;
//			i3++;
//		}
//		if (i3 == oldval.end())
//		{
//			//ƥ��ɹ�
//			i1 = s.erase(i1, i2);
//			//��ʱi1ָ��ɾ�����һ��Ԫ�ص�λ�ã�Ҳ����i2��λ��
//			if (newVal.size())
//			{
//				//�ж��ַ����Ƿ�Ϊ��
//				i3 = newVal.end();
//				//�Ӻ�ǰ���β�������
//				do
//				{
//					i3--;
//					i1 = s.insert(i1, *i3);
//				} while (i3 != newVal.begin());
//			}
//			i1 += newVal.size();
//		}
//		else
//		{
//			i1++;
//		}
//	}
//}
//int main()
//{
//	string s = "tho thru tho!";
//	tihuan(s, "thru", "through");
//	cout << s << endl;
//	return 0;
//}
// ��ϰ944 : ��д��һ��ĺ��������ʹ��һ���±��re eplace.
//void tihuan(string& s, string oldval, string newVal)
//{
//	int p = 0;
//	while (p = s.find(oldval, p) != string::npos)
//	{
//		s.replace(p, oldval.size(), newVal);
//		p += oldval.size();
//	}
//}
//int main()
//{
//	string s = "tho thru tho!";
//	tihuan(s, "thru", "through");
//	cout << s << endl;
//	return 0;
//}
//��ϰ9.45 : ��дһ������������һ����ʾ���ֵ�string g�����������ֱ��ʾǰ׺(��"Mr."��"Ms.")�ͺ�׺(��"Jr."��"II")���ַ�����ʹ�õ������� insert �� append������ǰ׺�ͺ�׺��ӵ������������У������ɵ���st ring ���ء�
//void biaoshi(string &name, string q1, string q2)
//{
//	auto i = name.begin();
//	auto j = q1.begin();
//	while (j!=q1.end())
//	{
//		i = name.insert(i, *j);
//		j++;
//	}
//	name = name.append(q2);
//}
//int main()
//{
//	string s1 = "zjl";
//	string s2 = "mr";
//	string s3 = "jj";
//	biaoshi(s1, s2, s3);
//	cout << s1 << endl;
//}
//��ϰ9.46 : ��д��һ��ĺ���, ���ʹ��λ�úͳ���������string, ��ֻʹ�� insert��
//void biaoshi(string &name, string q1, string q2)
//{
//	name.insert(0, " ");
//	name.insert(0, q1);
//	name.insert(name.size(), " ");
//	name.insert(name.size(), q2);//��ָ����λ��֮ǰ����Ԫ�أ������᷵�ص�����
//}
//int main()
//{
//	string s1 = "zjl";
//	string s2 = "mr";
//	string s3 = "jj";
//	biaoshi(s1, s2, s3);
//	cout << s1 << endl;
//}
//��ϰ9.47 : ��д�������Ȳ��� strin g"ab2c3d7R4E6"�е�ÿ�������ַ���Ȼ���������ÿ����ĸ�ַ�����д�����汾�ĳ��򣬵�һ��Ҫʹ��find_first_of���ڶ���
//Ҫʹ�� find_first_not_of.
//void find_char(string& s, const string& chars)
//{
//	cout << "��" << s << "�в����ַ�" << chars << endl;
//	string::size_type pos = 0;
//	while ((pos = s.find_first_of(chars, pos)) != string::npos)
//	{
//		cout << "��" << pos << "λ���ҵ�" << s[pos] << endl;
//		pos++;
//	}
//}
//int main()
//{
//	string s1 = "ab2c3d7R4E6";
//	string number = "123456789";
//	find_char(s1, number);
//}