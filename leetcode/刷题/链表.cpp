//1.����һ������ɾ������ĵ����� n ����㣬���ҷ��������ͷ��㡣
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n)
//    {
//        ListNode* curr = head;
//        int count = 0;
//        while (curr) {
//            count++;
//            curr = curr->next;
//        }
//        int m = count - n + 1;
//        curr = head;
//        for (int i = 1;i < m - 1;i++) {
//            curr = curr->next;
//        }
//        if (n == 1) {
//            if (count == 1) {
//                //Ϊ�˷�ֹhead->nextΪNULL
//                head = NULL;
//                return head;
//            }
//        }
//        if (n == count)
//        {
//            //ɾ����һ��Ԫ��
//            head = head->next;
//            return head;
//        }
//        curr->next = curr->next->next;
//        return head;
//    }
//};
//2.���������ͷ��� head ���뽫�䰴 ���� ���в����� ���������� ��
//class Solution {
//public:
//    ListNode* sortList(ListNode* head)
//    {
//        int len = 0;
//        ListNode* r = head;
//        while (r)
//        {
//            len++;
//            r = r->next;
//        }
//        if (!len)
//        {
//            return NULL;
//        }
//        vector<int> v1;
//        ListNode* p = head;
//        for (int i = 0;i < len;i++)
//        {
//            v1.push_back(p->val);
//            p = p->next;
//        }
//        sort(v1.begin(), v1.end());
//        ListNode* q = new ListNode;
//        q->val = v1[0];
//        q->next = NULL;
//        ListNode* s = q;
//        for (int i = 1;i < len;i++)
//        {
//            ListNode* f = new ListNode;
//            f->val = v1[i];
//            f->next = NULL;
//            s->next = f;
//            s = f;
//        }
//        return q;
//    }
//};
//3.���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣����������������ཻ�ڵ㣬���� null ��
//ͼʾ���������ڽڵ� c1 ��ʼ�ཻ��
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
//    {
//        while (headA)
//        {
//            ListNode* b = headB;
//            while (b)
//            {
//                if (b == headA)
//                {
//                    return b;
//                }
//                if (b->next)
//                {
//                    b = b->next;
//                }
//                else
//                {
//                    break;
//                }
//            }
//            if (headA->next)
//            {
//                headA = headA->next;
//            }
//            else
//            {
//                break;
//            }
//        }
//        return NULL;
//    }
//};
//4.���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head)
//    {
//        if (!head)
//        {
//            return NULL;
//        }
//        vector<int> v1;
//        ListNode* p = head;
//        int len = 0;
//        for (int i = 0;p;i++)
//        {
//            len++;
//            v1.push_back(p->val);
//            p = p->next;
//        }
//        ListNode* q = new ListNode;
//        ListNode* s = new ListNode;
//        q->val = v1[len - 1];
//        q->next = NULL;
//        s = q;
//        for (int i = len - 2;i >= 0;i--)
//        {
//            ListNode* g = new ListNode;
//            g->val = v1[i];
//            g->next = NULL;
//            s->next = g;
//            s = g;
//        }
//        return q;
//    }
//};
