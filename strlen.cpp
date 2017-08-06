#include <stdio.h>
#include <string.h>

int main()
{
	char nombre[50];
	printf( "Introduzca su nombre: " );
	scanf( "%s", nombre );
    printf( "Su nombre tiene %d letras", strlen( nombre ) );
   return 0;
}
