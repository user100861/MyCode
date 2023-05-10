#include <stdio.h>
#include <math.h>
double calc(int a)
{
    return log(a);
}
int main()
{
    int m;
    scanf("%d", &m);
    int i = 1;
    double res = 0;
    for (i; i <= m; i++)
    {
        res += calc(i);
    }
    printf("%lf", sqrt(res));
    return 0;
}