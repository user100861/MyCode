#include <stdio.h>
int main()
{
    char a[100];
    int i = 0;
    for (i; i < 100; i++)
    {
        a[i] = 0;
    }
    i = 0;
    char *p;
    p = &a[0];
    scanf("%s", &a);
    for (i; i < 100; i += 2)
    {
        if (*(p + i) != 0)
            printf("%c", *(p + i));
    }
}