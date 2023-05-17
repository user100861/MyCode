#include <stdio.h>
void GetOdd(int a[], int *b, int *m)
{
    int i = 0;
    for (i; i < 9; i++)
    {
        if (a[i] % 2 != 0)
        {
            *(b + i) = 0;
        }
    }
}
int main()
{
    int a[9];
    int *b, *m;
    int i = 0;
    for (i; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    b = &a[0];
    GetOdd(&a[9], b, m);
    for (i; i < 9; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
        }
    }
}