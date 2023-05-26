#include <stdio.h>
#include <math.h>
struct poin
{
    int x;
    int y;
};
float md(int x1, int y1, int x2, int y2)
{
    float m1 = 0;
    float m2 = 0;
    if (x2 - x1 < 0)
        m1 = x1 - x2;
    else
        m1 = x2 - x1;
    if (y2 - y1 < 0)
        m2 = y1 - y2;
    else
        m2 = y2 - y1;
    return m1 + m2;
}
float td(int x1, int y1, int x2, int y2)
{
    float t1 = 0;
    float t2 = 0;
    t1 = (x1 - x2) * (x1 - x2);
    t2 = (y1 - y2) * (y1 - y2);
    return sqrt(t1 + t2);
}
int main()
{
    struct poin point[2];
    int i = 0;
    for (i; i < 2; i++)
    {
        scanf("%d,%d", &point[i].x, &point[i].y);
    }
    float md1 = md(point[0].x, point[0].y, point[1].x, point[1].y);
    float td1 = td(point[0].x, point[0].y, point[1].x, point[1].y);
    printf("MHTDistance=%.2f\n", md1);
    printf("TrueDistanc=%.2f", td1);
}