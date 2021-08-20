#include <stdio.h>
#include <conio.h>


int main(void) {

int num, ant, suc;

printf ("Insira um  numero inteiro: \n");
scanf ("%d", &num);

ant = num - 1;
suc = num + 1;

printf ("O antecessor do seu numero eh %d . \n", ant);
printf ("O sucessor do seu numero eh %d \n", suc);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}