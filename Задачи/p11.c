#include <stdio.h>

int main(void)
{
    int n, r = 0;
    scanf("%d", &n);
    for (int q = 1; q <= n; q++)
        if ((n % (q*q) == 0) && (n % (q*q*q) != 0))
            printf("%d\n", q);

    return 0;
}