#include <stdio.h>
struct people
{
    int floor;
    int person;
};
int max(int a[], int b)
{
    int i = 0;
    int max = 0;
    for (i; i < b; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int person = 0;
    scanf("%d", &person);
    int i = 0;
    int floor[person];
    for (i; i < person; i++)
    {
        scanf("%d", &floor[i]);
    }
    i = 0;
    int max1 = max(floor, person);
    int time = person;
    int j = 0;
    for (i; i < person; i++)
    {
        for (j; j < i; j++)
        {
            if (floor[i] == floor[j])
            {
                time--;

                break;
            }
        }
        j = 0;
    }
    i = 0;
    printf("%d", (10 * max1 + 5 * time + (person - time)));
}