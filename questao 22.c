#include <stdio.h>
#include <conio.h>


int main(void) {

float j, m;

printf ("Digite seu comprimento em jardas: \n");
scanf ("%f", &j);

m = 0.91 * j;

printf ("Seu comprimento em jardas equivale a %f metros. \n", m);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}