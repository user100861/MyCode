#include <stdio.h>
void GetFactor(int x, int *b, int *n)
{
    int i = 1;
    int count = 0;
    for (i; i < x; i++)
    {
        if (x % i == 0)
        {
            *(b + count) = i;
            count++;
        }
    }
}
int main()
{
    int a;
    int t[100];
    int *b, *n;
    int i = 0;
    for (i; i < 100; i++)
    {
        t[i] = 0;
    }
    i = 0;
    b = &t[0];
    scanf("%d", &a);
    GetFactor(a, b, n);
    for (i; i < 100; i++)
    {
        if (t[i] == 0)
            break;
        else
            printf("%d ", t[i]);
    }
}