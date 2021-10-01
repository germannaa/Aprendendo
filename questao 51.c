#include <stdio.h>
#include <conio.h>


int main() {

int x1,x2,y1,y2;
float distancia;

printf ("Escreva as coordenadas (x,x) e (y,y)\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    distancia = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );

    printf("A distancia entre os dois pontos eh %f", distancia);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}