#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int Summ(int n){
    int sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int main( void ){
    int n, sum;
    scanf("%d", &n);
    sum = Summ(n);
    if (sum * sum * sum == n * n)
        printf("YESsssss");
    else
        printf("NOoooOOooooOOoo");
    return 0;
}
