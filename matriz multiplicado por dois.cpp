/* aula matriz-mazer matriz multiplicas numeros digitados por dois */
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main ()

{ 
float matriz [3][3],x,media,a,b,c,d,e,f,g,h,k;
int i,j;

for (i=0; i<10; i=i+1) {
	for (j=0;j<10;j=j+1){
		
		printf("digite um numero");
		scanf("%f", &x);
		matriz[i][j]=x;
	}
	
}
for (i=0;i<10;i=i+1){
	for(j=0;j<10;j=j+1){
	
	printf("matriz [%d][%d]=%f \n",i,j,matriz[i][j]);
	}
}

	matriz[0][0]=a;
	matriz[0][1]=b;
	matriz[0][2]=c;
	matriz[1][0]=d;
	matriz[1][1]=e;
	matriz[1][2]=f;
	matriz[2][0]=g;
	matriz[2][1]=h;
	matriz[2][2]=k; 
	
	media=((a+b+c+d+e+f+g+h+k)/9);

    printf("a media e de: %f", media);
system("PAUSE");
	return(0);
}
