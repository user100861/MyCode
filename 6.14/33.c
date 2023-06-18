#include <stdio.h>
#include <stdlib.h>
int DelOdd(int a[], int n)
{
    int i = 0;
    int count = n;
    for (i; i < n; i++)
    {
        if (a[i] % 2)
        {
            count--;
        }
    }
    return count;
}
int main()
{
    int seed = 824;
    srand(seed);
    int n = 0;
    scanf("%d", &n);
    int randa[n];
    int i = 0;
    for (i; i < n; i++)
    {
        randa[i] = rand() % 50;
    }
    i = 0;
    for (i; i < n; i++)
    {
        printf("%d\t", ++randa[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    i = 0;
    printf("%d\n", DelOdd(randa, n));
    int count = 0;
    for (i; i < n; i++)
    {
        if (randa[i] % 2 == 0)
        {
            printf("%d\t", randa[i]);
            count++;
            if (count % 10 == 0)
            {
                printf("\n");
            }
        }
    }
}