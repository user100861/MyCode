#include <stdio.h>
void Score(int b[], int *max, int *min, float *avg)
{
    int i = 0;
    float sum = 0;
    for (i; i < 5; i++)
    {
        if (b[i] < *min)
        {
            *min = b[i];
        }
        if (b[i] > *max)
        {
            *max = b[i];
        }
        sum += b[i];
    }
    *avg = sum / 5;
}
int main()
{
    int b[5];
    int *max;
    int *min;
    float *avg;
    int i = 0;
    int a = 100;
    min = &a;
    int x = 0;
    max = &x;
    float c = 0.0;
    avg = &c;
    for (i; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    Score(b, max, min, avg);
    printf("max=%d,min=%d,avg=%.1f", *max, *min, *avg);
}