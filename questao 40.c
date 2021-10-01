#include <stdio.h>
#include <conio.h>


int main(void) {

float salariodia, dias, salbruto, salliquido;

printf ("Digite o total de dias trabalhados: \n");
scanf ("%f", &dias);

salariodia = 30;
salbruto = salariodia * dias;
salliquido = salbruto * 0.92;

printf ("O valor do salario bruto eh R$ %f. \n", salbruto);
printf ("O valor total a receber do empregado, descontando o imposto de renda eh R$ %f. \n", salliquido);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}