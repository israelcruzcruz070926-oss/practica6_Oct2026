/*Israel cruz cruz
Practica 6
ejercicio de tipos de variable, entradas y salidas*/

#include<stdio.h>

void main()
{
int entnum;
  char carac = 65; // convierte el numero en caracter ASCII.
  char carac2 = 'a';
  double punto;

  //asignar valores de teclado a una variable
  printf("escribe un valor entero:");
  scanf("%i",&entnum);
  printf("escribe un valor real:");
  scanf("%lf", &punto);
  
  //imprimir valores de formato 
  printf("\n imprimiendo las variables \a\n");
  printf("\t valor de numero entero es: %i \n", entnum);
  printf("\t valor del caracter ASCII es: %c \n", carac);
  printf("\t valor del caracter es: %c \n", carac2);
  printf("\t valor del numero real es: %lf \n", punto);
  
}
