#include <stdio.h>
#include <conio.h>


int main(void) {

float acre, m2;

printf ("Digite seu comprimento em m2: \n");
scanf ("%f", &m2);

acre = m2 * 0.000247;

printf ("Seu comprimento em m2 equivale a %f acres. \n", acre);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}