#include <stdio.h>
struct statics
{
    int A;
    int B;
    int C;
};
int main()
{
    struct statics a[34] =
        {
            {175150, 0, 1156291},
            {90, 773, 62521},
            {87, 0, 331881},
            {51, 12, 2975},
            {20, 107, 2232},
            {9, 0, 3163},
            {8, 11, 1843},
            {4, 25, 3159},
            {3, 18, 7274},
            {2, 9, 40284},
            {2, 0, 2220},
            {2, 17, 1613},
            {1, 2, 2133},
            {1, 3, 1671},
            {0, 1, 68398},
            {0, 0, 3278},
            {0, 4, 3133},
            {0, 0, 2983},
            {0, 1, 2735},
            {0, 0, 2004},
            {0, 0, 1753},
            {0, 0, 1393},
            {0, 1, 1383},
            {0, 6, 1065},
            {0, 0, 1008},
            {0, 0, 708},
            {0, 0, 681},
            {0, 0, 420},
            {0, 0, 288},
            {0, 0, 185},
            {0, 0, 147},
            {0, 0, 122},
            {0, 0, 82},
            {0, 0, 1},
        };
    char type;
    int input;
    scanf("%c %d", &type, &input);
    int i = -1;
    int max = 0;
    int temp = -1;
    int j = 0;
    int temp1 = 0;
    if (input > 34)
    {
        printf("NO");
        goto end;
    }
    switch (type)
    {
    case 'A':
    {
        for (j; j < input; j++)
        {
            for (i; i < 34; i++)
            {
                if (a[i].A > max)
                {
                    max = a[i].A;
                    temp = i;
                }
            }
            i = 0;
            a[temp].A = 0;
            temp1 = max;
            max = 0;
        }
        printf("%d,%d,%d", temp1, a[temp].B, a[temp].C);
        break;
    }
    case 'B':
    {
        for (j; j < input; j++)
        {
            for (i; i < 34; i++)
            {
                if (a[i].B > max)
                {
                    max = a[i].B;
                    temp = i;
                }
            }
            i = 0;
            a[temp].B = 0;
            temp1 = max;
            max = 0;
        }
        printf("%d,%d,%d", a[temp].A, temp1, a[temp].C);
        break;
    }
    case 'C':
    {
        for (j; j < input; j++)
        {
            for (i; i < 34; i++)
            {
                if (a[i].C > max)
                {
                    max = a[i].C;
                    temp = i;
                }
            }
            i = 0;
            a[temp].C = 0;
            temp1 = max;
            max = 0;
        }
        printf("%d,%d,%d", a[temp].A, a[temp].B, temp1);
        break;
    }
    }
end:
    return 0;
    // for (j; j < input; j++)
    // {
    //     for (i; i < 34; i++)
    //     {
    //         if (a[i].A > max)
    //         {
    //             max = a[i].A;
    //             temp = i;
    //         }
    //     }
    //     i = 0;
    //     a[temp].A = 0;
    //     temp1 = max;
    //     max = 0;
    // }
}