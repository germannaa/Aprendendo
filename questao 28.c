#include <stdio.h>
#include <conio.h>


int main(void) {

float num1, num2, num3, soma;

printf ("Digite o primeiro valor: \n");
scanf ("%f", &num1);

printf ("Digite o segundo valor: \n");
scanf ("%f", &num2);

printf ("Digite o terceiro valor: \n");
scanf ("%f", &num3);

soma = pow (num1,2) + pow (num2,2) + pow (num3,2);

printf ("A soma do quadrado dos valores dados eh %f. \n", soma);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}