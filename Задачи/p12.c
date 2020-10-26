#include <stdio.h>

int main(void)
{
    int m, p, k = 0;
    scanf("%d", &m);
    for (p = 4; p < m; p *= 4)
        k++;
    printf("%d\n", k);

    return 0;
}