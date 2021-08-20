#include <stdio.h>
#include <conio.h>


int main(void) {

int num1, num2, num3, soma;

printf ("Digite primeiro numero \n");
scanf ("%d", &num1);

printf ("Digite segundo numero \n");
scanf ("%d", &num2);

printf ("Digite terceiro numero \n");
scanf ("%d", &num3);

soma = num1 + num2 + num3;

printf ("Sua soma eh %i \n", soma);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}