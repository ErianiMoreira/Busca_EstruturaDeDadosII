#include <stdio.h>
#include <stdlib.h>
#define n 5

int BuscaRecursiva(int *vetor, int k, int inicio, int fim);

int main(int argc, char** argv) {
    int i, vet[n], retorno, chave, esquerda, direita;
    
    esquerda = 1;
    direita = n;
    
    for(i=0; i<n; i++){
        printf("\nDigite o numero: ");
        scanf("%d", &vet[i]);
    }
    printf("\n Digite a chave: ");
    scanf("%d", &chave);
    
    retorno = BuscaRecursiva(vet, chave, esquerda, direita);
    
    if(retorno != -1){
        printf("\nEncontrou!");
    }
    else{
        printf("Valor : %d ", retorno);
        printf("\n Nao encontrou!");
    }
    return (EXIT_SUCCESS);
}

int BuscaRecursiva(int *vetor, int k, int inicio, int fim){
    int meio; 
    
    meio = (inicio+fim)/2;
    
    if(inicio> fim){
        return -1;
    }
    else if(vetor[meio] == k){
       return meio;
    }
    else if(vetor[meio]> k){
        return BuscaRecursiva(vetor,k, inicio, meio-1);
    }
    
    else {
        return BuscaRecursiva(vetor,k,meio+1, fim); 
    }
}

