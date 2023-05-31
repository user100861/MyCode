#include <stdio.h>
struct Student
{
    char name[10];
    int score;
};
void StructMax(struct Student *a, int n, int *m)
{
    int i = 0;
    for (i; i < 12; i++)
    {
        if ((*a).score == n)
        {
            printf("%s %d\n", (*a).name, (*a).score);
        }
        *a++;
    }
}
int main()
{
    struct Student a[12] = {{"HC105", 85},
                            {"HC103", 76},
                            {"HC102", 98},
                            {"HC104", 85},
                            {"HC101", 99},
                            {"HC107", 72},
                            {"HC108", 64},
                            {"HC106", 87},
                            {"HC115", 85},
                            {"HC113", 94},
                            {"HC112", 99},
                            {"HC114", 99}};
    struct Student *p = &a[0];
    int n = 0;
    int *m;
    int i = 0;
    for (i; i < 12; i++)
    {
        if (a[i].score > n)
            n = a[i].score;
    }
    StructMax(p, n, m);
}