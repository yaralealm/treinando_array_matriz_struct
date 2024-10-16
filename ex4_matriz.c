#include <stdio.h>
#include <time.h>
#include "lib.h"
#include "impl_lib.c"
#define tam 4


typedef struct {
    int li; 
    int col; 
} posicao; 

posicao acha_valor(int mat[][tam], int size, int val); 


int main(int argc, char const *argv[])
{
    int m[tam][tam]; 
    int valor; 

    srand((unsigned) time(NULL)); 

    gera_mat_random(m,tam); 

    imprime_matriz(m,tam); 

    printf("Qual valor deseja procurar na matriz?\n"); 
    scanf("%d", &valor); 

   posicao pos = acha_valor(m, tam, valor); 

    if (pos.li != -1)
    {
        printf("Valor encontrado!\n Linha: %d\nColuna: %d\n", pos.li, pos.col); 
    }else{
        printf("VALOR NÃO ENCONTRADO :(\n"); 
    }
    

    return 0;
}

posicao acha_valor(int mat[][tam], int size, int val){
    posicao pos = {-1, -1}; 
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (mat[j][i] == val)
            {
                pos.li = j; 
                pos.col = i; 
                return pos; 
            }
            
        }
        
    }

    return pos; 
    
}