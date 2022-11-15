/* Programa que solicita base e altura e calcula posicao final */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ( )

{
float p, v, t, a, y, z, x; /* Declaracao de Variaveis */
printf ("Prezado usuario, Entre com a posicao inicial,velocidade inicial,tempo do percurso,e da aceleracao do automovel,e presione ENTER a cada valor digitado:"); /* Entrada de Dados */
scanf ("%f %f %f %f", &p, &v, &t, &a); /*scanemaneto do valor digitado pleo usuario*/
y=(p+(v*t)+((0.5)*a*pow(t,2)));
printf("\n %f é a posicao finao \n",y);/*lançamento do valor na tela */
system("PAUSE");
return(0);
}

