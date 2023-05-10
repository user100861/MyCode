#include <stdio.h>
int calc(int i, int *k[100000][2], int num, int *res[100000])
{
    for (i; i < 100000; i++)
    {
        if (k[i][0] == num)
        {
            break;
        }
        else
        {
            res[i] = 1;
            if (t[k[i][0] - 1][k[i][1]] != t[k[i][0]][k[i][1]] && t[k[i][0] - 1][k[i][1]] != num)
                res[i] += 1;
            if (t[k[i][0] + 1][k[i][1]] != t[k[i][0]][k[i][1]] && t[k[i][0] + 1][k[i][1]] != num)
                res[i] += 1;
            if (t[k[i][0]][k[i][1] - 1] != t[k[i][0]][k[i][1]] && t[k[i][0]][k[i][1] - 1] != num)
                res[i] += 1;
            if (t[k[i][0]][k[i][1] + 1] != t[k[i][0]][k[i][1]] && t[k[i][0]][k[i][1] + 1] != num)
                res[i] += 1;
        }
    }
}
int main()
{
    const int num = 6;
    int n;
    int m;
    int i = 0;
    int j = 0;
    static int k[100000][2];
    scanf("%d %d", &n, &m);
    static int t[1000][1000];
    for (i; i < 1000; i++)
    {
        for (j; j < 1000; j++)
        {
            t[i][j] = num;
        }
        j = 0;
    }
    i = 0;
    for (i; i < 100000; i++)
    {
        k[i][0] = num;
        k[i][1] = num;
    }
    i = 0;
    for (i; i < n; i++)
    {
        for (j; j < n; j++)
        {
            scanf("%d", &t[i][j]);
        }
        j = 0;
    }
    i = 0;
    for (i; i < m; i++)
    {
        scanf("%d %d", &k[i][0], &k[i][1]);
    }
    // ÊäÈë¶Î½áÊø
    int res[100000];
    for (i; i < 100000; i++)
    {
        res[i] = num;
    }
    i = 0;
    calc(0, k, num, &res);
    // for (i; i < 100000; i++)
    // {
    //     if (k[i][0] == num)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         res[i] = 1;
    //         if (t[k[i][0] - 1][k[i][1]] != t[k[i][0]][k[i][1]] && t[k[i][0] - 1][k[i][1]] != num)
    //             res[i] += 1;
    //         if (t[k[i][0] + 1][k[i][1]] != t[k[i][0]][k[i][1]] && t[k[i][0] + 1][k[i][1]] != num)
    //             res[i] += 1;
    //         if (t[k[i][0]][k[i][1] - 1] != t[k[i][0]][k[i][1]] && t[k[i][0]][k[i][1] - 1] != num)
    //             res[i] += 1;
    //         if (t[k[i][0]][k[i][1] + 1] != t[k[i][0]][k[i][1]] && t[k[i][0]][k[i][1] + 1] != num)
    //             res[i] += 1;
    //     }
    // }
    // i = 0;
    for (i; i < 100000; i++)
    {
        if (res[i] == num)
        {
            break;
        }
        printf("%d\n", res[i]);
    }
}
