#include <stdio.h>
#include <string.h>
void Swap(int *p1, int *p2)
{
    int c;
    c = *p1;
    *p1 = *p2;
    *p2 = c;
}
int main()
{
    int *a;
    int *b;
    int c = 0;
    int d = 0;
    a = &c;
    b = &d;
    scanf("%d,%d", a, b);
    Swap(a, b);
    printf("%d,%d", *a, *b);
}