#include <stdio.h>
#include <conio.h>


int main(void) {

float salario, salario2;

printf ("Insira o valor do seu salario: \n");
scanf ("%f", &salario);

salario2 = salario * 1.25;

printf ("O valor total do seu salario com 25porcento de aumento eh %f \n", salario2);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}