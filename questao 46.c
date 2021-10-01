#include <stdio.h>
#include <conio.h>


int revert(int n)
{
   int ret=0;
   int i=1;
   
   while (i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}
int main() {
int num, rev;


printf("Digite 3 numeros: \n");
scanf("%d", &num); 

rev = revert(num);

printf ("\n O numero digitado invertido eh %d. \n", rev);

printf ("\n Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}