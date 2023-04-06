#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
//1.����һ���ַ������飬���㽫 ��ĸ��λ�� �����һ�𡣿��԰�����˳�򷵻ؽ���б�
//��ĸ��λ�� ������������Դ���ʵ���ĸ�õ���һ���µ��ʣ�����Դ�����е���ĸͨ��ǡ��ֻ��һ�Ρ�
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        vector<vector<string>> res;
//        int sub = 0;  //���vector���±�ֵ
//        string tmp; //��ʱstring
//        unordered_map<string, int> work; //�ж�����󵥴��Ƿ���ڣ�����ĸ����Ƿ�һ��
//        for (auto str : strs)
//        {
//            tmp = str;
//            sort(tmp.begin(), tmp.end());//���ַ�����������
//            if (work.count(tmp))//����Ԫ���Ƿ����
//            {
//                res[work[tmp]].push_back(str);//��������ӵ�
//            }
//            else
//            {
//                //ֻҪ��ӹ�Ԫ�أ��Ͳ�����뵽��һ����Ҳ���ǲ���ı�ͬһ��work[tmp]��ֵ��Ҳ����˵�������ͬ���ַ���ŵ���ͬ���±�λ�ô洢
//                vector<string> vec(1, str);
//                res.push_back(vec);
//                work[tmp] = sub++;//
//            }
//        }
//        return res;
//    }
//};
//2.����һ��δ������������� nums ���ҳ���������������У���Ҫ������Ԫ����ԭ�������������ĳ��ȡ�
//������Ʋ�ʵ��ʱ�临�Ӷ�Ϊ O(n) ���㷨��������⡣
//int longestConsecutive(vector<int>& nums)
//{
//    if (nums.empty())
//    {
//        return 0;
//    }
//    int max = 0;
//    sort(nums.begin(), nums.end());
//    unordered_map<int, int> m1;
//    int len = 0;
//    for (int i = 0;i < nums.size();i++)
//    {
//        if (m1.empty() || len == 0)
//        {
//            len++;
//            m1[nums[i]]++;
//        }
//        else if (nums[i] == nums[i - 1] + 1 && !m1.count(nums[i]))
//        {
//            m1[nums[i]]++;
//            len++;
//        }
//        else if (nums[i] == nums[i - 1])
//        {
//            continue;
//        }
//        else
//        {
//            i--;
//            max = max > len ? max : len;
//            len = 0;
//        }
//
//    }
//    max = max > len ? max : len;
//    return max;
//}
//int main()
//{
//    vector<int> v1{ -1,-1,0,1,3,4,5,6,7,8,9 };
//    int a = longestConsecutive(v1);
//    cout << a << endl;
//
//}
//3.����һ�������ͷ�ڵ� head ���ж��������Ƿ��л���
//�����������ĳ���ڵ㣬����ͨ���������� next ָ���ٴε���������д��ڻ��� Ϊ�˱�ʾ���������еĻ�������ϵͳ�ڲ�ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ����
//ע�⣺pos ����Ϊ�������д��� ��������Ϊ�˱�ʶ�����ʵ�������
//��������д��ڻ� ���򷵻� true �� ���򣬷��� false ��
//class Solution {
//public:
//    bool hasCycle(ListNode* head)
//    {
//        if (!head)
//        {
//            return false;
//        }
//        ListNode* fast = head->next;
//        ListNode* low = head;
//        while (true)
//        {
//            if (!fast || !fast->next)
//            {
//                return false;
//            }
//            else if (fast == low || fast->next == low)
//            {
//                return true;
//            }
//            else
//            {
//                fast = fast->next->next;
//                low = low->next;
//            }
//        }
//    }
//};
//4.������Ʋ�ʵ��һ������  LRU(�������ʹ��) ���� Լ�������ݽṹ��
//ʵ�� LRUCache �ࣺ
//LRUCache(int capacity) �� ������ ��Ϊ���� capacity ��ʼ�� LRU ����
//int get(int key) ����ؼ��� key �����ڻ����У��򷵻عؼ��ֵ�ֵ�����򷵻� - 1 ��
//void put(int key, int value) ����ؼ��� key �Ѿ����ڣ�����������ֵ value ����������ڣ����򻺴��в������ key - value ���������������¹ؼ����������� capacity ����Ӧ�� ��� ���δʹ�õĹؼ��֡�
//���� get �� put ������ O(1) ��ƽ��ʱ�临�Ӷ����С�
//class LRUCache {
//public:
//
//    //����˫����
//    struct Node {
//        int key, value;
//        Node* left, * right;
//        Node(int _key, int _value) : key(_key), value(_value), left(NULL), right(NULL) {}
//    }*L, * R;//˫�������������ҽڵ㣬������ֵ��
//    int n;
//    unordered_map<int, Node*>hash;
//
//    void remove(Node* p)
//    {
//        p->right->left = p->left;
//        p->left->right = p->right;
//    }
//    void insert(Node* p)
//    {
//        p->right = L->right;
//        p->left = L;
//        L->right->left = p;
//        L->right = p;
//    }
//    LRUCache(int capacity) {
//        n = capacity;
//        L = new Node(-1, -1), R = new Node(-1, -1);
//        L->right = R;
//        R->left = L;
//    }
//
//    int get(int key) {
//        if (hash.count(key) == 0) return -1; //�����ڹؼ��� key 
//        auto p = hash[key];
//        remove(p);
//        insert(p);//����ǰ�ڵ����˫����ĵ�һλ
//        return p->value;
//    }
//
//    void put(int key, int value) {
//        if (hash.count(key)) //���key���ڣ����޸Ķ�Ӧ��value
//        {
//            auto p = hash[key];
//            p->value = value;
//            remove(p);
//            insert(p);
//        }
//        else
//        {
//            if (hash.size() == n) //���������������ɾ��˫�������Ҳ�Ľڵ�
//            {
//                auto  p = R->left;
//                remove(p);
//                hash.erase(p->key); //���¹�ϣ��
//                delete p; //�ͷ��ڴ�
//            }
//            //���򣬲���(key, value)
//            auto p = new Node(key, value);
//            hash[key] = p;
//            insert(p);
//        }
//    }
////};
//5.����һ���������� nums ��һ������ k ������ͳ�Ʋ����� �������к�Ϊ k ������������ĸ��� ��
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        int sum = 0, ans = 0;
//        unordered_map<int, int> mp;
//        mp[0] = 1;
//        for (int i : nums) {
//            sum += i;
//            if (mp.find(sum - k) != mp.end()) ans += mp[sum - k];
//            mp[sum] ++;
//        }
//        return ans;
//    }
//};