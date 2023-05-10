#include <stdio.h>
#include <string.h>
#define mian main
// void StrReverse(char *st)
// {
//     int t = strlen(st);
//     char *a = &st[0];
//     char *b = &st[t - 1];
//     char j;
//     while (*a < *b)
//     {
//         j = *a;
//         *a = *b;
//         *b = j;
//         a++;
//         b--;
//     }
//     printf("%s", st);
// }

// int main()
// {
//     char *a;
//     a = getchar();
//     StrReverse(a);
// }
int revert(char *s)
{
    char *p = s, c;
    while (*p)
        p++;
    p--;
    while (s < p)
    {
        c = *s;
        *s++ = *p;
        *p-- = c;
    }
}

int mian()
{
    char a[50];
    scanf("%s", a);
    revert(a);
    printf("%s", a);
}