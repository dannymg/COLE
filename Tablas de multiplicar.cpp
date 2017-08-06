#include<iostream>
#include<stdio.h>
main()
{
int i,tab,mul;
printf(" Tablas de Multiplicar\n");
printf("¿Que tabla deseas realizar?\n");
scanf("%d",&tab);
for(i=1;i<=10;i++)
{
mul=tab*i;
printf("%d x %d = %d\n",tab,i,mul);
}
return 0;
}
