#include <stdio.h>
#include <conio.h>


int main(void) {

float hdegraucm, hdegraum, hdesejada, totaldegraus;

printf ("Digite a altura que deseja alcancar em metros: \n");
scanf ("%f", &hdesejada);

printf ("\n Digite a altura de cada degrau em centimetros: \n");
scanf ("%f", &hdegraucm);

hdegraum = hdegraucm / 100;
totaldegraus = hdesejada / hdegraum; 

printf ("\n Para alcancar a altura desejada, vc precisa subir %f degraus. \n", totaldegraus);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}