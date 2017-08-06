#include <stdio.h>
#include <string.h>

int main()
{
	char x[50];
	printf( "Introduzca una palabra: " );
	scanf( "%s", x );
    printf( strrev( x ) );
   return 0;
}
