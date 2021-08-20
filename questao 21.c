#include <stdio.h>
#include <conio.h>


int main(void) {

float l, kg;

printf ("Digite seu peso em libras: \n");
scanf ("%f", &l);

kg = l * 0.45;

printf ("Seu peso em libras equivale a %f kg. \n", kg);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}