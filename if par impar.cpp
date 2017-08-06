#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(void)
{
	int i;
	cout<<"Introduzca numero: ";
	cin>>i;
	if (i%2==0) {
		printf("Es par.");
	}	
	else {
		printf("Es impar.");
	}
	system("PAUSE");
	return 0;
}
