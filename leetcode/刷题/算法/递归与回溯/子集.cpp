//1.����һ���������� nums �������е�Ԫ�� ������ͬ �����ظ��������п��ܵ��Ӽ����ݼ�����
//�⼯ ���� �����ظ����Ӽ�������԰� ����˳�� ���ؽ⼯��
//class Solution {
//public:
//    vector<vector<int>> v1;
//    vector<int> v2;
//    int k = 0;
//    void trace(int k, int startindex, vector<int>& nums)
//    {
//        if (v2.size() == k && !v2.empty())
//        {
//            v1.push_back(v2);
//            return;
//        }
//        for (int i = startindex;i < nums.size();i++)
//        {
//            v2.push_back(nums[i]);
//            trace(k, i + 1, nums);
//            v2.pop_back();
//        }
//    }
//    vector<vector<int>> subsets(vector<int>& nums)
//    {
//        v1.push_back(v2);
//        for (int i = 1;i <= nums.size();i++)
//        {
//            trace(i, 0, nums);
//            v2.clear();
//        }
//
//        return v1;
//    }
//};
//2.����һ���������� nums �����п��ܰ����ظ�Ԫ�أ����㷵�ظ��������п��ܵ��Ӽ����ݼ�����
//�⼯ ���� �����ظ����Ӽ������صĽ⼯�У��Ӽ����԰� ����˳�� ���С�
//class Solution {
//private:
//    vector<vector<int>> result;
//    vector<int> path;
//    void backtracking(vector<int>& nums, int startIndex, vector<bool>& used) {
//        result.push_back(path);
//        for (int i = startIndex; i < nums.size(); i++) {
//            // used[i - 1] == true��˵��ͬһ��֦candidates[i - 1]ʹ�ù�
//            // used[i - 1] == false��˵��ͬһ����candidates[i - 1]ʹ�ù�
//            // ������Ҫ��ͬһ����ʹ�ù���Ԫ�ؽ�������
//            if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == false) {
//                continue;
//            }
//            path.push_back(nums[i]);
//            used[i] = true;
//            backtracking(nums, i + 1, used);
//            used[i] = false;
//            path.pop_back();
//        }
//    }
//
//public:
//    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        result.clear();
//        path.clear();
//        vector<bool> used(nums.size(), false);
//        sort(nums.begin(), nums.end()); // ȥ����Ҫ����
//        backtracking(nums, 0, used);
//        return result;
//    }
//};