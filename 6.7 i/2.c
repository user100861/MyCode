#include <stdio.h>
#include <math.h>
int main()
{
    // float a[11] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 0};
    // float input;
    // scanf("%f", &input);
    // int i = 0;
    // for (i; i < 10; i++)
    // {
    //     if (a[i] > input)
    //     {
    //         i--;
    //         break;
    //     }
    // }
    // int j = 9;
    // for (j; j >= i; j--)
    // {
    //     a[j + 1] = a[j];
    // }
    // a[i + 1] = input;
    // i = 0;
    // for (i; i < 11; i++)
    // {
    //     printf("%.1f ", a[i]);
    // }
    double a = 3 * sqrt((pow(0.71) + pow(0.74) + pow(0.77) + pow(0.8)) / 12);
    printf("%f", a);
}