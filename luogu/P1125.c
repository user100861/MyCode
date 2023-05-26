#include <stdio.h>
#include <string.h>
struct words
{
    char word;
    int time;
};
int main()
{
    int max = 0;
    int min = 100;
    char input[100];
    int i = 0;
    for (i; i < 100; i++)
    {
        input[i] = 0;
    }
    i = 0;
    scanf("%s", &input);
    i = 0;
    struct words a[26];
    for (i; i < 26; i++)
    {
        a[i].word = i + 97;
        a[i].time = 0;
    }
    i = 0;
    int j = 0;
    for (i; i < strlen(input); i++)
    {
        for (j; j < 26; j++)
        {
            if (input[i] == a[j].word)
            {
                a[j].time++;
                break;
            }
        }
        j = 0;
    }
    i = 0;
    for (i; i < 26; i++)
    {
        if (a[i].time == 0)
            continue;
        else
        {
            if (a[i].time > max)
                max = a[i].time;
            if (a[i].time < min)
                min = a[i].time;
        }
    }
    i = 2;
    int cnt = 0;
    for (i; i < max - min; i++)
    {
        if (max - min % i == 0)
        {
            cnt = 1;
            break;
        }
    }
    if (cnt || max - min == 0 || max - min == 1)
        printf("No Answer\n0");
    else
        printf("Lucky Word\n%d", max - min);
}