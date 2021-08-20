#include <stdio.h>
#include <conio.h>


int main(void) {

float m, km;

printf ("Digite sua distancia em milhas: \n");
scanf ("%f", &m);

km = 1.61 * m;

printf ("Sua distancia em km eh %f \n", km);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}