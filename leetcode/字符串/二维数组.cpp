#include<iostream>
using namespace std;
#include<vector>
//1.����һ���� N �� N �����ʾ��ͼ������ÿ�����صĴ�СΪ 4 �ֽڡ��������һ���㷨����ͼ����ת 90 �ȡ�
//��ռ�ö����ڴ�ռ��ܷ�������
// ˼��:˳ʱ������ת�Խ��ߣ�����ת���е�Ԫ�أ���ʱ���෴
//class Solution {
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//        for (int i = 0;i < n;i++)
//        {
//            for (int j = i + 1;j < n;j++)
//            {
//                swap(matrix[i][j], matrix[j][i]);
//            }
//        }
//        for (auto& y : matrix)
//        {
//            reverse(y.begin(), y.end());
//        }
//    }
//};
//2.��дһ���㷨����M �� N������ĳ��Ԫ��Ϊ0���������ڵ����������㡣
//void setZeroes(vector<vector<int>>& matrix) {
//    int arr1[10];
//    int arr2[10];
//    for (int i = 0;i < matrix.size();i++)
//    {
//        for (int j = 0;j < matrix.size();j++)
//        {
//            if (matrix[i][j] == 0)
//            {
//                arr1[i] = 1;
//                arr2[j] = 1;
//            }
//        }
//    }
//    for (int i = 0;i < matrix.size();i++)
//    {
//        if (arr1[i] == 1)
//        {
//            for (int j = 0;j < matrix.size();j++)
//            {
//                matrix[i][j] = 0;
//            }
//        }
//        if (arr2[i] == 1)
//        {
//            for (int j = 0;j < matrix.size();j++)
//            {
//                matrix[j][i] = 0;
//            }
//        }
//    }
//}
//int main()
//{
//    vector<vector<int>> v1;
//    vector<int> v2{ 0,1,2,0 };
//    vector<int> v3{ 3,4,5,2 };
//    vector<int> v4{ 1,3,1,5 };
//    int arr[3][4] = { 0,1,2,0 ,3,4,5,2,1,3,1,5 };
//    v1.push_back(v2);
//    v1.push_back(v3);
//    v1.push_back(v4);
//    setZeroes(v1);
//}
//3.����һ����СΪ m x n �ľ��� mat �����ԶԽ��߱�����˳����һ�����鷵����������е�����Ԫ�ء�
//class Solution
//{
//public:
//    vector<int> findDiagonalOrder(vector<vector<int>>& mat)
//    {
//        int row = mat.size();
//        vector<int> v1;
//        int col = mat[0].size();
//        int x = 1;//��������
//        for (int i = 0;i < row + col - 1;i++)
//        {
//            if (i % 2)
//            {
//                int c = (i < col) ? i : col - 1;
//                int r = i - c;
//                while (c >= 0 && r < row)
//                    v1.push_back(mat[r++][c--]);
//            }
//            else
//            {
//                int r = (i < row) ? i : row - 1;
//                int c = i - r;
//                while (c < col && r >= 0)
//                    v1.push_back(mat[r--][c++]);
//            }
//        }
//        return v1;
//    }
//};
//1���ȵó������Ĵ�����Ҳ���ǶԽ��ߵ�����Ϊi = n + m - 1�����������������Ҳ����i < n + m - 1��
//    ��2���ڿ�ͼ���Խ����ϵ�ÿ��Ԫ������֮��Ϊi, Ҳ����Ԫ�ص�����xy��i�Ĺ�ϵΪ��x + y = i
//    ��3����α�������ͼ�У�ż����Ӧ�ĶԽ����ϵ�Ԫ���Ǵ������ϱ�������������Ӧ�ĶԽ����ϵ�Ԫ���Ǵ������±�������ôֻҪȷ����������ʼ��ͽ�����ͺ����������ȿ�ż���Խ��ߵ������յ㣬��Ϊ�����Խ��ߺ����෴��֪����ż���ģ�Ҳ���ѵó������ĵġ�
//    ��i < n - 1ʱ����ʼ������x = i����1��x����Ϊ0��iҲΪ0, ������ĺ�����x = 0
//    ��i >= n - 1ʱ����ʼ������x = n - 1, ��2��x����Ϊ2��iҲΪ2, �������������y = m - 1, ���ݣ�2���еĹ�ϵʽ, ���Եó�������x = i - (m - 1)
//    ����ż���Խ��߱���ʱ��ʼ���x������Ϊmin(i, n - 1)���������x����Ϊmax(0, i - (m - 1)), ������y����i - x