//1.����һ���ɰ����ظ����ֵ����� nums ��������˳�� �������в��ظ���ȫ���С�
//class Solution {
//public:
//    vector<int> v1;
//    vector<vector<int>> v2;
//    void trace(vector<bool>& b1, vector<bool>& b2, vector<int>& nums)
//    {
//        if (v1.size() == nums.size())
//        {
//            v2.push_back(v1);
//            return;
//        }
//        for (int i = 0;i < nums.size();i++)
//        {
//            //�ж��Ƿ���ͬһ��֦��ʹ�ù�����Ϊ���ǲ�δ���startindex����
//            if (b2[i] == true)//true����ʹ�ù�
//            {
//                continue;
//            }
//            //�����ж��Ƿ���ͬһ������ʹ�ù�
//            if (i > 0 && nums[i - 1] == nums[i] && b1[i - 1] == false)
//            {
//                continue;
//            }
//            v1.push_back(nums[i]);
//            b1[i] = true;
//            b2[i] = true;
//            trace(b1, b2, nums);
//            v1.pop_back();
//            b1[i] = false;
//            b2[i] = false;
//        }
//    }
//    vector<vector<int>> permuteUnique(vector<int>& nums)
//    {
//        vector<bool> b1(nums.size(), false);
//        vector<bool> b2(nums.size(), false);
//        sort(nums.begin(), nums.end());
//        trace(b1, b2, nums);
//        return v2;
//    }
//};
//2.����һ�������ظ����ֵ����� nums �������� ���п��ܵ�ȫ���� ������� ������˳�� ���ش𰸡�
//class Solution {
//public:
//    //��������˳����κ�һ����Ϸ�ʽ
//    vector<vector<int>> v1;
//    vector<int> v2;
//    void trace(vector<bool>& b1, vector<int>& nums)
//    {
//        if (nums.size() == v2.size())
//        {
//            v1.push_back(v2);
//            return;
//        }
//        for (int i = 0;i < nums.size();i++)
//        {
//            if (b1[i] == true) { continue; }//˵��ʹ�ù�
//            b1[i] = true;
//            v2.push_back(nums[i]);
//            trace(b1, nums);
//            v2.pop_back();
//            b1[i] = false;
//        }
//    }
//    vector<vector<int>> permute(vector<int>& nums)
//    {
//        vector<bool> b1(nums.size(), false);
//        trace(b1, nums);
//        return v1;
//    }
//};