//1.����һ���������� nums ���ҳ����������и������в�ͬ�ĵ��������У������������� ����������Ԫ�� ������԰� ����˳�� ���ش𰸡�
//�����п��ܺ����ظ�Ԫ�أ����������������ȣ�Ҳ���������������е�һ���������
//class Solution {
//public:
//    vector<vector<int>> v1;
//    vector<int> v2;
//    bool panduan(vector<int> v1)//�жϴ���������Ƿ��ǵ�������
//    {
//        for (int i = 0;i < v1.size() - 1;i++)
//        {
//            if (v1[i] > v1[i + 1])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//    void trace(vector<int>& nums, int startindedx, vector<bool>& b)
//    {
//        //��ѯÿһ�������У�������ȴ���2������һ���������У���ô�㽫����뵽������
//        if (v2.empty() || v2.size() == 1)
//        {
//
//        }
//        else
//        {
//            if (panduan(v2))
//            {
//                v1.push_back(v2);
//            }
//            if (!panduan(v2))
//            {
//                return;
//            }
//        }
//        for (int i = startindedx;i < nums.size();i++)
//        {
//            if (i > 0 && nums[i] == nums[i - 1] && b[i - 1] == false)
//            {
//                continue;
//            }
//            v2.push_back(nums[i]);
//            b[i] = true;
//            trace(nums, i + 1, b);
//            b[i] = false;
//            v2.pop_back();
//        }
//    }
//    vector<vector<int>> findSubsequences(vector<int>& nums)
//    {
//        int x = 0;
//        for (int i = 1;i < nums.size();i++)
//        {
//            if (nums[i] < nums[i - 1])
//            {
//                x = i;
//                break;
//            }
//        }
//        if (x == 0)
//        {
//            //˵�����յ���˳��
//            vector<bool> b1(nums.size(), false);
//            trace(nums, 0, b1);
//            return v1;
//        }
//        vector<int> v2(nums.begin(), nums.begin() + x);
//        vector<bool> b1(v2.size(), false);
//        trace(v2, 0, b1);
//        return v1;
//    }
//};
//2.����һ�ݺ����б� tickets ������ tickets[i] = [fromi, toi] ��ʾ�ɻ������ͽ���Ļ����ص㡣����Ը��г̽������¹滮����
//������Щ��Ʊ������һ���� JFK������Ϲ��ʻ��������������������Ը��г̱���� JFK ��ʼ��������ڶ�����Ч���г̣����㰴�ֵ����򷵻���С���г���ϡ�
//���磬�г�["JFK", "LGA"] ��["JFK", "LGB"] ��Ⱦ͸�С���������ǰ��
//�ٶ����л�Ʊ���ٴ���һ�ֺ�����г̡������еĻ�Ʊ ���붼��һ�� �� ֻ����һ�Ρ�
// �Լ�д�ģ�Ч�ʵ�,��ʱ
//class Solution {
//public:
//    //����:1.����ʹ���ظ��ģ�Ҳ����˵ÿ��Ҫ����һ���������һ��λ�ÿ�ʼ(startindex)
//    //����޷���֤��һ����������Ҫȡ����λ��(jfk),������ǲ���¼��ʼλ�ã�ÿ�εݹ��
//    //0��ʼ��ȥ�ز���ʹ��used����ʵ��
//    //2.ÿ����Ʊ����һ�Σ���ô�жϽ�������������v1.size()-1 == tickets.size()
//    vector<string> v1;
//    vector<vector<string>> v2;
//    void trace(vector<vector<string>>& tickets, vector<bool>& b1)
//    {
//        if (!v1.empty() && v1.size() == tickets.size() + 1)
//        {
//            v2.push_back(v1);
//        }
//        for (int i = 0;i < tickets.size();i++)
//        {
//            if (v1.empty())
//            {
//                //�ǿղ����ж�,��ʱû��ҪѰ�ҵ�Ԫ��
//                if (tickets[i][0] == "JFK")
//                {
//                    //�ҵ���
//                    b1[i] = true;//�Ѿ�ʹ�ù�
//                    v1.push_back(tickets[i][0]);
//                    v1.push_back(tickets[i][1]);
//                    trace(tickets, b1);
//                    b1[i] = false;
//                    v1.pop_back();
//                    v1.pop_back();
//                }
//                else
//                {
//                    //δ�ҵ�
//                    continue;
//                }
//            }
//            else
//            {
//                //��Ϊ�գ������Ѿ��ҵ���
//                if (b1[i] == true)
//                {
//                    continue;//�Ѿ�ʹ�ù���pass
//                }
//                //δ��ʹ�ù�
//                if (tickets[i][0] == v1.back())
//                {
//                    v1.push_back(tickets[i][1]);
//                    b1[i] = true;
//                    trace(tickets, b1);
//                    b1[i] = false;
//                    v1.pop_back();
//                }
//                else
//                {
//                    continue;
//                }
//            }
//        }
//    }
//    //�ж�����vector<string>
//    bool panduan(vector<string> v1, vector<string> v2)
//    {
//        for (int i = 0;i < v1.size();i++)
//        {
//            if (v1[i] == v2[i])
//            {
//                continue;
//            }
//            if (v1[i] > v2[i])
//            {
//                return false;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return true;
//    }
//    vector<string> findItinerary(vector<vector<string>>& tickets)
//    {
//        vector<bool> b1;
//        b1.resize(tickets.size(), false);
//        trace(tickets, b1);
//        if (v2.size() == 1)
//        {
//            return v2[0];
//        }
//        else if (v2.size() == 0)
//        {
//            vector<string> v3;
//            return v3;
//        }
//        else
//        {
//            vector<string> max = v2[0];
//            for (int i = 1;i < v2.size();i++)
//            {
//                if (panduan(max, v2[i]))
//                {
//                    max = max;
//                }
//                else
//                {
//                    max = v2[i];
//                }
//            }
//            return max;
//        }
//    }
//};
//class Solution {
//private:
//    // unordered_map<��������, map<�������, �������>> targets
//    unordered_map<string, map<string, int>> targets;
//    bool backtracking(int ticketNum, vector<string>& result) {
//        if (result.size() == ticketNum + 1) {
//            return true;
//        }
//        for (pair<const string, int>& target : targets[result[result.size() - 1]]) {
//            if (target.second > 0) { // ��¼��������Ƿ�ɹ���
//                result.push_back(target.first);
//                target.second--;
//                if (backtracking(ticketNum, result)) return true;
//                result.pop_back();
//                target.second++;
//            }
//        }
//        return false;
//    }
//public:
//    vector<string> findItinerary(vector<vector<string>>& tickets) {
//        targets.clear();
//        vector<string> result;
//        for (const vector<string>& vec : tickets) {
//            targets[vec[0]][vec[1]]++; // ��¼ӳ���ϵ
//        }
//        result.push_back("JFK"); // ��ʼ����
//        backtracking(tickets.size(), result);
//        return result;
//    }
//};