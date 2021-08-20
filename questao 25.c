#include <stdio.h>
#include <conio.h>


int main(void) {

float acre, m2;

printf ("Digite seu comprimento em acres: \n");
scanf ("%f", &acre);

m2 = acre * 4048.58;

printf ("Seu comprimento em acres equivale a %f m2. \n", m2);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}