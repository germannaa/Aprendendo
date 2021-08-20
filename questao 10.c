#include <stdio.h>
#include <conio.h>


int main(void) {

float km, ms;

printf ("Digite a velocidade em Km por hora: \n");
scanf ("%f", &km);

ms = km/3.6;

printf ("Sua velocidade convertida para metros por segundo eh %f \n", ms);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}