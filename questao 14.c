#include <stdio.h>
#include <conio.h>


int main(void) {

float graus, rad;

printf ("Digite seu angulo em graus: \n");
scanf ("%f", &graus);

rad = (graus * 3.14)/180;

printf ("Seu angulo em radianos eh %f \n", rad);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}