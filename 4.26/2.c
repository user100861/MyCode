#include <stdio.h>
int count(int i, int a)
{
    a += i % 10;
    i = i / 10;
    if (i != 0)
        a = count(i, a);
    return a;
}
int main()
{
    int i;
    scanf("%d", &i);
    int j;
    j = count(i, 0);
    printf("%d", j);
}