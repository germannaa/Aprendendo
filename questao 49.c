#include <stdio.h>
#include <conio.h>


int main() {

int h, m, s, segundoss, segundos, hora, min, seg, resto, min_hora, seg_min, seg_hora, seg_total;


printf("Digite a hora de inicio no formato HH MM SS \n");
scanf("%2d%2d%2d", &hora, &min, &seg); 

min_hora = hora * 60; //calcula qtde de minutos nesse tempo
seg_hora = min_hora * 60; //calcula qtde segundos nesse tempo
seg_min = min * 60; //calcula segundos nesse tempo
seg_total = seg_hora + seg_min + seg;

printf ("\n Digite a duracao da experiencia (em segundos):\n");
scanf ("%d", &segundoss);

segundos = segundoss + seg_total;

h = segundos/3600;
resto = segundos % 3600;
m = resto / 60;
s = resto % 60;


printf ("\n A experiencia vai acabar as %dh %dm e %d segundos. \n", h, m, s);



//printf ("\n A hora de termino da experiencia sera %dh %dm e %d segundos. \n",      )

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}