#include <stdio.h>
#include <conio.h>


int main(void) {

int num, total;

printf ("Insira um  numero inteiro: \n");
scanf ("%d", &num);


total = (num * 3 + 1) + (num * 2 - 1);

printf ("A soma do sucessor do seu triplo com o antecessor do seu dobro eh %d \n", total);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}