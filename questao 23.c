#include <stdio.h>
#include <conio.h>


int main(void) {

float j, m;

printf ("Digite seu comprimento em metros: \n");
scanf ("%f", &m);

j = m/0.91;

printf ("Seu comprimento em metros equivale a %f jardas. \n", j);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}