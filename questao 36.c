#include <stdio.h>
#include <conio.h>


int main(void) {

float altura, raio, pi, volume;

printf ("Insira a altura do cilindro: \n");
scanf ("%f", &altura);

printf ("Insira o raio do cilindro: \n");
scanf ("%f", &raio);

pi = 3.141592;
volume = pi * (raio * raio) * altura;

printf ("O volume do seu cilindro eh %f \n", volume);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}