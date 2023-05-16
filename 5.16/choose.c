#include <stdio.h>
int main()
{
    // int a[3][3], *p, i;
    // p = &a[0][0];
    // for (i = 0; i < 9; i++)
    // {
    //     p[i] = i + 1;
    // }
    // printf("%d", a[1][2]);
    // int a[] = {5, 8, 7, 6, 2, 7, 3};
    // int y, *p = &a[1];
    // y = (*--p)++;
    // printf("%d%d", y, a[0]);
    int a[] = {5, 8, 7, 6, 2, 7, 3}, y;
    int *p = &a[1];
    y = *p++;
    printf("%d%d%d", y, *p, a[2]);
}