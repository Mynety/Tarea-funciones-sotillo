/*1.Escribir una función que sume dos números. Implemente un programa
que la utilice.*/
/* Decidir hacer una calculadora sencilla qe solo sume o reste los valores que usuario ingrese. Lo de resta 
coloque como adicional por que a mi parece mas divertido espandir las funciones de un progama*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int opc = 0, num1 = 0, num2 = 0;
	do{/* el menu principal del programa.*/
		system("cls");
		printf("Menu de opciones\n\n");
		printf("1. Ingrese los valores\n");
		printf("2. Sumar\n");
		printf("3. Restar\n");
		printf("4. Salir\n");
		printf("Opcion a escoger:");
		scanf("%d",&opc);
		switch(opc){
		case 1:/* Presione el numero 1 en el programa para que ingrese los valores  que quiera sumar o restar,
		siempre hacer esto antes de elegir culaquier  otra pocion del programa . Por cierto al realizar esta 
		accion el progrma la regresara la menu principal para que elija la operacion a relaizar con dichos 
		valores*/
				system("cls");
				printf("Ingrese el primer valor:");
				scanf("%d",&num1);
				printf("Ingerse el segundo valor:");
				scanf("%d",&num2);
				break;
			case 2:/* Presione el numero 2 en el programa para visualizar el resultado de la sumar de los
			que intrudujo en la opcion 1(que se activa cuando presiona la el numero uno en el teclado cuando 
			esta en el menu principal de programa).*/
				system("cls");
				printf("La suma de %d + %d es: %d",num1,num2,num1+num2);
				getch();
				break;
			case 3:/* Presione el numero 3 en el teclado para que asi el programa le permita visualizar el resultado 
			de la resta de lo valoress que intrudujo en la opcion 1(que se activa cuando presiona la el numero 1 
			en el teclado cuando esta en el menu principal de programa).*/
				system("cls");
				printf("La resta de %d - %d es: %d",num1,num2,num1-num2);
				getch();
				break;
			case 4:
				break;
			default:/* Por defecto, cuando el usuario marque una opcion diferente de las disponibles en el 
			programa (osea que no entre la 1 o 4); le mostrara el mensaje printf("La opcion que usted marco 
			no esta disponible.") .*/
				system("cls");
				printf("La opcion que usted marco no esta disponible.");
				getch();
				break;
		}
	}while(opc != 4);/*  esto indica que este menu se repetira "mientras" opc sea diferente a 4( que es la opcion 
	para cerrar el programa.*/
	return 0;
}
