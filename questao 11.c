#include <stdio.h>
#include <conio.h>


int main(void) {

float km, ms;

printf ("Digite a velocidade em metros por segundo: \n");
scanf ("%f", &ms);

km = ms * 3.6;

printf ("Sua velocidade convertida para km por hora eh %f \n", km);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}