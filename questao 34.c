#include <stdio.h>
#include <conio.h>


int main(void) {

float raio, pi, area;

printf ("Insira o raio do circulo: \n");
scanf ("%f", &raio);

pi = 3.141592;
area = pi * (raio * raio);

printf ("A area do seu circulo eh %f \n", area);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}