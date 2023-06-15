#include <stdio.h>
#include <string.h>
void InsertStr(char sta[], char stb[], int pos)
{
    int i = 0;
    char temp[50];
    for (i; i < 50; i++)
    {
        temp[i] = 0;
    }
    i = pos - 1;
    int tmp = strlen(sta);
    for (i; i < tmp; i++)
    {
        *(temp + i - pos + 1) = *(sta + i);
        *(sta + i) = 0;
    }
    strcat(sta, stb);
    strcat(sta, temp);
}
int main()
{
    char str1[20];
    char str2[20];
    int t = 0;
    int i = 0;
    for (i; i < 20; i++)
    {
        str1[i] = 0;
        str2[i] = 0;
    }
    gets(str1);
    gets(str2);
    scanf("%d", &t);
    InsertStr(str1, str2, t);
    printf("%s", str1);
}