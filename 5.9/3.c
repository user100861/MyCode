#include <stdio.h>
void GetMin(int *p, int m, int n, int *b)
{
    for (n; n < 3; n++)
    {
        if (*(p + n) < *b)
        {
            *b = *(p + n);
            *(b + 1) = m;
            *(b + 2) = n;
        }
    }
}
int main()
{
    int *p[2];
    int m = 0;
    int n = 0;
    int *b;
    int a[2][3];
    int calc;
    for (m; m < 2; m++)
    {
        for (n; n < 3; n++)
        {
            scanf("%d", &a[m][n]);
        }
        n = 0;
    }
    m = 0;
    for (m; m < 2; m++)
    {
        p[m] = &a[m][0];
    }
    m = 0;
    b = &calc;
    // for (m; m < 3; m++)
    //     calc[m] = 0;
    calc = 100;
    for (m; m < 2; m++)
    {
        for (n; n < 3; n++)
        {
            GetMin(p[m], m, n, b);
        }
    }
    printf("min=%d,%d,%d", calc, *(b + 1), *(b + 2));
}