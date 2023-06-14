#include <stdio.h>
int SortSum(int a[], int n)
{

    return n;
}
int main()
{
    int a[10];
    int i = 0;
    for (i; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int n = 0;
    i = 0;
    int j = 0;
    int temp = 0;
    for (i; i < 10; i++)
    {
        for (j; j < 9; j++)
        {
            if (a[j + 1] < a[j])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                n += 1;
            }
        }
        j = 0;
    }
    i = 0;
    printf("%d\n", n);
    for (i; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}