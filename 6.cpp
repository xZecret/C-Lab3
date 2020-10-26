#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main( void ){
    int n;
    scanf("%d", &n);
    while(n%3 == 0) n /= 3;
    printf(n==1?"true\n":"false\n");
    return 0;
}
