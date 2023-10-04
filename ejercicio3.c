//Ejercicio 3. Mitad de pirámide de números//
#include<stdio.h>
int main(){
	
	int i, j, lineas;
	
	printf ("Numero de lineas de la piramide: ");
	scanf ("%d", &lineas);
	for (i=1; i<=lineas; i++){
		for (j=1; j<=i; j++){
			printf ("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}
