//1.����һ��������, �ҵ�����������ָ���ڵ������������ȡ�
//�ٶȰٿ�������������ȵĶ���Ϊ���������и��� T �������ڵ� p��q������������ȱ�ʾΪһ���ڵ� x��
//���� x �� p��q �������� x ����Ⱦ����ܴ�һ���ڵ�Ҳ���������Լ������ȣ�����
//class Solution {
//public:
//    bool panduan(TreeNode* root1, TreeNode* root2)
//    {
//        if (!root1)
//        {
//            return false;
//        }
//        if (root1 == root2)
//        {
//            return true;
//        }
//        else if (!root1->left && !root1->right)//��Ҷ�ӽ��
//        {
//            return false;
//        }
//        else
//        {
//            auto a = panduan(root1->left, root2);
//            auto b = panduan(root1->right, root2);
//            return a || b;
//        }
//    }
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//    {
//        if (panduan(root->left, p) && panduan(root->left, q))
//        {
//            //ͬʱ��������
//            return lowestCommonAncestor(root->left, p, q);
//        }
//        else if (panduan(root->right, p) && panduan(root->right, q))
//        {
//            return lowestCommonAncestor(root->right, p, q);
//        }
//        else
//        {
//            return root;
//        }
//    }
//};
//2.����һ������������, �ҵ�����������ָ���ڵ������������ȡ�
//�ٶȰٿ�������������ȵĶ���Ϊ���������и��� T ��������� p��q������������ȱ�ʾΪһ����� x������ x �� p��q �������� x ����Ⱦ����ܴ�һ���ڵ�Ҳ���������Լ������ȣ�����
//���磬�������¶��������� : root = [6, 2, 8, 0, 4, 7, 9, null, null, 3, 5
//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//    {
//        if (!root || root == p || root == q)//��Ϊroot����Ǿ��Ե�p��q�����ȣ������ھͷ���
//        {
//            return root;
//        }
//        auto a = lowestCommonAncestor(root->left, p, q);
//        auto b = lowestCommonAncestor(root->right, p, q);
//        if (a && b)//�ڸ��ڵ������
//        {
//            return root;
//        }
//        else
//        {
//            return a ? a : b;
//        }
//    }
//};