#include <stdio.h>
int main()
{
    char a[2];
    a[0] = 0;
    a[1] = 0;
    printf("%d %d", &a[0], &a[1]);
}