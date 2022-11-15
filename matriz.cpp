/* aula matriz */
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main ()

{ 
float matriz [3][3],x;
int i,j;

for (i=0; i<3; i=i+1) {
	for (j=0;j<3;j=j+1){
		
		printf("digite um numero");
		scanf("%f", &x);
		x=(x*2);
		matriz[i][j]=x;
	}
	
}
for (i=0;i<3;i=i+1){
	for(j=0;j<3;j=j+1){
	
	printf("matriz [%d][%d]=%f \n",i,j,matriz[i][j]);
	}
}
system("PAUSE");
	return(0);
}
