#include <stdio.h>
struct Student
{
    char name[10];
    int score;
};
void StructSort(struct Student stu[], int n)
{
    struct Student temp;
    int i = 0;
    int j = 0;
    for (j; j < 4; j++)
    {
        for (i; i < 3; i++)
        {
            if (stu[i].score < stu[i + 1].score)
            {
                temp = stu[i];
                stu[i] = stu[i + 1];
                stu[i + 1] = temp;
            }
        }
        i = 0;
    }
}
int main()
{
    struct Student a[4];
    int i = 0;
    int j = 0;
    for (i; i < 4; i++)
    {
        for (j; j < 10; j++)
        {
            a[i].name[j] = 0;
        }
        j = 0;
    }
    i = 0;
    for (i; i < 4; i++)
    {
        scanf("%s %d", &a[i].name, &a[i].score);
    }
    i = 0;
    StructSort(a, 4);
    for (i; i < 4; i++)
    {
        printf("%s %d\n", a[i].name, a[i].score);
    }
}