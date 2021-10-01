#include <stdio.h>
#include <conio.h>


int main() {

int a, b, c;

printf ("Escreva os lados do triangulo. \n");
    scanf("%d %d %d", &a, &b, &c);


if ( (a <= b + c) && (b <= a + c) && (c <= a + b)) {
    printf ("Eh um triangulo! \n");

    if ( (a == b) && (b == c)) {
      printf ("Equilatero \n");
    }

    else { 
    if ( (a == b) || (a == c) || (b == c)) {
        printf ("Isoceles \n");
    }
    

    else { 
             printf ("Escaleno \n");
    }
    }
}




printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}