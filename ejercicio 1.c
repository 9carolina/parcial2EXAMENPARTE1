//Ejercicio 1. Operaciones Aleatorias//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
	int main(){
	int i=0, numAl, Al1, Al2;
	
	srand(time(NULL));
	Al1=rand()%10+1;
	Al2=rand()%10+1;
	
	while(1){	                                                     //no finite
	numAl=rand()%5+1;
	printf("%d\n", numAl);	
		if(numAl==5){
			break;
		}
	Al1=rand()%10+1;
	Al2=rand()%10+1;	
	switch(numAl){
		case 1:
			printf("%d+%d =%d\n\n", Al1, Al2, Al1+Al2);
			break;
		case 2:
			printf("%d-%d =%d\n\n", Al1, Al2, Al1-Al2);
			break;
		case 3:
			printf("%d*%d =%d\n\n", Al1, Al2, Al1*Al2);
			break;
		case 4:
			printf("%d/%d =%.2f\n\n", Al1, Al2, (float)Al1/Al2);
			break;
	}
	}
	printf("Termina programa");
	return 0;
}
