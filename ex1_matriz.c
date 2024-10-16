#include <stdio.h>
#define tam 4
void pega_matriz(int mat[][tam], int size); 
void imprime_matriz(int mat[][tam], int size); 
int pega_menor(int mat[][tam], int size); 

int main(int argc, char const *argv[])
{
    int mat[tam][tam];
    pega_matriz(mat, tam); 

    printf("---------------------------------------------------------\n"); 

    imprime_matriz(mat,tam); 

    printf("---------------------------------------------------------\n"); 

    printf("O menor número da matriz eh %d\n", pega_menor(mat,tam)); 


}
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
            printf(" %d,", mat[j][i]);
           
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