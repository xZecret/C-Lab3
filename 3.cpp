#include <stdio.h>

int main()
{
    /*
    a) i = 1; sum = 0;
        for ( ; i <= 100; i++) sum += i;


    b) sum = 0;
        for ( i = 1; i <= 100;) sum += i++;


    c) for ( i = 1, sum = 0; i <= 100; sum += i+,  i++); - Неправильно


    d) for ( i = 1, sum = 0; i <= 100; sum += i++);


    e) for ( i = 0, sum = 0; i++, i <= 100; sum += i); - Неправильно

    */
    printf("a,b,d-true\nc,e-false");
}
