/*algoritimo que solicita um valor real e calcular a rais quadrada deste valor somando com o seu cubo*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ( )
{
float a, b, c, d; /* Declaração de vareaveis */
printf ("Entre com o valor da base e da altura em metros:"); /* Entrada de Dados */
scanf ("%f", &a); /*escaneamento do valor digitado pelo usuario*/
c=pow(a,3);
b=sqrt(a);
d=(c+b);
printf("\n %f é o resultado\n",d);/*lançamento do valor na tela */
system("PAUSE");
return(0);

}
