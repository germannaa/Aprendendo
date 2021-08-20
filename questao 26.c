#include <stdio.h>
#include <conio.h>


int main(void) {

float hec, m2;

printf ("Digite seu tamanho em m2: \n");
scanf ("%f", &m2);

hec = m2 * 0.0001;

printf ("Seu tamanho em m2 equivale a %f hectares. \n", hec);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}