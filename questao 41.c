#include <stdio.h>
#include <conio.h>


int main(void) {

float valorhora, salmes, salmes2;
int horas;

printf ("Digite o total de horas trabalhados: \n");
scanf ("%d", &horas);

printf ("\n Digite o valor da hora trabalhada: \n");
scanf ("%f", &valorhora);

salmes = horas * valorhora;
salmes2 = salmes * 1.10;

printf ("\n O valor a receber (incluindo uma bonificacao) eh R$ %f. \n", salmes2);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}