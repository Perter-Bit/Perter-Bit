#include<iostream>
using namespace std;
//��1����������������������ϲ�Ϊһ����������������Ҫ����������ʹ��ԭ����������Ĵ洢�ռ�, ������ռ�������Ĵ洢�ռ䡣���в��������ظ������ݡ�
typedef struct Lnode
{
    float data;
    struct Lnode* next;
}Lnode,*LinkList;
//void MergeList_L(LinkList& La, LinkList& Lb, LinkList& Lc) 
//{
//    LinkList pa = La->next;  LinkList pb = Lb->next;
//    LinkList pc = Lc = La; //��La��ͷ�����ΪLc��ͷ��� 
//    while (pa && pb) {
//        if (pa->data < pb->data) { pc->next = pa;pc = pa;pa = pa->next; }
//        else if (pa->data > pb->data) { pc->next = pb; pc = pb; pb = pb->next; }
//        else {// ���ʱȡLa��Ԫ�أ�ɾ��Lb��Ԫ��
//            pc->next = pa;pc = pa;pa = pa->next;
//            LinkList q = pb->next;delete pb;pb = q;
//        }
//    }
//    pc->next = pa ? pa : pb;    //����ʣ���  
//    delete Lb;             //�ͷ�Lb��ͷ���}  
//}
//��2���������ǵݼ�����������ϲ�Ϊһ���ǵ�������������Ҫ����������ʹ��ԭ����������Ĵ洢�ռ�, ������ռ�������Ĵ洢�ռ䡣�����������ظ������ݡ�
//void unionl(LinkList& La, LinkList& Lb, LinkList& Lc)
//{
//    LinkList pa = La->next;  LinkList pb = Lb->next;
//    LinkList pc = Lc = La; //��La��ͷ�����ΪLc��ͷ��� 
//    Lc->next = NULL;
//    while (pa || pb) {
//        LinkList q;
//        if (!pa) { q = pb;  pb = pb->next; }
//        else if (!pb) { q = pa;  pa = pa->next; }
//        else if (pa->data <= pb->data) { q = pa;  pa = pa->next; }
//        else { q = pb;  pb = pb->next; }
//        q->next = Lc->next;  Lc->next = q;    // ����
//    }
//    delete Lb;             //�ͷ�Lb��ͷ���}  
//}
//��3����֪��������A��B�ֱ��ʾ�������ϣ���Ԫ�ص������С�������㷨���A��B�Ľ������������A�����С�
//void Mix(LinkList& La, LinkList& Lb, LinkList& Lc) 
//{
//    LinkList pa = La->next;  LinkList pb = Lb->next;
//    LinkList pc = Lc = La; //��La��ͷ�����ΪLc��ͷ��� 
//    while (pa && pb)
//        if (pa->data == pb->data)//�������������С�
//        {
//            pc->next = pa;pc = pa;pa = pa->next;
//            LinkList u = pb;pb = pb->next; delete u;
//        }
//        else if (pa->data < pb->data) { LinkList u = pa;pa = pa->next; delete u; }
//        else { LinkList u = pb; pb = pb->next; delete u; }
//    while (pa) { LinkList u = pa; pa = pa->next; delete u; }//�ͷŽ��ռ�
//    while (pb) {
//        LinkList u = pb; pb = pb->next; delete u; //�ͷŽ��ռ�
//        pc->next = NULL;//������β��ǡ�
//        delete Lb;
//}
//��4����֪��������A��B�ֱ��ʾ�������ϣ���Ԫ�ص������С�������㷨�����������A��B �Ĳ����������A�г��ֶ�����B�г��ֵ�Ԫ�������ɵļ��ϣ�������ͬ������ʽ�洢��ͬʱ���ظü��ϵ�Ԫ�ظ�����
//void  Difference��LinkList A ,LinkList B, LinkList* n��
//{ p = A->next;                  //p��q�ֱ�������A��B�Ĺ���ָ�롣
//    q = B->next;
//    LinkList pre = A;       //preΪA��p��ָ����ǰ������ָ�롣
// while��p != null && q != null)
//if��p->data < q->data��{pre = p��p = p->next;*n++��}//A�����е�ǰ���ָ����ơ�
//else if��p->data > q->data��q = q->next; //B�����е�ǰ���ָ����ơ�
//else {
//    pre->next = p->next;        //����A��B��Ԫ��ֵ��ͬ�Ľ�㣬Ӧɾ����
//    LinkList u = p�� p = p->next; delete u;
//}  //ɾ�����
//��5������㷨��һ����ͷ���ĵ�����A�ֽ�Ϊ����������ͬ�ṹ������B��C������B��Ľ��ΪA����ֵС����Ľ�㣬��C��Ľ��ΪA����ֵ������Ľ�㣨����A��Ԫ������Ϊ���ͣ�Ҫ��B��C������A��Ľ�㣩��
//void fenjie(LinkList A, LinkList B, LinkList C)
//{
//    B = C = A;
//    LinkList q= A->next;
//    LinkList p =B->next;
//    LinkList r =C->next;
//    while (q)
//    {
//        if (q->data < 0)
//        {
//            p = q;
//            q = q->next;
//        }
//        else if (q->data > 0)
//        {
//            r = q;
//            q = q->next;
//        }
//        else
//        {
//            q = q->next;
//        }
//    }
//    B->next = NULL;
//    C->next = NULL;
//}
//��6�����һ���㷨��ͨ��һ�˱����ڵ�������ȷ��ֵ���Ľ�㡣
//int Max(LinkList L) {
//	if (L->next == NULL) return NULL;
//	LinkList pmax = L->next; //�ٶ���һ����������ݾ������ֵ
//	LinkList p = L->next->next;
//	while (p != NULL) {//�����һ��������
//		if (p->data > pmax->data) pmax = p;
//		p = p->next;
//	}
//	return pmax->data;
//}
//��7�����һ���㷨��ͨ������һ�ˣ������������н������ӷ�����ת��������ԭ��Ĵ洢�ռ䡣
//void  inverse(LinkList& L) {
//    // ���ô�ͷ���ĵ����� L
//    LinkList p = L->next;  L->next = NULL;
//    while (p) {
//        LinkList q = p->next;    // qָ��*p�ĺ��
//        p->next = L->next;
//        L->next = p;       // *p������ͷ���֮��
//        p = q;
//    } 
//}
//��8�����һ���㷨��ɾ����������������ֵ����mink��С��maxk������Ԫ�أ�mink��maxk�Ǹ�����������������ֵ���Ժͱ��е�Ԫ����ͬ��Ҳ���Բ�ͬ ����
//void de(LinkList& L, int mink, int maxk) {
//    LinkList p = L->next; //��Ԫ���
//    LinkList pre;
//    while (p && p->data <= mink)
//    {
//        pre = p;  p = p->next;
//    } //���ҵ�һ��ֵ>mink�Ľ��
//    if (p) {
//        while (p && p->data < maxk)  p = p->next;
//        // ���ҵ�һ��ֵ ��maxk �Ľ��
//        LinkList q = pre->next;  pre->next = p;  // �޸�ָ��
//        while (q != p)
//        {
//           LinkList s = q->next;  delete q;  q = s;
//        } // �ͷŽ��ռ�
//    }
//}
//9����֪pָ��˫��ѭ�������е�һ����㣬����ṹΪdata��prior��next������д���㷨change(p), ����p��ָ��Ľ�������ǰ׺����˳��
//void  Exchange��LinkedList p��//p��˫��ѭ�������е�һ����㣬���㷨��p��ָ�������ǰ����㽻����
//{ q = p->llink��
// q->llink->rlink = p��   
// p->llink = q->llink��  
// q->rlink = p->rlink��  
// q->llink = p��         
// p->rlink->llink = q��  
// p->rlink = q��     
//}
//��10����֪����Ϊn�����Ա�A����˳��洢�ṹ����дһʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�ΪO(1)���㷨�����㷨ɾ�����Ա�������ֵΪitem������Ԫ�ء�
//void  DE(int A[], int n,int item)
//{
//    int i = 0;int j = n;
//    while (i < j)
//    {
//        if (A[i] == n)
//        {
//            while (true)
//            {
//                if (A[j] != item)
//                {
//                    A[j] = A[i];
//                    break;
//                }
//                else
//                {
//                    j--;
//                }
//            }
//            i++;
//        }
//        else
//        {
//            i++;
//        }
//    }
//}

