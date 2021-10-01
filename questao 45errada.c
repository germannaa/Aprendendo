#include <stdio.h>
#include <conio.h>
#include <ctype.h>


main(void) {

char letra;


printf ("Digite uma letra minuscula: \n");
scanf ("%c", &letra);

letra = toupper(letra);

printf ("\n Sua letra maiuscula eh %c. \n", letra);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}