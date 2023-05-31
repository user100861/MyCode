#include <stdio.h>
typedef struct Student

{
    char name[20];
    int score;
} Stu;
void StructSearch(Stu *a, Stu *b, int low, int high, int n, int *m)
{
    {
        int i = 0;
        for (i; i < 12; i++)
        {
            if ((*a).score >= low && (*a).score <= high)
                printf("%s,%d\n", (*a).name, (*a).score);
            *a++;
        }
    }
}
int main()
{
    Stu a[12] = {{"HC105", 85}, {"HC103", 76}, {"HC102", 69}, {"HC104", 85}, {"HC101", 96}, {"HC107", 72}, {"HC108", 64}, {"HC106", 87}, {"HC115", 85}, {"HC113", 94}, {"HC112", 64}, {"HC114", 91}};
    // a[0] = {"HC105", 85};
    // a[1] = {"HC103", 76};
    // a[2] = {"HC102", 69};
    // a[3] = {"HC104", 85};
    // a[4] = {"HC101", 96};
    // a[5] = {"HC107", 72};
    // a[6] = {"HC108", 64};
    // a[7] = {"HC106", 87};
    // a[8] = {"HC115", 85};
    // a[9] = {"HC113", 94};
    // a[10] = {"HC112", 64};
    // a[11] = {"HC114", 91};
    int max = 0;
    int min = 0;
    scanf("%d,%d", &min, &max);
    Stu *p = &a[0];
    Stu *q = &a[0];
    int n;
    int *m;
    StructSearch(p, q, min, max, n, m);
}