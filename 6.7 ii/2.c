#include <stdio.h>
int main()
{
    char input[8];
    gets(input);
    char output[11];
    int i = 0;
    for (i; i < 4; i++)
    {
        output[i] = input[i];
    }
    for (i; i < 6; i++)
    {
        output[i + 1] = input[i];
    }
    for (i; i < 8; i++)
    {
        output[i + 2] = input[i];
    }
    output[4] = '-';
    output[7] = '-';
    output[10] = 0;
    puts(output);
}