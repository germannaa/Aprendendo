#include <stdio.h>
#include <conio.h>


int main(void) {

float cateto1, cateto2, quadcateto1, quadcateto2, catetos, hipotenusa;

printf ("Insira o valor do primeiro cateto: \n");
scanf ("%f", &cateto1);

printf ("Insira o valor do segundo cateto: \n");
scanf ("%f", &cateto2);

quadcateto1 = pow (cateto1,2);
quadcateto2 = pow (cateto2,2);
catetos = quadcateto1 + quadcateto2;
hipotenusa = sqrt (catetos);

printf ("O valor da hipotenusa eh %f \n", hipotenusa);


printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}