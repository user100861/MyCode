#include <stdio.h>
#include <stdlib.h>
int GetData3(int a[], int n)
{
    int i = 0;
    int cnt = 0;
    for (i; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            cnt++;
        }
    }
    return cnt;
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
        printf("%d ", ++randa[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    i = 0;
    printf("%d\n", GetData3(randa, n));
    int count = 0;
    for (i; i < n; i++)
    {
        if (randa[i] % 3 == 0)
        {
            printf("%d ", randa[i]);
            count++;
            if ((count + 1) % 10 == 0)
            {
                printf("\n");
            }
        }
    }
}