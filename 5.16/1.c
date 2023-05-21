#include <stdio.h>
#include <string.h>
#define N 4
#define mian main
void StrSort(char *p[N], int n)
{
    int i, j;
    char *pt; // 定义临时指针变量，用于交换地址
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                pt = p[j];
                p[j] = p[j + 1];
                p[j + 1] = pt; // 若前字符串大于后字符串，则交换地址（未交换字符串）
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
        printf("%s\n", *(p + i)); //*(p+i)代表这一行的字符，也就是字符串
    return 0;
}
