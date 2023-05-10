#include <stdio.h>
#include <string.h>
void DelStr(char s[])
{
    int i = 0, n, j, k;
    k = strlen(s);
    char a[k];
    for (i; i < k; i++)
    {
        a[i] = 0;
    }
    i = 0;
    for (; i < k; i++)
    {
        if (((int)s[i] > 64 && (int)s[i] < 91) || ((int)s[i] > 96 && (int)s[i] < 123))
        {
            n = i;
            break;
        }
    }
    j = n;
    for (i = 0; i < n; i++)
    {
        a[i] = s[i];
    }
    for (i = n; i < k; i++)
    {
        if (s[i] == '*')
        {
            continue;
        }
        else
        {
            a[j] = s[i];
            j++;
        }
    }
    puts(a);
}

int main()
{

    char s[100];
    scanf("%s", s);
    DelStr(s);
    return 0;
}