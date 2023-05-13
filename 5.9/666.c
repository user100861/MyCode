#include <stdio.h>
#define N 2
#define M 3
int main()
{

    int a[N][M];

    int(*p)[M] = a;

    int i, j, sum;
    int q, l;
    int min = 100;

    /********** Begin *********/
    for (i = 0; i < N; i++)

        for (j = 0; j < M; j++)

        {

            scanf("%d", *(p + i) + j);
        }

    for (i = 0; i < N; i++)

    {

        for (j = 0; j < M; j++)
        {
            if (*(*(p + i) + j) <= min)
            {
                min = *(*(p + i) + j);
                q = j;
                l = i;
            }
        }
    }
    printf("min=%d,%d,%d\n", min, ++l, ++q);

    /********** End **********/

    return 0;
}