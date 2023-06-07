#include <stdio.h>

int main()
{
    int a[5];
    int i = 0;
    for (i; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[5];
    i = 0;
    for (i; i < 5; i++)
    {
        &b[i];
        b[4 - i] = a[i];
    }
    i = 0;
    for (i; i < 5; i++)
    {
        printf("%d", b[i]);
        if (i != 4)
            printf(" ");
    }
}