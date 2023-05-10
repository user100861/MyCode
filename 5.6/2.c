#include <stdio.h>
void Score(int b[], int *max, int *min, float *avg)
{
    int i = 0;
    float sum = 0;
    for (i; i < 5; i++)
    {
        if (*max < b[i])
        {
            *max = b[i];
        }
        if (*min > b[i])
        {
            *min = b[i];
        }
        sum += b[i];
    }
    *avg = sum / 5;
}
int main()
{
    int a[5];
    int i = 0;
    int *max;
    int *min;
    float *avg;
    int d = 0;
    int b = 100;
    float c = 0.0;
    max = &d;
    min = &b;
    avg = &c;
    for (i; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    Score(a, max, min, avg);
    printf("max=%d,min=%d,avg=%.1f", *max, *min, *avg);
}