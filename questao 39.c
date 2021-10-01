#include <stdio.h>
#include <conio.h>


int main(void) {

int premio, ganhador1, ganhador2, ganhador3;

printf ("Digite o valor do premio do concurso da MegaSena: \n");
scanf ("%d", &premio);

ganhador1 = premio * 0.46;
ganhador2 = premio * 0.32;
ganhador3 = premio * 0.22;

printf ("O valor a receber do ganhador 1, eh %d. \n", ganhador1);
printf ("O valor a receber do ganhador 2 eh %d. \n", ganhador2);
printf ("O valor a receber do terceiro ganhador eh %d. \n", ganhador3);
printf ("Parabens a todos os ganhadores. \n\n");

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}