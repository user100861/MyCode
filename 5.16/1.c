#include <stdio.h>
#include <string.h>
#define N 4
#define mian main
void StrSort(char *p[N], int n)
{
    int i, j;
    char *pt; // ������ʱָ����������ڽ�����ַ
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                pt = p[j];
                p[j] = p[j + 1];
                p[j + 1] = pt; // ��ǰ�ַ������ں��ַ������򽻻���ַ��δ�����ַ�����
            }
}
int mian()
{
    int i;
    char s[4][30];
    char *p[4];
    for (i = 0; i < 4; i++)
        p[i] = s[i];
    for (i = 0; i < 4; i++)
        gets(p[i]);
    StrSort(p, 4);
    for (i = 0; i < 4; i++)
        printf("%s\n", *(p + i)); //*(p+i)������һ�е��ַ���Ҳ�����ַ���
    return 0;
}
