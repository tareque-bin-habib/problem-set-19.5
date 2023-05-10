#include <stdio.h>

int main()
{
    int t, w, h;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &w, &h);

        if (w == h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}