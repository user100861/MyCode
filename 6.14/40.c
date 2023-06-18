#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    scanf("%d %d", &m, &n);
    int a[m][n];
    int max = 0;
    for (i; i < m; i++)
    {
        for (j; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        j = 0;
    }
    i = 0;
    int stickx = 0;
    int sticky = 0;
    for (i; i < m; i++)
    {
        for (j; j < n; j++)
        {
            if (a[i][j] >= max)
            {
                max = a[i][j];
                stickx = i;
                sticky = j;
            }
        }
        j = 0;
    }
    i = 0;
    printf("top=%d\n", max);
    for (i; i < m; i++)
    {
        for (j; j < n; j++)
        {
            if (a[i][j] == max)
            {
                printf("Class %d,No %d", i + 1, j + 1);
                if (i == stickx && j == sticky)
                {
                    goto end;
                }
                else
                {
                    printf("\n");
                }
            }
        }
        j = 0;
    }
end:
    return 0;
}
