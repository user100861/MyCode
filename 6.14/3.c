#include <stdio.h>
struct num
{
    int num;
    int no;
};
int main()
{
    int a[10];
    int i = 0;
    for (i; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    int j = 0;
    int temp = 0;
    int t = 0;
    struct num min;
    min.num = 100;
    int count = 0;
    for (i; i < 10; i++)
    {
        for (j; j < 10; j++)
        {
            if (min.num > a[j])
            {
                min.no = j;
                min.num = a[j];
            }
        }
        j = temp + 1;
        if ((min.no) == 666)
        {
            temp++;
            min.num = a[temp];
            continue;
        }
        t = a[temp];
        a[temp] = a[min.no];
        a[min.no] = t;
        temp++;
        count++;
        min.no = 666;
        min.num = a[temp];
    }
    i = 0;
    if (a[0] == 0)
    {
        ++count;
    }
    printf("%d\n", count - 1);
    for (i; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}