#include <stdio.h>
#define tam 10
void calcula_pg(int v, int r); 
void imprime_vetor(int v[], int size); 

int main()
{
    int valor, razao; 

    printf("Digite valor inicial e razão para P.G: "); 
    scanf("%d%d", &valor, &razao); 

    calcula_pg(valor,razao); 
    return 0;
}

void calcula_pg(int v, int r) {
    int vet[tam]; 
    int aux = 1; 

    for (int i = 0; i < tam; i++)
    {
        vet[i] = v*aux; 
        v = vet[i]; 
        aux = r; 
    }
    
    imprime_vetor(vet,tam); 
}

void imprime_vetor(int v[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Vet[%d] = %d\n", i, v[i]); 
    }
    
}
