/* Ejercicio 2.Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función*/

#include<stdio.h>/* libreria principal*/
#include<math.h>/* libreria secundaria*/

void media (int,int,float,float);
int main (void){
	int i=0,n=0; 
	float suma = 0 ,ax= 0;
	
	printf("Introduzca el total de datos :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Ingrese el dato %d :\n",(i+1));
	scanf("%f",&ax);
	suma+=ax;
	}
	printf("La media es: %g\n",(suma/n));
	
	return 0;
}
void media (int i,int n,float suma,float ax){
		
	printf("Introduzca el total de datos :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Ingrese el dato %d :\n",(i+1));
	scanf("%f",&ax);
	suma+=ax;
	}
	printf("La media es: %g\n",(suma/n));
}
