#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 25
#define m 8

int forcabruta (char *texto, char *padrao);

int main(int argc, char** argv) {
    char texto[20], padrao[20];
    int retorno, i;
    
    for (i=0;i<n;i++){
        printf("\n Informe o texto:");
        scanf("%c", &texto[i]);
        getchar();
    }
    
    for(i=0;i<m;i++){
        printf("\n Informe o padrao:");
        scanf("%c", &padrao[i]);
        getchar();
    }
    
    retorno = forcabruta(texto, padrao);
    
    if (retorno != -1){
        printf ("\n Foi encontrado");
    } else {
        printf ("\n Não foi encontrado.");
    }
    return (EXIT_SUCCESS);
}

int forcabruta  (char *texto, char *padrao){
    int i,j;
    
    for (i=0;i<=(n-m);i++){
        j=0;
        while ((j<m) && (texto[i+j] == padrao[j])){
            j = j+1;
            if (j == m){
                return i;
            }
        }
    }
    return -1;
}