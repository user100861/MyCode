#include <stdio.h>
typedef struct Student
{
    int NO;
    int score;
} Stu;
int Find(Stu *stu, int n, int m) // n总人数 m计划录取人数，函数返回值实际录取人数
{
}
int main()
{
    int total, plan;
    scanf("%d %d", &total, &plan);
    Stu a[total];
    int i = 0;
    for (i; i < total; i++)
    {
        scanf("%d %d", &a[i].NO, &a[i].score);
    }
    i = 0;
    int j = 0;
    Stu temp;
    &temp;
    for (j; j < total; j++)
    {
        for (i; i < total; i++)
        {
            if (a[i].score < a[i + 1].score)
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        i = 0;
    };
    j = 0;
    int pret = plan + plan / 2;
    for (i; i < 10; i++)
    {
        if (a[pret].score == a[pret + 1].score)
        {
            pret++;
        }
        else
            break;
    }
    i = 0;
    for (i; i < total - 1; i++)
    {
        if (a[i].score == a[i + 1].score && a[i].NO > a[i + 1].NO)
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    i = 1;
    printf("%d %d\n", a[pret].score, pret);
    for (i; i <= pret; i++)
    {
        printf("%d %d\n", a[i].NO, a[i].score);
    }
}