#include <stdio.h>
#include <string.h>
typedef struct Student
{
    char name[20];
    int score;
} Stu;
void StructSearch(Stu *a, Stu *b, int low, int high, int n, int *m)
{
    int i = 0;
    for (i; i < n; i++)
    {
        if ((a + i)->score >= low && (a + i)->score <= high)
        {
            strcpy((b++)->name, (a + i)->name);
            b->score = (a + i)->score;
            (*m)++;
        }
    }
}
int main()
{
    Stu a[12] = {{"HC105", 85}, {"HC103", 76}, {"HC102", 69}, {"HC104", 85}, {"HC101", 96}, {"HC107", 72}, {"HC108", 64}, {"HC106", 87}, {"HC115", 85}, {"HC113", 94}, {"HC112", 64}, {"HC114", 91}};
    Stu b[12];
    Stu *p, *q;
    p = &a[0];
    q = &b[0];
    int n = 12, *m;
    int t = 0;
    m = &t;
    int low = 0;
    int high = 0;
    int z = 0, c = 0;
    scanf("%d %d", &z, &c);
    if (z > c)
    {
        low = c;
        high = z;
    }
    else
    {
        low = z;
        high = c;
    }
    int i = 0;
    StructSearch(p, q, low, high, n, m);
    for (i; i < t; i++)
    {
        printf("%s,%d\n", b[i].name, b[i].score);
    }
}