#include <stdio.h>
int main()
{
    int a[3][3];
    int i = 0;
    int j = 0;
    for (i; i < 3; i++)
    {
        for (j; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        j = 0;
    }
    i = 0;
    int tempa = 0, tempb = 0;
    int max = 0;
    int cnt = 0;
    int q = 0;
    int stamp = 0;
    for (i; i < 3; i++)
    {
        for (j; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                tempa = i;
                tempb = j;
            }
        }
        j = 0;
        for (q; q < 3; q++)
        {
            if (max > a[q][tempb])
            {
                stamp = 1;
            }
        }
        q = 0;
        // stamp = 0;
        if (stamp == 0)
        {
            cnt = 1;
            printf("第%d行第%d列是一个鞍点,值为ֵ%d\n", tempa, tempb, a[tempa][tempb]);
        }
        // else
        //     printf("Here\n");
        stamp = 0;
        max = 0;
    }
    if (!cnt)
    {
        printf("没有找到鞍点");
    }
}