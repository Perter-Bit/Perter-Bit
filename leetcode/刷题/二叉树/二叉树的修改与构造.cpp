//1.����һ�ö������ĸ��ڵ� root ����ת��ö�����������������ڵ㡣
//class Solution {
//public:
//    void fanzhuan(TreeNode*& root)
//    {
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            return;
//        }
//        else
//        {
//            TreeNode* temp = root->left;
//            root->left = root->right;
//            root->right = temp;
//            if (root->right) { fanzhuan(root->right); }
//            if (root->left) { fanzhuan(root->left); }
//        }
//    }
//    TreeNode* invertTree(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return root;
//        }
//        else
//        {
//            fanzhuan(root);
//            return root;
//        }
//    }
//};
//2.���������������� inorder �� postorder ������ inorder �Ƕ���������������� postorder ��ͬһ�����ĺ�����������㹹�첢������� ������ ��
//class Solution {
//public:
//    unordered_map<int, int> pos;
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        int n = inorder.size();
//        for (int i = 0; i < n; i++) {
//            pos[inorder[i]] = i;     //��¼��������ĸ��ڵ�λ��
//        }
//        return dfs(inorder, postorder, 0, n - 1, 0, n - 1);
//    }
//    TreeNode* dfs(vector<int>& inorder, vector<int>& postorder, int il, int ir, int pl, int pr) {
//        if (il > ir) return nullptr;
//        int k = pos[postorder[pr]];   //����������ڵ�λ��
//        TreeNode* root = new TreeNode(postorder[pr]); //�������ڵ�
//        root->left = dfs(inorder, postorder, il, k - 1, pl, pl + k - 1 - il);
//        root->right = dfs(inorder, postorder, k + 1, ir, pl + k - 1 - il + 1, pr - 1);
//        return root;
//    }
//};
//3.����һ�����ظ����������� nums �� �������� ������������㷨�� nums �ݹ�ع��� :
//����һ�����ڵ㣬��ֵΪ nums �е����ֵ��
//�ݹ�������ֵ ��� �� ������ǰ׺�� ������������
//�ݹ�������ֵ �ұ� �� �������׺�� ������������
//���� nums ������ �������� ��
//class Solution {
//public:
//    TreeNode* gouzao(int left, int right, vector<int>& nums)
//    {
//        if (left > right)
//        {
//            return nullptr;
//        }
//        int best = left;
//        for (int i = left + 1; i <= right; ++i) {
//            if (nums[i] > nums[best])
//            {
//                best = i;
//            }
//        }
//        TreeNode* node = new TreeNode(nums[best]);
//        node->left = gouzao(left, best - 1, nums);
//        node->right = gouzao(best + 1, right, nums);
//        return node;
//    }
//    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
//    {
//        return gouzao(0, nums.size() - 1, nums);
//    }
//};
//4.�������ö������� root1 �� root2 ��
//����һ�£����㽫����һ�ø��ǵ���һ��֮��ʱ���������ϵ�һЩ�ڵ㽫���ص�������һЩ���ᣩ������Ҫ�����������ϲ���һ���¶�������
//�ϲ��Ĺ����ǣ���������ڵ��ص�����ô���������ڵ��ֵ�����Ϊ�ϲ���ڵ����ֵ�����򣬲�Ϊ null �Ľڵ㽫ֱ����Ϊ�¶������Ľڵ㡣���غϲ���Ķ�������
//ע�� : �ϲ����̱�����������ĸ��ڵ㿪ʼ
//class Solution {
//public:
//    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
//    {
//        TreeNode* root = new TreeNode;
//        if (root1 && root2)
//        {
//            root->val = root1->val + root2->val;
//            root->left = mergeTrees(root1->left, root2->left);
//            root->right = mergeTrees(root1->right, root2->right);
//        }
//        else if (root1 && !root2)
//        {
//            root = root1;
//            return root;
//        }
//        else if (!root1 && root2)
//        {
//            root = root2;
//            return root;
//        }
//        else
//        {
//            root = nullptr;
//            return root;
//        }
//        return root;
//    }
//};
