#include <stdio.h>
#include <stdlib.h>
#define n 5

int BuscaBinaria(int *vetor, int k);

int main(int argc, char** argv) {
    int i, vet[n], retorno, chave;
    
    for(i=0; i<n; i++){
        printf("\nDigite o numero: ");
        scanf("%d", &vet[i]);
    }
    printf("\n Digite a chave: ");
    scanf("%d", &chave);
    
    retorno = BuscaBinaria(vet, chave);
    
    if(retorno != -1){
        printf("\nEncontrou: %!", retorno);
    }
    else{
        printf("\n Nao encontrou!");
    }

    return (EXIT_SUCCESS);
}

int BuscaBinaria(int *vetor, int k){
    int esquerda, direita, meio;    
    esquerda = 0;
    direita = n-1;
    
    while( esquerda <= direita){
      meio = (esquerda+direita)/2;      
      if( k< vetor[meio]){
          direita = meio-1;
      }
      else if( k > vetor[meio]){
          esquerda = meio+1;
      }
      else
          return vetor[meio];
    }
    return -1;    
}

