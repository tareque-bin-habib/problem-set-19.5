#include <stdio.h>

int main()
{
    int n, k, i, j, temp;
    long long sum = 0;

    scanf("%d%d", &n, &k);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < k; i++)
    {
        int max_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[max_index])
            {
                max_index = j;
            }
        }
        temp = a[i];
        a[i] = a[max_index];
        a[max_index] = temp;
    }

    for (i = 0; i < k; i++)
    {
        if (a[i] < 0)
        {
            break;
        }
        sum += a[i];
    }

    printf("%lld\n", sum);

    return 0;
}