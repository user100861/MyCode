int main()
{
    int a[N], n, i, b[10] = {0}, c[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int seed = 824;
    srand(seed);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        b[a[i]]++;
        printf("%d ", a[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    i = 0;
    SortBub(b, c);
    return 0;
}