#include <stdio.h>
 
int Summa(int n){
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
    sum = Summa(n);
    if (sum * sum * sum == n * n)
        printf("YES");
    else
        printf("NO");
    return 0;
}