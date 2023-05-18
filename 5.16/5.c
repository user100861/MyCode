#include <stdio.h>
int GetMax(int *p, int m, int n)
{
    int i = 0;
    int j = 0;
    int max = 0;
    for (j; j < 3; j++)
    {
        if (*(p + j) > max)
            max = *(p + j);
    }
    return max;
}
int main()
{
    int *p[2];
    int a[2][3];
    int i = 0;
    int j = 0;
    int max1 = 0;
    int max2 = 0;
    int m = 0;
    int n = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    p[0] = &a[0][0];
    p[1] = &a[1][0];
    max1 = GetMax(p[0], m, n);
    max2 = GetMax(p[1], m, n);
    if (max1 > max2)
        printf("max=%d", max1);
    else
        printf("max=%d", max2);
}