#include <stdio.h>
#include <conio.h>
#include <string.h>


main ()
{
     char letra[1];
     int tam,i;

     printf("Digite uma letra: ");
     scanf("%s",&letra);

tam = strlen(letra);

letra[i] = letra[i]-32;
         
printf ("\n Sua letra maiuscula eh %s. \n", letra);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}