#include <stdio.h>

int main()
{
    int a, x, y, z;
    for(int i = 11; i < 1000; i++) {
        a = i;
        z = a % 10;
        a /= 10;
        y = a % 10;
        a /= 10;
        x = a % 10;
        x = x==0?y:x;
        if (x==z)
        printf("%d\n", i);
        
    }
    return 0;
}