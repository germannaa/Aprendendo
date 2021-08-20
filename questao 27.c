#include <stdio.h>
#include <conio.h>


int main(void) {

float hec, m2;

printf ("Digite seu tamanho em hectare: \n");
scanf ("%f", &hec);

m2 = hec * 10000;

printf ("Seu tamanho em hectare equivale a %f m2. \n", m2);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}