#include <stdio.h>
#include <conio.h>


int main(void) {

float real, dolar, conversao;

printf ("Insira a cotacao do dolar atual: \n");
scanf ("%f", &dolar);

printf ("Insira a quantia em real que vc possui: \n");
scanf ("%f", &real);

conversao = real * dolar;

printf ("Seu valor em reais equivale a  %f dolares. \n", conversao);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}