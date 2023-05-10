#include <stdio.h>
int Sum(int *p[2], int total[], int n)
{
    int i = 0;
    for (i; i < 3; i++)
    {
        total[n] += (*p[n] + i + 1);
        return total[n];
    }
}
int main()
{
    int *p[2];
    int i = 0;
    int j = 0;
    int n = 0;
    int total[2];
    int a[3];
    int b[3];
    for (j; j < 2; j++)
    {
        total[j] = 0;
    }
    j = 0;
    for (j; j < 3; j++)
    {
        scanf("%d", &a[j]);
    }
    j = 0;
    for (j; j < 3; j++)
    {
        scanf("%d", &b[j]);
    }
    j = 0;
    p[0] = &a[0];
    p[1] = &b[0];
    // Sum(p,total,n);
    printf("%d\n", Sum(p, total, n));
    n += 1;
    Sum(p, total, n);
}