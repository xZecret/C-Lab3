#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	/*	a) while (E) { S; ... continue; ... S; next:; } - правильно 
	
		b) do { S; ... continue; ... S; } while ( E ); next: ; ... - неправильно 
		
		c) for ( E1; E2; E3) { S; ... continue; ... S; next: ; } - неправильно 
		
		d) while ( E) { S; ... for (E1;E2;E3) { S; ... continue; ... S; } ... S; next:; } - неправильно 
		
		e) while ( E) { S; ... for (E1;E2;E3) { S; ... continue; ... S; next: ; } ... S;} - правильно 
	*/
	printf("a,e- true\nb,c,d- false");
}

