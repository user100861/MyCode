#include <stdio.h>
#include <string.h>
int main()
{
    char a[40];
    char b[40];
    int j = 0;
    for (j; j < 40; j++)
    {
        a[j] = 0;
        b[j] = 0;
    }
    gets(a);
    gets(b);
    int i = 0;
    int len = strlen(a);
    for (i; i < strlen(b); i++)
    {
        a[i + len] = b[i];
    }
    printf("%s", a);
}