#include <stdio.h>

int main( void ){
    double a, s = 0;
    int n;
    scanf("%lf", &a);
    for(n = 1; s <= a; s+=1.0/n++);
    printf("s=%lf\nn=%d\n", s, n);
    return 0;
}
