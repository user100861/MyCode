#include <stdio.h>
#define mian main
#define scnaf scanf
int mian()
{
    int i = 0;
    int a[4];
    for (i; i < 4; i++)
    {
        scnaf("%d", &a[i]);
    }
    i = 0;
    int max = a[3];
    for (i; i < 3; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("%d", max);
}