# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main ()

{ 
float matriz [5][5],x;
int i,j;

for (i=0; i<5; i=i+1) {
	for (j=0;j<5;j=j+1){
		
		printf("digite um numero");
		scanf("%f", &x);
		matriz[i][j]=x;
	}
	
}
for (i=0;i<5;i=i+1){
	for(j=0;j<5;j=j+1){
	
	printf("matriz [%d][%d]=%f \n",i,j,matriz[i][j]);
	}
}
system("PAUSE");
	return(0);
}
