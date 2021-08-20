#include <stdio.h>
#include <conio.h>


int main(void) {

float l, m3;

printf ("Digite seu volume em metros3: \n");
scanf ("%f", &m3);

l = 1000 * m3;

printf ("Seu volume em m3 equivale a %f litros. \n", l);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}