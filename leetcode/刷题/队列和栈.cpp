#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//1.����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�
//class Solution {
//public:
//    bool isValid(string s)
//        stack<char> st;
//    if (s.size() % 2 != 0)//�������Ϊ��������һ��ƥ�䲻�ϣ�����false
//        return false;
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == '(' || s[i] == '[' || s[i] == '{')//�����ǰ�����ţ���ѹ��ջ
//        {
//            st.push(s[i]);
//        }
//        else//����˵����ʱ�Ǻ�������
//        {
//            if (st.empty())//�����ʱջΪ�գ���û�п�����֮ƥ��ģ�����false
//                return false;
//            //���ƥ�����ˣ��򽫵�ǰջ��Ԫ��ɾ�����������ַ�������в���ƥ��
//            if (s[i] == ')' && st.top() == '(' ||
//                s[i] == ']' && st.top() == '[' ||
//                s[i] == '}' && st.top() == '{')
//            {
//                st.pop();
//            }
//            else//���������������ǣ�˵����ǰû��ƥ���ϣ�����false������( '[' �� ��}�� )
//                return false;
//        }
//    }
//    //���ȫ����ջ�ɹ�������
//    return st.empty();
//};
//2.��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
//    ListNode* dummy = new ListNode(0);
//    ListNode* cur = dummy;
//    while (l1 != nullptr && l2 != nullptr) {
//        ListNode** pp = (l1->val < l2->val) ? &l1 : &l2;
//        cur->next = *pp;
//        cur = cur->next;
//        *pp = (*pp)->next;
//    }
//    cur->next = (l1 == nullptr) ? l2 : l1;
//
//    ListNode* ans = dummy->next;
//    delete dummy;
//    return ans;
//}
//3.���� n ���Ǹ�������������ʾ��״ͼ�и������ӵĸ߶ȡ�ÿ�����ӱ˴����ڣ��ҿ��Ϊ 1 ��
//���ڸ���״ͼ�У��ܹ����ճ����ľ��ε���������
//�Լ�д�ģ�����ˮͰװˮд�ģ�����
//int largestRectangleArea(vector<int>& heights)
//{
//    int length = heights.size();
//    int max = 0;
//    //���±��������
//    for (int i = 0;i < length;i++)
//    {
//        if (heights[i] > max)
//        {
//            max = heights[i];
//        }
//    }
//    int left = 0;
//    int right = length - 1;
//    while (left < right)
//    {
//        int x = left + 1;
//        while (x < right)
//        {
//            if (heights[x] < heights[left])
//            {
//                break;
//            }
//            x++;
//        }
//        int a = (x - left) * heights[left] > (x - left + 1) * min(heights[x], heights[left]) ? (x - left) * heights[left] : (x - left + 1) * min(heights[x], heights[left]);
//        max = max > a ? max : a;
//        left++;
//    }
//    return max;
//}
//int main()
//{
//    vector<int> v1{ 2,1,2 };
//    int x = largestRectangleArea(v1);
//    cout << x << endl;
//int FieldSum(vector<int>& v)
//{
//	v.push_back(INT_MAX); // ����������Ϊ��Ҫһ�����޸ߵ��˵�סջ�е��ˣ���Ȼջ��Ԫ������޷���ȫ��ջ
//		stack<int> st;
//	int sum = 0;
//	for (int i = 0; i < (int)v.size(); i++)
//	{
//		if (st.empty() || v[st.top()] > v[i])//С��ջ��Ԫ����ջ
//		{
//			st.push(i);
//		}
//		else
//		{
//			while (!st.empty() && v[st.top()] <= v[i])
//			{
//				int top = st.top();//ȡ��ջ��Ԫ��
//				st.pop();
//				sum += (i - top - 1);//������Ҫ���һ��1
//			}
//			st.push(i);
//		}
//	}
//	return sum;
//}
//int main()
//{
//	vector<int> v1{ 1,2,3,4,5 };
//	int x = FieldSum(v1);
//	cout << x << endl;
//}
//4.����һ�������� 0 �� 1 ����СΪ rows x cols �Ķ�ά�����ƾ����ҳ�ֻ���� 1 �������Σ��������������
//int shang(vector<int> heights);
//int maximalRectangle(vector<vector<char>>& matrix)
//{
//    int len1 = matrix.size();
//    int len2 = matrix[0].size();
//    int max1 = 0;
//    vector<int> v1(len2);
//    for (int i = 0;i < len1;i++)
//    {
//        for (int j = 0;j < len2;j++)
//        {
//            if (matrix[i][j] == '1')
//            {
//                v1[j]++;
//            }
//            else
//            {
//                v1[j] = 0;
//            }
//        }
//        max1 = max(shang(v1), max1);
//    }
//    return max1;
//}
//int shang(vector<int> heights)
//{
//    //����ݼ�ջ
//    stack<int> s1;
//    int top = 0;
//    int sum = 0;
//    heights.push_back(-1);//��֤�������Ԫ�ؾ���pop��
//    for (int i = 0;i < heights.size();i++)
//    {
//        if (s1.empty() || heights[i] >= heights[s1.top()])
//        {
//            s1.push(i);
//        }
//        else
//        {
//            while (!s1.empty() && heights[i] < heights[s1.top()])
//            {
//                top = s1.top();
//                s1.pop();
//                int tmp = (i - top) * heights[top];
//                if (sum < tmp)
//                {
//                    sum = tmp;
//                }
//            }
//            s1.push(top);
//            heights[top] = heights[i];
//        }
//    }
//    return sum;
//}
//int main()
//{
//    vector<char> v2 = { '1','0' };
//    vector<char> v3 = { '1','0' };
//    vector<vector<char>> v1 = {v2,v3};
//    int x = maximalRectangle(v1);
//    cout << x << endl;
//}
//5.���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��
//ʵ�� MinStack �� :
//MinStack() ��ʼ����ջ����
//void push(int val) ��Ԫ��val�����ջ��
//void pop() ɾ����ջ������Ԫ�ء�
//int top() ��ȡ��ջ������Ԫ�ء�
//int getMin() ��ȡ��ջ�е���СԪ�ء�
//class MinStack {
//public:
//    stack<int> s1;
//    stack<int> s2;//����ջ
//    MinStack()
//    {
//        //���
//        while (!s1.empty())
//        {
//            s1.pop();
//        }
//        while (!s2.empty())
//        {
//            s2.pop();
//        }
//        s2.push(INT_MAX);
//    }
//
//    void push(int val)
//    {
//        s1.push(val);
//        int minval = min(s2.top(), val);
//        s2.push(minval);
//    }
//
//    void pop()
//    {
//        s1.pop();
//        s2.pop();
//    }
//
//    int top()
//    {
//        return s1.top();
//    }
//
//    int getMin()
//    {
//        return s2.top();
//    }
//};
//6.����һ���������� nums����һ����СΪ k �Ļ������ڴ������������ƶ�����������Ҳࡣ��ֻ���Կ����ڻ��������ڵ� k �����֡���������ÿ��ֻ�����ƶ�һλ��
//���� ���������е����ֵ ��
//struct MyQueue
//{
//public:     //����˫�˶���ʵ�ֵ�������
//    deque<int> deq;
//    void pop1(int val);
//    void push(int val);
//    int front();
//};
//void MyQueue::pop1(int val)
//{
//    if (!deq.empty() && val == deq.front())
//    {
//        deq.pop_front();
//    }
//}
//void MyQueue::push(int val)
//{
//    while (!deq.empty() && val >= deq.back())
//    {
//        deq.pop_back();
//    }
//    deq.push_back(val);
//}
//int MyQueue::front()
//{
//    return deq.front();
//}
//vector<int> maxSlidingWindow(vector<int>& nums, int k)
//{
//    MyQueue dq;
//    vector<int> v1;
//    for (int i = 0;i < k;i++)
//    {
//        dq.push(nums[i]);
//    }
//    v1.push_back(dq.front());
//    for (int i = k;i < nums.size();i++)
//    {
//        dq.pop1(nums[i - k]);
//        dq.push(nums[i]);
//        v1.push_back(dq.front());
//    }
//    return v1;
//}
//int main()
//{
//    vector<int> v1{ 1,3,-1,-3,5,3,6,7 };
//    vector<int> v2 = maxSlidingWindow(v1, 3);
//    for (int i = 0;i < v2.size();i++)
//    {
//        cout << v2[i] << " ";
//    }
//}
//7.����һ������������ַ������������������ַ�����
//�������Ϊ : k[encoded_string]����ʾ���з������ڲ��� encoded_string �����ظ� k �Ρ�ע�� k ��֤Ϊ��������
//�������Ϊ�����ַ���������Ч�ģ������ַ�����û�ж���Ŀո�������ķ��������Ƿ��ϸ�ʽҪ��ġ�
//���⣬�������Ϊԭʼ���ݲ��������֣����е�����ֻ��ʾ�ظ��Ĵ��� k �����粻������� 3a �� 2[4] �����롣
//class Solution {
//public:
//    string decodeString(string s)
//    {
//        string s11 = "";
//        int nums = 0;
//        stack<int> s1;//��¼����
//        stack<string> s2;//��¼��ĸ��]
//        for (int i = 0;i < s.size();i++)//��ջ
//        {
//            if (s[i] >= '0' && s[i] <= '9')
//            {
//                nums = nums * 10 + (s[i] - 48);
//            }
//            else if (s[i] >= 'a' && s[i] <= 'z')
//            {
//                s11 += s[i];
//            }
//            else if (s[i] == '[')
//            {
//                s1.push(nums);
//                nums = 0;
//                s2.push(s11);
//                s11 = "";
//            }
//            else
//            {
//                //����]
//                int x = s1.top();
//                s1.pop();
//                for (int i = 0;i < x;i++)
//                {
//                    s2.top() += s11;//s1�ǻ�δ��ջ��Ԫ��
//                }
//                s11 = s2.top();
//                s2.pop();
//            }
//        }
//        return s11;
//    }
//};
//8.����һ���������� temperatures ����ʾÿ����¶ȣ�����һ������ answer ������ answer[i] ��ָ���ڵ� i �죬��һ�������¶ȳ����ڼ���������������֮�󶼲������ߣ����ڸ�λ���� 0 �����档
//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures)
//    {
//        vector<int> v1(temperatures.size(), 0);
//        deque<int> d1;
//        int length = 0;
//        //�ݼ��Ķ���
//        for (int i = 0;i < temperatures.size();i++)
//        {
//            if (d1.empty() || temperatures[i] <= temperatures[d1.back()])//���βԪ�ؽ��бȽ�
//            {
//                d1.push_back(i);
//            }
//            else
//            {
//                //����
//                while (!d1.empty() && temperatures[i] > temperatures[d1.back()])
//                {
//                    int x = d1.back();
//                    v1[x] = i - d1.back();
//                    d1.pop_back();
//                }
//                d1.push_back(i);
//            }
//        }
//        return v1;
//    }
//};
//9.����һ���ַ��� s �������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ���
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        //����Ͱ(����)���趨128��Ԫ�ض�Ӧ0-127ASCII��ֵ��ȫ����0
//        vector<int> m(128, 0);
//        //����󳤶�
//        int maxlen = 0;
//        //head��ʾ��������ߵ���ĸ��ţ���������ظ��ģ�����������ͬ����ĸa����һ��a��Ͱ����m[s[i]]��a+1��ʾa����һ��λ��
//        //��ô�ڶ���a����ʱ��head��=a+1Ҳ����max(head,m[s[i]])��ȥ���˴�������һ��a����֤���������ظ���ĸ
//        int head = 0;
//        //�����ַ���
//        for (int i = 0; i < s.size(); i++) {
//            //�޸�����ߵ���ĸ���head
//            head = max(head, m[s[i]]);
//			//����˵��ʱ�Ѿ��洢��abc,���ظ�,�����Ԫ���ظ�����ôheadֵ�ͻ�ı䣬��Ӧ�ļ����ַ����ĳ���Ҳ�ͻ�仯
//            //��ǰ��ĸ��Ӧ��ASCII��Ͱ�����һ��λ��(i+1)�����ڸ���head
//            m[s[i]] = i + 1;
//            //���³���
//            maxlen = max(maxlen, i - head + 1);
//        }
//        return maxlen;
//    }
//};