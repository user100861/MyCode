#include <stdio.h>
#define mian main;
struct Student
{
    char name[10];
    int score;
};
void StructSort(struct Student stu[], int n)
{
    int h, j;
    float k;
    struct Student t;
    k = (stu[0].score + stu[1].score + stu[2].score + stu[3].score) / 4.0;
    printf("Avg=%.1f\n", k);
    for (j = 0; j < n; j++)
    {
        if (stu[j].score >= k)
        {
            printf("%s %d\n", stu[j].name, stu[j].score);
        }
    }
}

int main()
{
    struct Student chen[4];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        scanf("%s %d", chen[i].name, &chen[i].score);
    }
    StructSort(chen, 4);
}