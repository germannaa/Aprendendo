#include <stdio.h>
#include <conio.h>


int main() {

float aposta1, aposta2, aposta3, premio, apostatotal , p1, p2, p3, recebe1, recebe2, recebe3;

printf ("Informe o valor que cada um dos 3 apostadores jogou. \n");
    scanf("%f %f %f", &aposta1, &aposta2, &aposta3);

printf ("Informe o valor do premio da loteria \n");
    scanf ("%f", &premio);

apostatotal = aposta1 + aposta2 + aposta3;
p1 = aposta1 / apostatotal;
p2 = aposta2 / apostatotal;
p3 = aposta3 / apostatotal;

recebe1 = p1 * premio;
recebe2 = p2 * premio;
recebe3 = p3 * premio;

printf("O jogador 1, que apostou %f, vai receber R$%f \n", aposta1, recebe1);
printf("O jogador 2, que apostou %f, vai receber R$%f \n", aposta2, recebe2);
printf("O jogador 3, que apostou %f, vai receber R$%f \n", aposta3, recebe3);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}