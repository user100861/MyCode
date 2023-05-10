#include <stdio.h>
int year(int a)
{
    int i = 0;
    for (i; i < 4; i++)
    {
        a += 3;
    }
    return a;
}
int main()
{
    int a = 16;
    printf("%d", year(a));
}