#include<iostream>
#include<vector>
#include<string>
using namespace std;
//1.����һ���������� ���ڵ� root�����ҳ��ö������� ��ײ� ����� �ڵ��ֵ��
//�����������������һ���ڵ㡣
//class Solution {
//public:
//    int maxDepth = INT_MIN;
//    int result;
//    void traversal(TreeNode* root, int depth) {
//        if (root->left == NULL && root->right == NULL) {
//            if (depth > maxDepth) {
//                maxDepth = depth;
//                result = root->val;
//            }
//            return;
//        }
//        if (root->left) {
//            traversal(root->left, depth + 1); // �����Ż���
//        }
//        if (root->right) {
//            traversal(root->right, depth + 1); // �����Ż���
//        }
//        return;
//    }
//    int findBottomLeftValue(TreeNode* root) {
//        traversal(root, 0);
//        return result;
//    }
//};
//2.����������ĸ��ڵ� root ��һ����ʾĿ��͵����� targetSum ���жϸ������Ƿ���� ���ڵ㵽Ҷ�ӽڵ� ��·��������·�������нڵ�ֵ��ӵ���Ŀ��� targetSum ��������ڣ����� true �����򣬷��� false ��
//Ҷ�ӽڵ� ��ָû���ӽڵ�Ľڵ㡣
//class Solution {
//public:
//    void digui(TreeNode* root, vector<int>& v1, int sum)
//    {
//        if (!root->right && !root->left)
//        {
//            //Ҷ�ӽ��
//            sum += root->val;
//            v1.push_back(sum);
//        }
//        if (root->left)
//        {
//            sum += root->val;
//            digui(root->left, v1, sum);
//            sum -= root->val;
//        }
//        if (root->right)
//        {
//            sum += root->val;
//            digui(root->right, v1, sum);
//            sum -= root->val;
//        }
//    }
//    bool hasPathSum(TreeNode* root, int targetSum)
//    {
//        if (root == nullptr)
//        {
//            return false;
//        }
//        vector<int> v1;
//        digui(root, v1, 0);
//        if (count(v1.begin(), v1.end(), targetSum))
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};