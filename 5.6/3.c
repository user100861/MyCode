#include <stdio.h>
#include <string.h>
void StrSum(char *st, int *sum)
{
    int i = 0;
    while (*st)
    {
        if (*st > 47 && *st < 58 && *st % 2 == 0)
            *sum += *st - 48;
        st++;
    }
}
int main()
{
    char s[100];
    int a = 0;
    int *sum;
    sum = &a;
    scanf("%s", &s);
    StrSum(s, sum);
    printf("%d", *sum);
}