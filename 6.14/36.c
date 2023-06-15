#include <stdio.h>
typedef struct Student
{
    char name[20];
    int score;
} Stu;
float StructAvg(Stu *a, Stu *b, int n, int *m)
{
    float res;
    int i = 0;
    for (i; i < 4; i++)
    {
        res += a->score;
        *a++;
    }
    res /= 4;
    return res;
}
int main()
{
    Stu inp[4];
    Stu res[4];
    int i;
    for (i; i < 4; i++)
    {
        scanf("%s %d", &inp[i].name, &inp[i].score);
    }
    Stu *a, *b;
    a = &inp[0];
    b = &res[0];
    float avg;
    int *m;
    avg = StructAvg(a, b, i, m);
    i = 0;
    printf("Avg=%.1f\n", avg);
    for (i; i < 4; i++)
    {
        if (inp[i].score <= avg)
        {
            printf("%s %d\n", inp[i].name, inp[i].score);
        }
    }
}