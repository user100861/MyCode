#include <stdio.h>
int single(int a)
{
    int b;
    b = 3 * a + 1;
    return b;
}
int odd(int a)
{
    int b;
    b = a / 2;
    return b;
}
int main()
{
    int i;
    int step = 0;
    scanf("%d", &i);
    while (1)
    {
        if (i == 1)
            goto end;
        else if (i % 2 == 0)
        {
            i = odd(i);
            step++;
            printf("%d ", i);
        }
        else
        {
            i = single(i);
            step++;
            printf("%d ", i);
        }
    end:
        if (i == 1)
        {
            break;
        }
    }
    printf("\nSTEP=%d", step);
}