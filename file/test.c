#include <stdlib.h>
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch, filename[15];
    scanf("%s", filename);
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("cannot open file");
        exit(1);
    }
    ch = fgetc(fp);
    while (!feof(fp))
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    putchar('\n');
    return 0;
}