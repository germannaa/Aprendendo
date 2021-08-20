#include <stdio.h>
#include <conio.h>


int main(void) {

float m, km;

printf ("Digite sua distancia em km: \n");
scanf ("%f", &km);

m = km/1.61;

printf ("Sua distancia convertida em milhas eh %f \n", m);

printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}