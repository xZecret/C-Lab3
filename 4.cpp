#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    while ((n /= 10) != 0) ++k;
    printf("%d", k);
    return 0;
}
