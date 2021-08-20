#include <stdio.h>
#include <conio.h>


int main(void) {

float c, f;

printf ("Digite a temperatura em Celcius: \n");
scanf ("%f", &c);

f = c * (9.0/5.0) + 32.0;

printf ("Sua temperatura convertida para Fahrenheit eh %f \n", f);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}