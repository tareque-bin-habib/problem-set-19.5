#include <stdio.h>

int main()
{
    int n, i, count = 0, min, min_count = 0;

    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}