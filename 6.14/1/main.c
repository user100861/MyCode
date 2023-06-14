#include <stdio.h>
void StrSum(char *st, int *sum)
{
    int i = 0;
    while (*st != 0)
    {
        if (*st >= 48 && *st <= 57 && *st % 2 == 0)
        {
            *sum += (*st - 48);
        }
        *st++;
    }
}
int main()
{
    char input[20];
    char *a;
    int num = 0;
    int *sum;
    a = &input[0];
    sum = &num;
    int i = 0;
    for (i; i < 20; i++)
    {
        input[i] = 0;
    }
    gets(input);
    StrSum(a, sum);
    printf("%d", num);
}