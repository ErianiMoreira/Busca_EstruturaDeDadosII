#include <stdio.h>
#include <stdlib.h>
#define n 5

int buscaMaisSolicitada(int *vetor, int k);

int main(int argc, char** argv) {
    int vet[n], i, chave, retorno;
    
    for(i=0; i<n;i++){
        printf("\n Informe um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("\n Informe a chave: ");
    scanf("%d", &chave);
    retorno = buscaMaisSolicitada(vet, chave);
    
    printf("Exibindo o vetor: ");
    
    for(i=0;i<n;i++){
         printf(" %d ", vet[i]);
    }
    
    if(retorno == -1)
        printf("Não existe o regsitro!");
    else
        printf("Registro encontrado: %d \n", retorno);

    return (EXIT_SUCCESS);
}


int buscaMaisSolicitada(int *vetor, int k){
    int i,j;
    
    for( i=0; i<n; i++){
       if(vetor[i]== k){
           int aux = k;
           for( j=i; j>0;j--){
              vetor[j]= vetor[i-1];
              i--;
           }
           vetor[j]= aux;
           return vetor[j];
        }
    }
    return -1;
}