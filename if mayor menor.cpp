#include <stdio.h>
main()
{
	int x,y,z;
	printf("Escribe el primer numero: ");
	scanf("%f",&x);
	printf("EScribe el segundo numero: ");
	scanf("%f",&y);
	printf("Escribe el tercer numero: ");
	scanf("%f",&z);
	if(x>y && x>z)
		printf("El mayor es: %d",x);
	else
	if(y>x && y>z)
		printf("El mayor es: %d",y);
			else
	if(z>x && z>y)
		printf("El mayor es: %d",z);
	else 
		printf("Los tres numeros son iguales");						
}
