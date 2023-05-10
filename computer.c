#include <stdio.h>

int gys(int x, int y) // 计算最大公约数函数

{

    int min;
    if (x < y)
        min = x;
    else
        min = y;
    int i = min;
    for (i; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
            break;
        }
    }
}

int gbs(int x, int y) // 计算最小公倍数函数

{

    int max;
    if (x < y)
        max = y;
    else
        max = x;
    int i = max;
    for (i; i < 1000; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;
            break;
        }
    }
}

int main() // 测试用main函数

{

    int a, b, x, y;

    scanf("%d%d", &a, &b);

    x = gys(a, b);

    y = gbs(a, b);

    printf("最大公约数%d最小公倍数%d\n", x, y);

    return 0;
}