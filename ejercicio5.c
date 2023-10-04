//Ejercicio 5. Año Bisiesto
#include<stdio.h>
int main(){
	int j;
	printf ("Introduzca un año para determinar si es bisiesto, o no: ");
	scanf ("%d", &j);
 	
	if ((j%4==0 && j%100!=0)||(j%400==0)){
 		printf ("Es bisiesto\n", j);
  	}
  	else{
  		printf ("No es bisiesto\n", j);
	}

	return 0;
}
