#include <stdio.h>
#include <stdlib.h>
#define N 600
void SortBub(int b[], int c[])
{
    int i = 0;
    int j = 0;
    int n = 0;
    int tem1 = 0;
    int tem2 = 0;
    for (i; i < 10; i++)
    {
        for (j; j < 9; j++)
        {
            if (b[j] < b[j + 1])
            {
                tem1 = b[j];
                tem2 = c[j];
                b[j] = b[j + 1];
                c[j] = c[j + 1];
                b[j + 1] = tem1;
                c[j + 1] = tem2;
            }
        }
        j = 0;
    }
    i = 0;

    for (i; i < 10; i++)
    {
        printf("%d %d\n", c[i], b[i]);
    }
}
int main()
{
    int a[N], n, i, b[10] = {0}, c[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int seed = 824;
    srand(seed);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        b[a[i]]++;
        printf("%d ", a[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    i = 0;
    SortBub(b, c);
    return 0;
}