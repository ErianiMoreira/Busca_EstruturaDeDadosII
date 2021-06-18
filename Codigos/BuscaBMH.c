#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

int BMH(char *T, char *P)
{
    int i,j,k;
    int n= strlen(T);
    int m= strlen(P);
    int d(MAX);
    
    //pré-processamento
    for(j=0; j< MAX; j++){
        d[j]=m;
    }
    for(j=1;j<m; j++){
        d[P[j-1]]=m-j;
    }
    i=m;
    //busca
    while(i <= n){
        k=i;
        j=m;
        while(T[k-1] == P[j-1] && j>0) {
            k--;
            j--;
        }
        if (j == 0)
            return k+1;
        i+= d[T[i-1]];
    }
    return -1;
}


int main(int argc, char** argv) {
    int N = 10;
    int M= 3;
    char texto[256], padrao[256];
    int retorno, i;
    
    for (i=0;i<N;i++){
        printf("\n Informe o texto:");
        scanf("%c", &texto[i]);
        getchar();
    }
    
    for(i=0;i<M;i++){
        printf("\n Informe o padrao:");
        scanf("%c", &padrao[i]);
        getchar();
    }
    
    retorno = BMH(texto, padrao);
    
    if (retorno != -1){
        printf ("\n Foi encontrado");
    } else {
        printf ("\n Não foi encontrado.");
    }
    return (EXIT_SUCCESS);
}

