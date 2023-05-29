#include <stdio.h>
#include <stdlib.h>



int main(){
	int numdigitado;
	int i;
	int vet[20000];
	
  
  
printf("digite um numero entre 1 e 20000:\n");
scanf("%d", &numdigitado);

if(numdigitado < 1 || numdigitado > 20000)
printf("numero invalido\n");

while(numdigitado < 1 || numdigitado < 20000);
for (i = 0 ; i <= numdigitado; i++){
	do{
		vet[i]=(rand()% numdigitado);
		printf("%d, ", vet[i]);
		}while (vet[i]==0);
		
	
	}
	
	}



