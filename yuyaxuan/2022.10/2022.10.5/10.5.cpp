#include <string.h>
//����һ���ַ��� s ������ת�ַ����е�����Ԫ����ĸ�������ؽ���ַ�����
//Ԫ����ĸ���� 'a'��'e'��'i'��'o'��'u'���ҿ����Դ�Сд������ʽ���֡�
//˼·:��ȥ��ո񣬿ո��ASCLLֵһ��С��32,���ű����ȽϾ���
char* reverseVowels(char* s)
{
    int len = strlen(s);
    int y = len;
    int k = 0;
    for (k = 0;k < len;k++)
    {
        if (s[k] < 32)
        {
            len--;
        }
    }
    int i = 0;
    int x = 0;
    int j = 0;
    for (i = 0;i < len;i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') || (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))
        {
            for (j = len - 1 - x;j > i;j--)
            {
                if ((s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') || (s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U'))
                {
                    int tmp = 0;
                    tmp = s[i];
                    s[i] = s[j];
                    s[j] = tmp;
                    x++;
                    break;
                }
                x++;
            }
        }
    }
    return s;
}
int main()
{
    char s[] = { "hello" };
    reverseVowels(s);

}