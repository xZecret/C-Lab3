#include <stdio.h>

int main(void)
{
    int n, m = 1, r = 0;
    scanf("%d", &n);
    while (n)
    {
        if (n % 5 != 0)
        {
            //printf("%d", n%10);
            r += n % 10 * m;
            m *= 10;
        }
        n /= 10;
    }
    printf("%d\n", r);
    return 0;
}