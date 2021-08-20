#include <stdio.h>
#include <conio.h>


int main(void) {

float pol, cm;

printf ("Digite seu comprimento em centimetros: \n");
scanf ("%f", &cm);

pol = cm/2.54;

printf ("Seu comprimento em polegadas eh %f \n", pol);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}