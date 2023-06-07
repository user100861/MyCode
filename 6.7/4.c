#include <stdio.h>
struct player
{
    int n;
    float h;
};
int main()
{
    struct player a[7];
    int i = 0;
    for (i; i < 7; i++)
    {
        scanf("%d %f", &a[i].n, &a[i].h);
    }
    i = 0;
    int j = 0;
    struct player temp;
    for (i; i < 7; i++)
    {
        for (j; j < 6; j++)
        {
            if (a[j].h < a[j + 1].h)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        j = 0;
    }
    i = 0;
    printf("按身高排序结果是\n");
    for (i; i < 7; i++)
    {
        printf("%d %f\n", a[i].n, a[i].h);
    }
}