/* exercicio 8 aula dia 13/09/2019*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ( )
{
	float a, b, c, d, e, f;
	
	printf ("insira a o preço da lata de tinta de 5 litros ");
	scanf ("%f", &a);
	
	printf ("insira o raio do tanque");
	scanf("%f", &b);
	
	printf (" insira a altura do tanque");
	scanf("%f", &c);
	
	d=((2*(3.14)*b)*c); /* area do cilindro*/
	e=(d/15);/* quantidade de lata de tinta*/
	f=(e*a);/* custo total*/
	
	printf("\n %f area do cilindro \n",d);
	printf("\n %f é a quantidade de latas \n",e);/*lançamento do valor na tela */
	printf("\n %f é o custo \n",f);/*lançamento do valor na tela */

	system("PAUSE");
return(0);	
	
}
