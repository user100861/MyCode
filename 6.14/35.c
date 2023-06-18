#include <stdio.h>
void GetOdd(int a[], int *b, int *m)
{
    int i = 0;
    for (i; i < 9; i++)
    {
        if (a[i] % 2)
        {
            *(b++) = a[i];
            (*m)++;
        }
    }
}
int main()
{
    int a[9];
    int i = 0;
    for (i; i < 9; i++)
        123
        {
            scanf("%d", &a[i]);
        }
    int odd[9], *b;
    b = &odd[0];
    int *m, t = 0;
    m = &t;
    GetOdd(a, b, m);
    i = 0;
    if (!*m)
    {
        printf("NO");
    }
    for (i; i < *m; i++)
    {
        printf("%d ", odd[i]);
    }
}