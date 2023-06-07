#include <stdio.h>
#include <string.h>
struct stri
{
    char a[20];
    int sum;
};
int main()
{
    struct stri a[4];
    gets(a[0].a);
    gets(a[1].a);
    gets(a[2].a);
    gets(a[3].a);
    int i = 0;
    int j = 0;
    struct stri abc;
    for (i; i < 4; i++)
    {
        for (j; j < 3; j++)
        {
            if (strcmp(a[j].a, a[j + 1].a) > 0)
            {
                abc = a[j];
                a[j] = a[j + 1];
                a[j + 1] = abc;
            }
        }
        j = 0;
    }
    i = 0;
    for (i; i < 4; i++)
    {
        printf("%s\n", a[i]);
    }
}