#include<iostream>
#include<vector>
#include<string>
using namespace std;
//1.����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������
//class Solution {
//public:
//    void trace(TreeNode* root, vector<int>& v1)
//    {
//        if (root == NULL)
//        {
//            return;
//        }
//        else
//        {
//            v1.push_back(root->val);
//            trace(root->left, v1);
//            trace(root->right, v1);
//        }
//    }
//    vector<int> preorderTraversal(TreeNode* root)
//    {
//        vector<int> result;
//        trace(root, result);
//        return result;
//    }
//};
//2.����һ�ö������ĸ��ڵ� root ��������ڵ�ֵ�� ������� ��
//class Solution {
//public:
//    void trace(TreeNode* root, vector<int>& v1)
//    {
//        if (root == NULL)
//        {
//            return;
//        }
//        else
//        {
//            trace(root->left, v1);
//            trace(root->right, v1);
//            v1.push_back(root->val);
//        }
//    }
//    vector<int> postorderTraversal(TreeNode* root)
//    {
//        vector<int> result;
//        trace(root, result);
//        return result;
//    }
//};
//3.����һ���������ĸ��ڵ� root ������ ���� ���� ���� ��
//class Solution {
//public:
//    void trace(TreeNode* root, vector<int>& v1)
//    {
//        if (root == NULL)
//        {
//            return;
//        }
//        else
//        {
//            trace(root->left, v1);
//            v1.push_back(root->val);
//            trace(root->right, v1);
//        }
//    }
//    vector<int> inorderTraversal(TreeNode* root)
//    {
//        vector<int> result;
//        trace(root, result);
//        return result;
//    }
//};
//4.����������ĸ��ڵ� root ��������ڵ�ֵ�� ������� �� �������أ������ҷ������нڵ㣩��
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root)
//    {
        //deque<TreeNode*> d1;
        //vector<vector<int>> v1;
        //if (root)
        //{
        //    d1.push_back(root);
        //}
        //while (d1.size())
        //{
        //    //�ȵ�û����Ӻ���ζ�ű����Ѿ�������
        //    auto size = d1.size();
        //    vector<int> v2;
        //    for (int i = 0;i < size;i++)
        //    {
        //        TreeNode* x = d1.front();
        //        d1.pop_front();
        //        v2.push_back(x->val);
        //        if (x->left)
        //        {
        //            d1.push_back(x->left);
        //        }
        //        if (x->right)
        //        {
        //            d1.push_back(x->right);
        //        }

        //    }
        //    v1.push_back(v2);//һ�����
        //}
        //return v1;
//    }
//};
//5.����������ĸ��ڵ� root ��������ڵ�ֵ �Ե����ϵĲ������ �� ��������Ҷ�ӽڵ����ڲ㵽���ڵ����ڵĲ㣬���������ұ�����
//class Solution {
//public:
//    vector<vector<int>> levelOrderBottom(TreeNode* root)
//    {
        //deque<TreeNode*> d1;
        //vector<vector<int>> v1;
        //if (root)
        //{
        //    d1.push_back(root);
        //}
        //while (d1.size())
        //{
        //    //�ȵ�û����Ӻ���ζ�ű����Ѿ�������
        //    auto size = d1.size();
        //    vector<int> v2;
        //    for (int i = 0;i < size;i++)
        //    {
        //        TreeNode* x = d1.front();
        //        d1.pop_front();
        //        v2.push_back(x->val);
        //        if (x->left)
        //        {
        //            d1.push_back(x->left);
        //        }
        //        if (x->right)
        //        {
        //            d1.push_back(x->right);
        //        }

        //    }
        //    v1.push_back(v2);//һ�����
        //}
        //reverse(v1.begin(), v1.end());
        //return v1;
//    }
//};
//6.����һ���������� ���ڵ� root�������Լ�վ�������Ҳ࣬���մӶ������ײ���˳�򣬷��ش��Ҳ����ܿ����Ľڵ�ֵ��
//class Solution {
//public:
//    vector<int> rightSideView(TreeNode* root)
//    {
//        //��α���˼��
        //vector<int> v1;
        //deque<TreeNode*> d1;
        //if (root)
        //{
        //    d1.push_back(root);
        //}
        //while (d1.size())
        //{
        //    auto size = d1.size();
        //    vector<int> v2;
        //    for (int i = 0;i < size;i++)
        //    {
        //        auto f = d1.front();
        //        d1.pop_front();
        //        v2.push_back(f->val);
        //        if (f->left)
        //        {
        //            d1.push_back(f->left);
        //        }
        //        if (f->right)
        //        {
        //            d1.push_back(f->right);
        //        }
        //    }
        //    v1.push_back(v2[size - 1]);
        //}
        //return v1;
//    }
//};
//7.����һ���ǿն������ĸ��ڵ� root, ���������ʽ����ÿһ��ڵ��ƽ��ֵ����ʵ�ʴ���� 10 - 5 ���ڵĴ𰸿��Ա����ܡ�
//class Solution {
//public:
//    vector<double> averageOfLevels(TreeNode* root)
//    {
//        deque<TreeNode*> d1;
//        vector<double> v1;
//        if (root)
//        {
//            d1.push_back(root);
//        }
//        while (d1.size())
//        {
//            //�ȵ�û����Ӻ���ζ�ű����Ѿ�������
//            auto size = d1.size();
//            vector<int> v2;
//            double sum = 0.0;
//            for (int i = 0;i < size;i++)
//            {
//                TreeNode* x = d1.front();
//                d1.pop_front();
//                v2.push_back(x->val);
//                sum += x->val;
//                if (x->left)
//                {
//                    d1.push_back(x->left);
//                }
//                if (x->right)
//                {
//                    d1.push_back(x->right);
//                }
//            }
//            sum = sum / size;
//            v1.push_back(sum);
//        }
//        return v1;
//    }
//};
//8.����һ�� N ������������ڵ�ֵ�Ĳ�����������������ң�����������
//�������л��������ò��������ÿ���ӽڵ㶼�� null ֵ�ָ����μ�ʾ������
//class Solution {
//public:
//    vector<vector<int>> levelOrder(Node* root)
//    {
//        vector<vector<int>> v1;
//        deque<Node*> d1;
//        if (root)
//        {
//            d1.push_back(root);
//        }
//        while (d1.size())
//        {
//            vector<int> v2;
//            int size = d1.size();
//            for (int i = 0;i < size;i++)
//            {
//                Node* x = d1.front();
//                d1.pop_front();
//                v2.push_back(x->val);
//                int y = x->children.size();
//                for (int i = 0;i < y;i++)
//                {
//                    if (x->children[i])
//                    {
//                        d1.push_back(x->children[i]);
//                    }
//                }
//            }
//            v1.push_back(v2);
//        }
//        return v1;
//    }
//};
//9.����һ�ö������ĸ��ڵ� root �����ҳ��ö�������ÿһ������ֵ��
//class Solution {
//public:
//    vector<int> largestValues(TreeNode* root)
//    {
//        deque<TreeNode*> d1;
//        vector<int> v1;
//        if (root)
//        {
//            d1.push_back(root);
//        }
//        while (d1.size())
//        {
//            //�ȵ�û����Ӻ���ζ�ű����Ѿ�������
//            auto size = d1.size();
//            int max = d1.front()->val;
//            for (int i = 0;i < size;i++)
//            {
//                TreeNode* x = d1.front();
//                d1.pop_front();
//                max = max > x->val ? max : x->val;
//                if (x->left)
//                {
//                    d1.push_back(x->left);
//                }
//                if (x->right)
//                {
//                    d1.push_back(x->right);
//                }
//            }
//            v1.push_back(max);//һ�����
//        }
//        return v1;
//    }
//};
//10.����һ�� ���������� ��������Ҷ�ӽڵ㶼��ͬһ�㣬ÿ�����ڵ㶼�������ӽڵ㡣�������������£�
//struct Node {
//    int val;
//    Node* left;
//    Node* right;
//    Node* next;
//}
//�������ÿ�� next ָ�룬�����ָ��ָ������һ���Ҳ�ڵ㡣����Ҳ�����һ���Ҳ�ڵ㣬�� next ָ������Ϊ NULL��
//��ʼ״̬�£����� next ָ�붼������Ϊ NULL��
//class Solution {
//public:
//    Node* connect(Node* root)
//    {
//        deque<Node*> d1;
//        Node* next = root;
//        if (root)
//        {
//            d1.push_back(root);
//        }
//        while (d1.size())
//        {
//            deque<Node*> d2;
//            auto x = d1.front();
//            d1.pop_front();
//            if (x->left)
//            {
//                d2.push_back(x->left);
//            }
//            if (x->right)
//            {
//                d2.push_back(x->right);
//            }
//            while (!d1.empty())
//            {
//                auto y = d1.front();
//                x->next = y;
//                d1.pop_front();
//                if (y->left)
//                {
//                    d2.push_back(y->left);
//                }
//                if (y->right)
//                {
//                    d2.push_back(y->right);
//                }
//                x = y;
//            }
//            if (d1.empty())
//            {
//                x->next = NULL;
//                d1 = d2;
//            }
//        }
//        return root;
//    }
//};
//11.����һ����������
//struct Node {
//    int val;
//    Node* left;
//    Node* right;
//    Node* next;
//}
//�������ÿ�� next ָ�룬�����ָ��ָ������һ���Ҳ�ڵ㡣����Ҳ�����һ���Ҳ�ڵ㣬�� next ָ������Ϊ NULL ��
//��ʼ״̬�£����� next ָ�붼������Ϊ NULL ��
//class Solution {
//public:
//    Node* connect(Node* root)
//    {
//        deque<Node*> d1;
//        Node* next = root;
//        if (root)
//        {
//            d1.push_back(root);
//        }
//        while (d1.size())
//        {
//            deque<Node*> d2;
//            auto x = d1.front();
//            d1.pop_front();
//            if (x->left)
//            {
//                d2.push_back(x->left);
//            }
//            if (x->right)
//            {
//                d2.push_back(x->right);
//            }
//            while (!d1.empty())
//            {
//                auto y = d1.front();
//                x->next = y;
//                d1.pop_front();
//                if (y->left)
//                {
//                    d2.push_back(y->left);
//                }
//                if (y->right)
//                {
//                    d2.push_back(y->right);
//                }
//                x = y;
//            }
//            if (d1.empty())
//            {
//                x->next = NULL;
//                d1 = d2;
//            }
//        }
//        return root;
//    }
//};