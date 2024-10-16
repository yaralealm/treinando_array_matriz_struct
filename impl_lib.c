#include <stdio.h>
#include <time.h>
#define tam 4


void pega_matriz(int mat[][tam], int size){
     

    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("mat[%d][%d] = ",j, i);
            scanf("%d", &mat[j][i]);
        }
        
    }
    

}

void imprime_matriz(int mat[][tam], int size){
        for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d ", mat[j][i]);
           
        }
        
    }
}

int pega_menor(int mat[][tam], int size){
    int menor = mat[0][0]; 
            for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (mat[j][i] < menor)
            {       
                menor = mat[j][i]; 
            }
            
           
        }
        
    }

    return menor; 
}

void gera_mat_random(int mat[][tam], int size){
        for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            mat[j][i] = rand() % 100; 
        }
        
    }
}

