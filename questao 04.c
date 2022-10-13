#include <stdio.h>
#include <conio.h>

int main(void) {

int x, potencia;

printf ("Digite que deseja obter seu quadrado \n");
scanf ("%d", &x);

potencia = x*x;

printf ("Sua resposta eh %d \n", potencia);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}
