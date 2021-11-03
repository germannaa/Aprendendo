#include <stdio.h>


int soma (int a, int b) {
    int resultado = 0;
    resultado = a+b;
    return resultado;
}

int subtracao (int a, int b) {
    int resultado = 0;
    resultado = a-b;
    return resultado;
}

int multiplicacao (int a, int b) {
    int resultado = 0;
    resultado = a*b;
    return resultado;
}

int divisao (int a, int b) {
    int resultado = 0;
    resultado = a/b;
    return resultado;
}

int main (void) {

int operacao, a, b, resultado = 0;

printf ("Digite a operacao desejada: \n");
printf ("1 para soma, 2 para subtracao, 3 para multiplicacao e 4 para divisao\n");
scanf ("%d", &operacao);

printf ("Digite o primeiro numero\n");
scanf ("%d", &a);

printf ("Digite o segundo numero\n");
scanf ("%d", &b);

switch(operacao) {
    case 1:
    resultado = soma(a,b);

    printf ("Resultado da soma eh %d", resultado);
    break;

    case 2:
    resultado = subtracao(a,b);

    printf ("Resultado da subtracao eh %d", resultado);
    break;

    case 3:
    resultado = multiplicacao(a,b);

    printf ("Resultado da multiplicacao eh %d", resultado);
    break;

    case 4:
    resultado = divisao(a,b);

    printf ("Resultado da divisao eh %d", resultado);
    break;

    default:
    printf ("Opcao invalida.\n");
}
   return 0;
}
