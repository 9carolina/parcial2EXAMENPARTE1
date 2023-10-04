//Ejercicio 4. Intercambio de valores
#include<stdio.h>
int main(){
	int v1, v2, v3, t;
	printf ("Ingrese 1 numero entero: ");
	scanf ("%d", &v1);
 	printf ("Ingrese 1 numero entero: ");
	scanf ("%d", &v2);
	printf ("Ingrese 1 numero entero: ");
	scanf ("%d", &v3);

	t=v1;
	v1=v2;
	v2=v3;
	v3=t;
	
	printf("%d\n%d\n%d\n", v2,v3,v1);
	
	return 0;
}
