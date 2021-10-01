#include <stdio.h>
#include <conio.h>


int main(void) {

float preco, total;

printf ("Insira o preco do produto: \n");
scanf ("%f", &preco);

total = preco * 0.88;

printf ("O preco final do produto com 12porcento de desconto eh %f \n", total);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}