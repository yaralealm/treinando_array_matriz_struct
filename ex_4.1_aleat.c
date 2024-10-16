#include <stdio.h>
#include <time.h>
#include <stdbool.h> 
#define tam 10

void carrega_vet_aleat(int vet[]); 
void imprime_vetor(int vet[], int size); 
int achou_vetor(int vet[], int size, int v); 

int main(int argc, char const *argv[])
{
    int vet[tam]; 
    int valor; 
    int position; 

    carrega_vet_aleat(vet); 
    imprime_vetor(vet,tam); 

    printf("Digite valor para ser encontrado no vetor: "); 
    scanf("%d", &valor); 

    position = achou_vetor(vet,tam,valor); 

    if(position != -1){
        printf("Vetor encontrado! Posicao %d\n", position); 
    }else{
        printf("Nao encontrei :(\n");
    }


    return 0;
}

void carrega_vet_aleat(int vet[]){
    srand((unsigned) time(NULL)); 

    for (int i = 0; i < tam; i++)
    {
        vet[i] = rand() % 100; 
    }
    
}

void imprime_vetor(int vet[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("vet[%d] = %d\n", i, vet[i]); 
    }
    
}

int achou_vetor(int vet[], int size, int v){
    bool achou = false; 
    int i; 
    for ( i = 0; i < size && !achou; i++)
    {
        if (v == vet[i])
        {
           achou = true;  
           return i; 
        }
        
    }
    
    return -1;  
}
