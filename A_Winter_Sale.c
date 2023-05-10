#include <stdio.h>
#include <math.h>

int main()
{
    int X;
    float P, priceBeforeDiscount;

    scanf("%d%f", &X, &P);

    priceBeforeDiscount = P / (1 - (float)X / 100);

    priceBeforeDiscount = ceilf(priceBeforeDiscount * 100) / 100;

    printf("%.2f\n", priceBeforeDiscount);

    return 0;
}