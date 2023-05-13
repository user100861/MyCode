#include <stdio.h>
#define N 2
#define M 3
int main()
{

    int a[N][M];

    int(*p)[M] = a;

    int i, j, sum;

    /********** Begin *********/
    for (i = 0; i < N; i++)

        for (j = 0; j < M; j++)

        {

            scanf("%d", *(p + i) + j);
        }

    for (i = 0; i < N; i++)

    {

        sum = 0;

        for (j = 0; j < M; j++)

        {

            sum += *(*(p + i) + j);
        }

        printf("%d\n", sum);
    }

    /********** End **********/

    return 0;
}