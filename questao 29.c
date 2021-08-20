#include <stdio.h>
#include <conio.h>


int main(void) {

float nota1, nota2, nota3, nota4, media;

printf ("Digite a primeira nota: \n");
scanf ("%f", &nota1);

printf ("Digite a segunda nota: \n");
scanf ("%f", &nota2);

printf ("Digite a terceira nota: \n");
scanf ("%f", &nota3);

printf ("Digite a quarta nota: \n");
scanf ("%f", &nota4);

media = (nota1 + nota2 + nota3 + nota4)/4;

printf ("A sua media obtida eh %f. \n", media);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}