#include <stdio.h>
#include <conio.h>


int main(void) {

float l, kg;

printf ("Digite seu peso em kg: \n");
scanf ("%f", &kg);

l = kg/0.45;

printf ("Seu peso em kg equivale a %f libras. \n", l);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}