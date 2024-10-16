#include <stdio.h>
#define tam 10

void constroi_pa(int v, int r); 
void imprime_vetor(int v[], int size); 

int main(int argc, char const *argv[])
{
    int valor; 
    int razao; 

    printf("Digite valor inicial e razão para a P.A: "); 
    scanf("%d%d", &valor, &razao); 

    constroi_pa(valor,razao); 

    return 0;
}

void constroi_pa(int v, int r){
    int vet[tam]; 

    for (int i = 0; i < tam; i++)
    {
        vet[i] = v+r; 
        v = vet[i]; 
    }
    
    imprime_vetor(vet, tam); 
    
}

void imprime_vetor(int v[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Vet[%d] = %d\n", i, v[i]);
    }
    
}