#include <stdio.h>
//��дһ���㷨����M �� N������ĳ��Ԫ��Ϊ0���������ڵ����������㡣
//void setZeroes(int** matrix, int matrixSize, int* matrixColSize)
//{
//    int i, j;
//    int z = *matrixColSize;
//    int tmp = 0;
//    int cmp = 0;
//    int x[1000] = { 0 };//��������һά��������¼����0��i,j
//    int y[1000] = { 0 };
//    for (i = 0;i < matrixSize;i++)//����Ѱ��
//    {
//        for (j = 0;j < z;j++)
//        {
//            if (matrix[i][j] == 0)
//            {
//                x[i] = i + 1;
//                y[j] = j + 1;
//                if (i > tmp)//ͨ���Ƚϵó����ճ���
//                {
//                    tmp = i;
//                }
//                if (j > cmp)
//                {
//                    cmp = j;
//                }
//            }
//        }
//    }
//    for (i = 0;i <= tmp;i++)//����i,jֵ����������0����
//    {
//        if (x[i] == i + 1)
//        {
//            for (j = 0;j < z;j++)
//            {
//                matrix[i][j] = 0;
//            }
//        }
//    }
//    for (j = 0;j <= cmp;j++)
//    {
//        if (y[j] == j + 1)
//        {
//            for (i = 0;i < matrixSize;i++)
//            {
//                matrix[i][j] = 0;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[3][3] = { {1,1,1},{1,0,1},{1,1,1} };//�����ά����
//    int* b[3] = { arr[0],arr[1],arr[2] };//int*
//    int** p = &(*b);//int**
//    int  matrixColSize = 3;
////    int* x = &matrixColSize;
////    setZeroes(p,3,x);
//
//}
//����һ����СΪ m x n �ľ��� mat �����ԶԽ��߱�����˳����һ�����鷵����������е�����Ԫ�ء�
//int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize)
//{
//    if (matSize == 0)
//    {
//        //����Ϊ�գ�����0                                
//        *returnSize = 0;
//        return NULL;
//    }
//    int len = matSize * (*matColSize);
//    *returnSize = len;
//    int* returnNums = (int*)malloc(sizeof(int) * len);//�޷��������Ϊ���������Զ�̬���ٿռ�
//    int row = 0;
//    int col = 0;
//    int index = 0;
//
//    //ѭ����������
//    while (index < len)
//    {
//        returnNums[index] = mat[row][col];
//        if ((row + col) % 2 == 0)
//        {                                                   //�±��Ϊż���������ϱ���
//            if (col < (*matColSize) - 1)//δ���߽�
//            {
//                col++;
//                if (row > 0)
//                    row--;
//            }
//            else
//            {
//                row++;
//            }
//        }
//        else
//        {                                              //�±��Ϊ�����������±���
//            if (row < matSize - 1)
//            {
//                row++;
//                if (col > 0)
//                    col--;
//            }
//            else
//                col++;
//        }
//        index++;
//    }
//    return returnNums;
//}
//��дһ�������������ַ��������е������ǰ׺��
//��������ڹ���ǰ׺�����ؿ��ַ��� ""��
//char* longestCommonPrefix(char** strs, int strsSize) {
//    int i = 1, j = 0, flag = 0;
//    if (strsSize < 2) {//�ַ����ĳ���Ϊ1/0������������
//        return strs[0];
//    }
//    for (;;j++) {//����flagΪ1�����˳�����ѭ��ֻ�ı�j��ֵ����Ϊiÿ�αȽϴ�1��ʼ����j�Ƚ���֮��++�ȽϺ�����ַ���
//        for (;i < strsSize;i++) {//�ı�Ƚϵ��ַ������ӵڶ�����ʼ�����αȵ����±�Ϊj��λ�ø��ַ����Ƿ���ͬ
//            if (*(strs[i] + j) == '\0' || *(strs[i] + j) != *(strs[0] + j))//���ȡ��ͷ�����룻���ȡ����ֵ���һ������Ӧ�Ĳ���ȣ�����
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 1) {
//            *(strs[0] + j) = '\0';//ֻҪû������߱ȵ��ַ�������Ⱦͻ���룬����index=j��λ��ҪôΪNULL��Ҫô��ֵ����������������/0�γ��ַ���
//            break;
//        }
//        i = 1;
//    }
//    return strs[0];
//}
//����һ���ַ��� s���ҵ� s ����Ļ����Ӵ�������:�������Һʹ��������һ��
char* longestPalindrome(char* s)
{
    int left = 0, right = strlen(s);
    int maxSize = 1;
    int t = 0;
    int start = 0;
    if (right <= 1)
        return s;
    for (left = 0;s[left] != '\0';left++)//���忪ʼ�Ƚϵ�ֵ�������������ģ���1������һ��
    {
        t = 0;//�ж��Ƿ������ֵ�滻��
        if (right - left + 1 <= maxSize)
        {
            break;//�������ʣ���ַ���������maxSize,ֱ������ѭ����
        }
        for (right = right - 1;right > left;right--)//�ұ���ǰ�������飻
        {
            if (s[left] == s[right])
            {
                for (int i = left, j = right;i <= j;i++, j--)
                {
                    if (i == j || (i == j - 1 && s[i] == s[j]))
                    {
                        if (maxSize < (right - left + 1))
                        {
                            maxSize = right - left + 1;
                            start = left;
                            t = 1;//maxSize�޸�ֵ֮���˳������ѭ����
                        }
                    }
                    if (s[i] != s[j])//�ж��Ƿ��ǻ��Ĵ�
                    {
                        break;
                    }
                }
            }
            if (t == 1)
            {
                break;
            }
        }
        right = strlen(s);//һֱ�����ұ߿�ʼ
    }
    s[start + maxSize] = '\0';//�Ѻ���Ľص���
    return s + start;
}