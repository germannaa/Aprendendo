#include <stdio.h>
#include <conio.h>


int main(void) {

float l, m3;

printf ("Digite seu volume em litros: \n");
scanf ("%f", &l);

m3 = l/1000;

printf ("Seu volume em litros equivale a %f m3. \n", m3);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}