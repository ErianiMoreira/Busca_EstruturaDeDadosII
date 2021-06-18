#include <stdio.h>
#include <stdlib.h>
#define n 5

int buscaSequencial(int *vetor, int k);

int main(int argc, char** argv) {
    int vet[n], i, chave, retorno;
    
    for(i=0; i<n;i++){
        printf("\n Informe um numero: ");
        scanf("%d", &vet[i]);
    }
    
    printf("\n Informe a chave: ");
    scanf("%d", &chave);
    
    retorno = buscaSequencial(vet, chave);
    
    if(retorno == -1)
        printf("Não existe o regsitro!");
    else
        printf("Registro encontrado: %d \n", retorno);

    return (EXIT_SUCCESS);
}


int buscaSequencial(int *vetor, int k){
    int i;
    
    for( i=0; i<n; i++){
       if(vetor[i]== k)
           return vetor[i];
        
    }
    return -1;
    
}
