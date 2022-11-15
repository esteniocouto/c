/* aula do dia 13/09/2019 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ( )

{
float  a, B, b, h; /* declaração de variaveis*/
printf  ("Prezado usuario insira os dados da base maior base, base menor e da altura nesta ordem precionando ENTER ha cada dado inserido para que seja calculada a area do trapezio");
scanf ("%f %f %f", &B &b &h); /*scaneamento das variaveis*/
a=(((b+B)*h)/2); /* calculo da area do trapezio*/
printf ( "\n %f é a area do trapezio \n" ,a); /*lançamento do valor na tela */
system("PAUSE");
return(0);



}
