#include <stdio.h>
#include <conio.h>


int main(void) {

float c, k;

printf ("Digite a temperatura em Celcius: \n");
scanf ("%f", &c);

k = c + 273.15;

printf ("Sua temperatura convertida para Kelvin eh %f \n", k);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}