#include <stdio.h>
#include <conio.h>


int main(void) {

float c, k;

printf ("Digite a temperatura em Kelvin: \n");
scanf ("%f", &k);

c = k - 273.15;

printf ("Sua temperatura convertida para Celcius eh %f \n", c);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}