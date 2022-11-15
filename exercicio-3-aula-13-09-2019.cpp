00009=99/* aula do dia 13/09/2019  exercicio 3*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

int main ( )
{
	int nr, a, b, c, d, e, f; 
	
	printf ("escolha qual operação matematica deseja, 1 dividir, 2 multiplicar, 3 subitrair, 4 soma");
	scanf("%d", &nr);
	if (nr==1)
	 {
printf ("Digite os dois numero que deverao ser dividido \n");
scanf ("%d %d", &a, &b);
e=a/b;
printf ("%d X %d = %d\n", a, b, e);
}

if (nr==2) {
	
printf ("Digite os dois numero que deverao ser multiplicado\n");
scanf ("%d %d", &a, &b);
e=a*b;
printf ("%d X %d = %d\n", a, b, e);
}
if (nr==3) {
printf ("Digite os dois numero que deverao ser subitraido\n");
scanf ("%d %d", &a, &b);
e=a-b;
printf ("%d X %d = %d\n", a, b, e);
}
if (nr==4) {
printf ("Digite os dois numero que deverao ser somado\n");
scanf ("%d %d", &a, &b);
e=a+b;
printf ("%d X %d = %d\n", a, b, e);
}
printf ( "\n %d o resultado \n" ,e); /*lançamento do valor na tela */
system("PAUSE");
return(0);

}
