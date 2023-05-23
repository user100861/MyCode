#include <stdio.h>
#define num 4
struct Student
{
    char name[10];
    int score;
};
float StructAvg(struct Student stu[], int n, int *m)
{
    int i = 0;
    float sum = 0;
    for (i; i < num; i++)
    {
        sum += stu[i].score;
    }
    return sum / num;
}
int main()
{
    struct Student a[num];
    int i;
    int *m;
    float avg = 0;
    for (i = 0; i < num; i++)
    {
        scanf("%s %d", a[i].name, &a[i].score);
    }
    i = 0;
    avg = StructAvg(a, num, m);
    printf("%.1f\n", avg);
    for (i; i < num; i++)
    {
        if (a[i].score < avg)
            continue;
        else
        {
            printf("%s %d\n", a[i].name, a[i].score);
        }
    }
}