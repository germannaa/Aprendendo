#include <stdio.h>
#include <conio.h>


int main(void) {

float salbase, gratificacao, desconto, salreceber;

printf ("Digite o valor do salario base: \n");
scanf ("%f", &salbase);

gratificacao = salbase * 0.05;

desconto = salbase * 0.07;

salreceber = salbase + gratificacao - desconto;

printf ("\n O valor dp salario a receber eh de R$ %f. \n", salreceber);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}