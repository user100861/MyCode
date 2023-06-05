#include <stdio.h>
#include <string.h>
typedef struct Student
{
    int NO;
    int score;
} Stu;

int Find(Stu *stu, int n, int m) // n总人数 m计划录取人数，函数返回值实际录取人数
{
    int k, i, j, l = 0, h = 0, g, f;
    k = (m * 1.5) / 1;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (stu[j].score < stu[j + 1].score)
            {
                l = stu[j].score;
                strcpy(stu[j].score, stu[j + 1].score);
                stu[j + 1].score = l;
                h = stu[j].NO;
                strcpy(stu[j].NO, stu[j + 1].NO);
                stu[j + 1].NO = h;
            }
        }
    }
    j = 0;
    int p = 1;
    for (i = 0; i < n; i++)
    {
        if (stu[i].score = stu[j].score)
        {
            g++;
        }
        if (stu[i].score != stu[j].score)
        {
            j = i;
            p++;
        }
        if (p = k)
        {
            break;
        }
    }
    return g;
}

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    Stu a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i].NO, &a[i].score);
    }
    // Find(a, n, m);
    int o = Find(a, n, m);
    printf("%d %d\n", a[o - 1].score, o);
    for (i = 0; i < o; i++)
    {
        printf("%d %d\n", a[i].NO, a[i].score);
    }
    return 0;
}