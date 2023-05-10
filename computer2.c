#include <stdio.h>
#include <math.h>
float calc1(float a)
{
    float p = (a + 1) / (a - 2);
    return p;
}
float calc2(float a)
{
    float p = (a - 1) / (a - 2);
    return p;
}
int main()
{
    float i;
    float res = 0.0;
    scanf("%f", &i);
    float t = (-i);
    for (t; t <= i; t += 1)
    {
        if (t > 0 && t != 2)
        {
            res += calc1(t);
        }
        else if (t < 0)
        {
            res += calc2(t);
        }
    }
    printf("%f", res);
    return 0;
}