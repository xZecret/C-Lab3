#include <stdio.h>

int main(void)
{
    int n, p = 1, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        p *= i;
        s += p;
    }
    printf("%d\n", s);

    return 0;
}