#include <stdio.h>
#define tam 10

void pega_vetor(); 
int pega_menor(int v[], int size); 
int pega_maior(int v[], int size); 

int main()
{
    pega_vetor(); 

    return 0;
}

void pega_vetor(){
    int vet[tam]; 
    int size = tam; 

    for (int i = 0; i < size; i++)
    {
        printf("Vet[%d] = ", i); 
        scanf("%d", &vet[i]); 
    }

    printf("O menor elemento do vetor eh %d.\n E o maior eh %d.\n", pega_menor(vet,tam), pega_maior(vet,tam)); 
    
}

int pega_menor(int v[], int size){
    int menor = v[0]; 

    for (int i = 0; i < size; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i]; 
        }
        
    }
    return menor; 
}

int pega_maior(int v[], int size){
    int maior = v[0];

    for (int i = 0; i < size; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i]; 
        }
        
    }
     
    return maior;


}