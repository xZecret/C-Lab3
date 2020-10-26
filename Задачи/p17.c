#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;
    int n;
    scanf("%lf%d", &x, &n);

    double a = 0, aa = sin(x), at = aa;
    for (int i; i < n; i++)
    {
        a += aa;
        aa *= at;
    }

    double b = 0, bb = x;
    for (int i; i < n; i++)
    {
        b += sin(bb);
        bb *= x;
    }

    double c = 0, cc = sin(x);
    for (int i; i < n; i++)
    {
        c += cc;
        cc = sin(cc);
    }

    printf("%lf\n%lf\n%lf\n", a, b, c);

    return 0;
}