#include <stdio.h>
#include <conio.h>


int main(void) {

int lado, area;

printf ("Insira o tamanho do lado do quadrado: \n");
scanf ("%d", &lado);

area = lado * lado;

printf ("A area do seu quadrado eh %d \n", area);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}