#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<functional>
#include<iterator>
using namespace std;
//��test.txt�ж�ȡ����,�������뵽����vector��,�����������뵽tset.sort��
//int main()
//{
//	ifstream in_file;
//	in_file.open("test.txt", ios::out);
//	if (!in_file)
//	{
//		cout << "�ļ�Ϊ��" << endl;
//	}
//	ofstream out_file("test.sort", ios::in);
//	string name;
//	vector<string> aaa;
//	while (in_file >> name)
//	{
//		aaa.push_back(name);
//	}
//	cout << "δ����֮ǰ" << endl;
//	for (int i = 0;i < aaa.size();i++)
//	{
//		cout << aaa[i] << ' ';
//	}
//	sort(aaa.begin(), aaa.end());
//	for (int i = 0;i < aaa.size();i++)
//	{
//		out_file << aaa[i] << ' ';
//	}
//	out_file << endl;
//	in_file.close();
////	out_file.close();
////}
//bool calc_elements(vector<int>& vec, int pos);
//void display_elems(vector<int>& vec, const string& title, ostream& os = cout);
//int main()
//{
//	vector<int> pent;
//	const string title("Pentagonal Numeric Series");
//	if (calc_elements(pent, 0))
//	{
//		display_elems(pent, title);
//	}
//	if (calc_elements(pent, 8))
//	{
//		display_elems(pent, title);
//	}
//	if (calc_elements(pent, 15))
//	{
//		display_elems(pent, title);
//	}
//	if (calc_elements(pent, 9))
//	{
//		display_elems(pent, title);
//	}
//}
//bool calc_elements(vector<int>& vec, int pos)
//{
//	if (pos <= 0 || pos > 64)
//	{
//		cerr << "Sorry.Invalid position:" << pos << endl;
//		return false;
//	}//�ж�λ���Ƿ����
//	for (int ix = vec.size() + 1;ix <= pos;ix++)
//	{
//		vec.push_back(ix * (3 * ix - 1) / 2);
//	}
//	return true;
//}
//void display_elems(vector<int>& vec, const string& title, ostream& os)
//{
//	os << "\n" << title << "\n\t";
//	for (int ix = 0;ix < vec.size();ix++)
//	{
//		os << vec[ix] << " ";
//	}
//	os << endl;
//}
//inline bool check(int pos)
//{
//	return (pos < 0 || pos>64) ? false : true;
//}
//const vector<int>* pentagonal_series(int pos)
//{
//	static vector<int> _elems;
//	if (check(pos) && pos > _elems.size())//����Ԫ��
//	{
//		for (int ix = _elems.size() + 1;ix <= pos;ix++)
//		{
//			_elems.push_back((ix * (3 * ix - 1)) / 2);
//		}
//	}
//	return &_elems;
//}
//bool pentagonal_elem(int pos, int& elem)
//{
//	if (!check(pos))
//	{
//		cout << "Sorry.Invalid position:" << pos << endl;
//		elem = 0;
//		return false;
//	}
//	const vector<int>* pent = pentagonal_series(pos);
//	elem = (*pent)[pos - 1];
//	return true;
//}
//int main()
//{
//	int elem;
//	if (pentagonal_elem(8, elem))
//	{
//		cout << "element 8 is " << elem << "\n" << endl;
//	}
//	if (pentagonal_elem(88, elem))
//	{
//		cout << "element 88 is " << elem << "\n" << endl;
//	}
//	if (pentagonal_elem(12, elem))
//	{
//		cout << "element 12 is " << elem << "\n" << endl;
//	}
//	if (pentagonal_elem(64, elem))
//	{
//		cout << "element 64 is " << elem << "\n" << endl;
//	}
//}
//inline int max(int t1, int t2)
//{
//	return t1 > t2 ? t1 : t2;
//}
//inline float max(float t1, float t2)
//{
//	return t1 > t2 ? t1 : t2;
//}
//inline string max(const string &t1, const string& t2)
//{
//	return t1 > t2 ? t1 : t2;
//}
//inline int max(const  vector<int>& vec)
//{
//	return *max_element(vec.begin(), vec.end());
//}
//inline float max(const  vector<float>& vec)
//{
//	return *max_element(vec.begin(), vec.end());
//}
//inline string max(const  vector<string>& vec)
//{
//	return *max_element(vec.begin(), vec.end());
//}
//inline int max(const int *parray,int size)
//{
//	return *max_element(parray,parray + size);
//}
//inline float max(const float* parray, int size)
//{
//	return *max_element(parray, parray + size);
//}
//inline string max(const string* parray, int size)
//{
//	return *max_element(parray, parray + size);
//}
//int main()
//{
//	//�ַ�������
//	string sarray[] = { "we","were","her","pride","of","ten" };
//	vector<string>sevc(sarray, sarray + 6);
//	//��������(����)
//	int iarray[] = { 12,70,2,169,1,5,29 };
//	vector<int>ievc(iarray, iarray + 7);
//	//��������(������)
//	float farray[] = { 2.5,24.8,18.7,4.1,23.9 };
//	vector<float>fevc(farray, farray + 5);
//	int imax = max(max(ievc), max(iarray, 7));
//	float fmax = max(max(fevc), max(farray, 5));
//	string smax = max(max(sevc), max(sarray, 6));
//	cout << imax << " " << fmax << " " << smax << " " << endl;
//}
//template<typename Type>
//inline Type max(Type t1, Type t2)
//{
//	return t1 > t2 ? t1 : t2;
//}
//template<typename elemType>
//inline elemType max(const  vector<elemType>& vec)
//{
//	return *max_element(vec.begin(), vec.end());
//}
//template<typename arrayType>
//inline arrayType max(const arrayType *parray, int size)
//{
//	return *max_element(parray, parray + size);
//}
//int main()
//{
//	//�ַ�������
//	string sarray[] = { "we","were","her","pride","of","ten" };
//	vector<string>sevc(sarray, sarray + 6);
//	//��������(����)
//	int iarray[] = { 12,70,2,169,1,5,29 };
//	vector<int>ievc(iarray, iarray + 7);
//	//��������(������)
//	float farray[] = { 2.5,24.8,18.7,4.1,23.9 };
//	vector<float>fevc(farray, farray + 5);
//	int imax = max<int>(max<int>(ievc), max<int>(iarray, 7));
//	float fmax = max<float>(max<float>(fevc), max<float>(farray, 5));
//	string smax = max<string>(max<string>(sevc), max<string>(sarray, 6));
//	cout << imax << " " << fmax << " " << smax << " " << endl;
//}
//void init(set<string>& s);
//void process_file(map<string, int>& m, const set<string>& s, ifstream& ifile);
//void user_query(const map<string,int>&);
//void display_word_count(const map<string,int>&, ofstream& oflie);
//int main()
//{
//	ifstream ifile("D:\\niu\\myin.txt");
//	ofstream ofile("D:\\niu\\myout.txt");
//	if (!ifile || !ofile)//�ж��ļ��Ƿ�Ϊ��
//	{
//		cerr << "Unble to open file -- bailing out!\n";
//		return -1;
//	}
//	set<string> exclude_set;
//	init(exclude_set);
//	map<string, int>word_count;//�����嵥
//	process_file(word_count, exclude_set, ifile);
//	user_query(word_count);
//	display_word_count(word_count, ofile);
//}
//void init(set<string>& s)//��set�ĳ�ʼ��
//{
//	static string word[25] = { "the","and","but","that","then","are","been","can","a","could","did","for"
//	,"of","had","have","him","his","her","its","is","were","which","when","with","would" };
//	s.insert(word, word + 25);
//}
//void process_file(map<string, int>& m, const set<string>& s, ifstream& ifile)
//{
//	string word;
//	while (ifile >> word)//��ifile�ж�ȡ�ַ�����word��
//	{
//		if (s.count(word))//count �ж�word������set�еĸ�����������Ϊ0
//		{
//			continue;//��������
//		}
//		m[word]++;
//	}
//}
//void user_query(const map<string, int>& m)//��ѯĳ���ַ����Ƿ�������ı��ļ���
//{
//	string search_word;
//	cout << "please enter a word\n";
//	cin >> search_word;
//	while (search_word.size() && search_word != "N")
//	{
//		map<string, int>::const_iterator it;
//		if ((it = m.find(search_word)) != m.end())
//		{
//			//�ҵ�Ԫ��
//			cout << "Found!" << it->first << "occurs" << it->second << "times.\n";
//		}
//		else
//			cout << "����ʧ��" << endl;
//		cout << "�Ƿ��������(N exit())" << endl;
//		cin >> search_word;
//	}
//}
//void display_word_count(const map<string, int>& m, ofstream& oflie)
//{
//	map<string, int>::const_iterator fit= m.begin(),eit = m.end();
//	while (fit != eit)
//	{
//		oflie << fit->first << "(" << fit->second << ")" << endl;
//		fit++;
//	}
//	oflie << endl;
//}
//class LessThan
//{
//public:
//	bool operator()(const string& s1, const string& s2)
//	{
//		return s1.size() < s2.size();
//	}
//};
//template <typename elemType>
//void display(const vector<elemType>& vec, ostream& os = cout, int len = 8)
//{
//	vector<elemType>::template const_iterator iter = vec.begin();
//	vector<elemType>::template const_iterator end_it = vec.end();
//	int elem_cnt = 1;
//	while (iter != end_it)
//	{
//		os << *iter++ << (!(elem_cnt++ % len) ? '\n' : ' ');
//	}
//	os << endl;
//}
//int main()
//{
//	ifstream ifile("D:\\niu\\myin.txt");
//	ofstream ofile("D:\\niu\\myout.txt");
//	if (!ifile || !ofile)//�ж��ļ��Ƿ�Ϊ��
//	{
//		cerr << "Unble to open file -- bailing out!\n";
//		return -1;
//	}
//	vector<string>text;
//	string word;
//	while (ifile >> word)
//	{
//		text.push_back(word);
//	}
//	sort(text.begin(), text.end(), LessThan());
//	display(text, ofile);
//}
//typedef vector<string> vstring;
//void populate_map(ifstream& n, map<string, vstring>& m)//��ȡ�ļ����������ݷŵ�map��
//{
//	string textline;
//	while (getline(n, textline))
//	{
//		string fan_name;
//		vector<string>child;
//		string::size_type pos = 0, prev_pos = 0, text_size = textline.size();
//		//�ҳ��Կո�ָ����������е���
//		while (pos = textline.find_first_of(" ", pos) != string::npos)//posΪ��ʼλ��
//		{
//			//�ҵ�һ������
//			//�������ַ������յ�
//			string::size_type end_pos = pos - prev_pos;
//			if (!prev_pos)//��ʱ��ȡ���ĵ����Ǽ�������
//			{
//				fan_name = textline.substr(prev_pos, end_pos);
//			}
//			else
//			{
//				child.push_back(textline.substr(prev_pos, end_pos));
//				prev_pos = ++pos;
//			}
//		}
//		//�������һ�����ӵ�����(��ʱ��󲻴��ڿո�,pos = npos)
//		if (prev_pos < text_size)
//		{
//			child.push_back(textline.substr(prev_pos, pos-prev_pos));
//		}
//		if (!m.count(fan_name))
//		{
//			m[fan_name] = child;
//		}
//		else
//		{
//			cerr << "Oops!we already have a " << fan_name << " family in our map!\n";
//		}
//	}
//}
//void query_map(const string& name, const map<string, vstring>& families)
//{
//	map<string, vstring>::const_iterator it = families.find(name);
//	if (it == families.end())
//	{
//		cout << "Sorry.The" << name << " is not currently entered.\n";
//		return;
//	}
//	cout << "The" << name;
//	if (!it->second.size())
//	{
//		cout << "has no children\n" << endl;
//	}
//	else
//	{
//		cout << "has" << it->second.size() << "children\n";
//		vector<string>::const_iterator sit = it->second.begin(),
//			end_iter = it->second.end();
//		while(sit!=end_iter)
//		{
//			cout << *sit << " ";
//			sit++;
//		}
//		cout << endl;
//	}
//}
//void display_map(const map<string, vstring>& families, ostream& os)
//{
//	map<string, vstring>::const_iterator it = families.begin(),end_it = families.end();
//	while (it != end_it)
//	{
//		os << "The" << it->first << "family";
//		if (!it->second.empty())
//		{
//			os << "has no children" << endl;
//		}
//		else
//		{
//			cout << "has" << it->second.size() << "children\n";
//			vector<string>::const_iterator sit = it->second.begin(),
//				end_iter = it->second.end();
//			while (sit != end_iter)
//			{
//				cout << *sit << " ";
//				sit++;
//			}
//			cout << endl;
//		}
//		++it;
//	}
//}
//int main()
//{
//	map<string, vstring> families;
//	ifstream nameFile("D:\\niu\\myin.txt");
//	if (!nameFile)
//	{
//		cerr << "Unable to find !\n" << endl;
//		return -1;
//	}
//	populate_map(nameFile, families);
//	string family_name;
//	while (1)
//	{
//		cout << "������һ�����ջ�������qѡ���˳�" << endl;
//		cin >> family_name;
//		if (family_name == "q")
//		{
//			break;
//		}
//		query_map(family_name, families);
//	}
//	display_map(families, cout);
//	system("pause");
//	return 0;
//}
//class even_elem
//{
//public:
//	bool operator()(int elem)
//	{
//		return elem % 2 ? false : true;
//	}
//};
//int main()
//{
//	vector<int>input;
//	istream_iterator<int> in(cin), eos;
//	cout << "�ɹ�" << endl;
//	copy(in, eos, back_inserter(input));
//	cout << "�ɹ�" << endl;
//	vector<int>::iterator division = partition(input.begin(), input.end(), even_elem());
//	
//	ofstream even_file("D:\\niu\\myin.txt");
//	ofstream odd_file("D:\\niu\\myout.txt");
//	if (!even_file || !odd_file)
//	{
//		cerr << "arghh!! unable to open the output files.bailing out!";
//		return -1;
//	}
//	ostream_iterator<int> even_iter(even_file, "\n"), odd_iter(odd_file, " ");//�ڶ���Ԫ�ش������ʱ�ķָ���
//	copy(input.begin(), division, even_iter);
//	copy(division,input.end(), even_iter);
//	system("pasue");
	/*return 0;
}*/