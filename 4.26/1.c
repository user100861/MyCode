#include <stdio.h>
int main()
{
    int i;
    int a;
    scanf("%d", &i);
    for (i; i > 0; i--)
    {
        a += i;
    }
    if (a != 0)
        printf("%d", a);
}