#include "stdio.h"
#include "stdlib.h"

int main()
{
	int n, *f1, redim, i;
	
	printf("Digite a quantidade de numeros a ser digitados: ");
	scanf("%d", &n); 
	
	f1 = (int *) malloc(n * sizeof(int));
	for(i = 0; i < n; i++){
		printf("\n Digite o numero que entrara na posicao %d do vetor: ", i);
		scanf("%d", &f1[i]);
	}
	
	printf("\n O vetor atual possui %d elementos ", n);
	printf("\n Vetor atual = ");
	
    for(i = 0; i < n; i++)
	 	printf(" %d ", f1[i]);
	 
	printf("\n Digite um numero positivo p/ aumentar o vetor, ou um negativo para diminuir: ");
	scanf("%d", &redim);
	
	if ((n + redim) == 0){
		printf("\n Vetor finalizado com zero elementos ");
		free(f1);
	}
	else if((n + redim) < 0)
	     {
			printf("\n Impossivel um vetor de tamanho negativo ");
			free(f1);
		}
		else{
			f1 = (int *) realloc(f1, (n + redim) * sizeof (int));
			if(redim > 0){
				for(i = n; i < (n + redim); i++){
					printf("\n numero a ser inserido na posicao %d do novo vetor = ", i);
					scanf("%d", &f1[i]);
			    } 
		   }
		   printf("\n Novo vetor = ");
  		   for(i = 0; i < (n + redim); i++)
		 	printf(" %d ", f1[i]);
		}
	
	
	return 0;
}