#include <stdio.h>
#include <conio.h>


int main(void) {

float graus, rad;

printf ("Digite seu angulo em radianos: \n");
scanf ("%f", &rad);

graus = (rad * 180)/3.14;

printf ("Seu angulo em graus eh %f \n", graus);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}