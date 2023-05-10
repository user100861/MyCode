#include <stdio.h>
int main()
{
    int a[9];
    int i = 0;
    int t;
    int sum = 0;
    for (i; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    scanf("%d", &t);
    for (i; i < 9; i++)
    {
        if (a[i] == t)
        {
            sum += 1;
        }
    }
    printf("%d", sum);
}