#include <stdio.h>
#include <conio.h>


int main(void) {

float valorliq, valdesc, valparcela, comissaoavista, comissaoparcelada;

printf ("Digite o valor total da compra: \n");
scanf ("%f", &valorliq);

valdesc = valorliq * 0.90;
valparcela = valorliq / 3;
comissaoavista = valdesc * 0.05;
comissaoparcelada = valorliq * 0.05;

printf ("\n Caso o cliente queira pagar a vista, o valor a ser pago sera de R$ %f. \n", valdesc);
printf ("E o vendedor recebera R$ %f de comissao. \n ", comissaoavista);
printf ("\n Caso o cliente queira pagar parcelado em 3x, o valor de cada parcela sera de %f. \n", valparcela);
printf ("E nesse caso, o valor da comissao do vendedor sera de r$ %f. \n", comissaoparcelada);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}