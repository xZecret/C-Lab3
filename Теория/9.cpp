#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	/*	a)  while ( E ) { S; ... break; ... S; next: ; } -НЕ ВЕРНО
	
		b)  while ( E ) { S; ... break; ... S; } next: ; ... -ВЕРНО
		
		c)  do { S; ... break; ... S; } while ( E ); next: ; ... - ВЕРНО
		
		d)  for ( E1; E2; E3) { S; ... break; ... S; next: ; } - НЕ ВЕРНО
		
		e)  while ( E) { S; ... for ( E1; E2; E3) { S; ... break; ... S; } next: ; ... S; - ВЕРНО
		
		f)  while ( E ) { S; ... for ( E1; E2; E3) { S; ... break; ... S; } ... S; next: ; } - НЕ ВЕРНО
	*/
	printf("b,c,e- true\na,d,f- false");
}

