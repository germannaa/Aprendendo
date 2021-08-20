#include <stdio.h>
#include <conio.h>


int main(void) {

float c, f;

printf ("Digite a temperatura em Fahrenheit: \n");
scanf ("%f", &f);

c = 5.0 * (f - 32.0)/9;

printf ("Sua temperatura convertida para Celcius eh %f \n", c);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}