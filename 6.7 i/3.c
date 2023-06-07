#include <stdio.h>
int main()
{
    int count = 0;
    int i = 1;
    int lst[50];
    for (i; i <= 100; i++)
    {
        if (i % 7 == 0 || i % 11 == 0)
        {
            lst[count++] = i;
        }
    }
    i = 0;
    printf("n=%d\n", count);
    for (i; i < count; i++)
    {
        printf("%d ", lst[i]);
    }
}