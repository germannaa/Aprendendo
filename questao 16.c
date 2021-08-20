#include <stdio.h>
#include <conio.h>


int main(void) {

float pol, cm;

printf ("Digite seu comprimento em polegadas: \n");
scanf ("%f", &pol);

cm = pol * 2.54;

printf ("Seu comprimento em centimetros eh %f \n", cm);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}