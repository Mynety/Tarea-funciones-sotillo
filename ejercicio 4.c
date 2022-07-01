/* 4.Escribir una función que calcule y presente las raíces reales de la
ecuación de segundo grado ax2+bx+c=O .*/

/* NOTA A TOMAR EN CUENTA:Suponer que a, b y c son argumentos en coma flotante con valores dados y que x1
y que x2 son variables en coma flotante. Suponer también que b'>4*a*c, de forma
que las raíces calculadas son siempre reales*/

#include<stdio.h>/* libreria principal*/
#include<math.h>/*libreria que permite realizar operaciones matematicas como raices*/
#include<conio.h>/* libreria secundaria*/
#include<string.h>/* libreria de apoyo*/
void ecuaciones(double,double,double,double *,double *);/* use el tipo dedato void para mayor facilidad*/
int main (void){
	
	double a,b,c,x1,x2;
	printf("Introduzca a : \n");
	scanf("%lf",&a);
	printf("Introduzca b : \n"); /* area de la funcion principal*/
	scanf("%lf",&b);
	printf("Introduzca c : \n");
	scanf("%lf",&c);
	ecuaciones(a,b,c,&x1,&x2);
	printf("Las soluciones son: %lf y %lf",x1,x2);
	
	getch();
	
	return 0;
}
	
void ecuaciones(double a,double b,double c,double *x1,double *x2){
	*x1= (-b+(sqrt(b*b<4*a*c)))/2*a;
	*x2= (-b-(sqrt(b*b<4*a*c)))/2*a;	
}
