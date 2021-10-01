#include <stdio.h>
#include <conio.h>


int main() {
int segundos, hora, min, seg, resto;


printf("Digite o tempo em segundos: \n");
scanf("%d", &segundos ); 

hora = segundos/3600;
resto = segundos % 3600;
min = resto / 60;
seg = resto % 60;

printf ("\n O tempo equivale a %dh %dm e %d segundos. \n", hora, min, seg);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}