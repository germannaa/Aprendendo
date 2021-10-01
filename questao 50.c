#include <stdio.h>
#include <conio.h>


int main() {

int idade, anonascimento;


printf(" Ola! Coloque sua idade: \n");
scanf("%d", &idade); 

anonascimento = 2021 - idade;

printf ("\n Você nasceu no ano %d. \n", anonascimento);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}