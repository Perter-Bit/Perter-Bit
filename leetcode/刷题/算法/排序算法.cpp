//#include<iostream>
//1.����һ���������� nums ��һ������ k �����㷵�����г���Ƶ��ǰ k �ߵ�Ԫ�ء�����԰� ����˳�� ���ش�
//class Solution {
//public:
//    static bool cmp(pair<int, int> a, pair<int, int> b)
//    {
//        return a.second > b.second;
//    }
//    vector<int> topKFrequent(vector<int>& nums, int k)
//    {
//        //�ȶ�vector��������
//        sort(nums.begin(), nums.end());
//        vector<int> v1;
//        map<int, int> m1;//����nums��ֵ��value��ֵ���ֵ�Ƶ��
//        for (int i = 0;i < nums.size();i++)
//        {
//            m1[nums[i]]++;
//        }
//        vector< pair<int, int> > vec;
//        for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
//        {
//            vec.push_back(pair<int, int>(it->first, it->second));
//        }
//        sort(vec.begin(), vec.end(), cmp);
//        for (int i = 0;i < k;i++)
//        {
//            v1.push_back(vec[i].first);
//        }
//        return v1;
//    }
//};