#include <stdio.h>
#include <stdlib.h>


#define TAM 10
/*
 * 
 */
void vetor();
void geraVetor(float[],int);
void exibeVetor(float[],int);
float soma(float[],int);
float maior(float[],int);
float menor(float[],int);
float media(float[],int);
float mediana(float[],int);
void crescente(float[],int);
void decrescente(float[],int);

void vetor(){
    system("cls");
    int i,tam;

    
    printf("Bem vindo ao submenu de vetores!\n");
    printf("Aqui voce pode visualizar diversas manipulacoes com vetores!\n\n");
    
    tam=TAM;
    float vet[tam];
    geraVetor(vet,tam);
    
    
    printf("Vetor de tamanho %d gerado pelo sistema: \n",tam);
    exibeVetor(vet,tam);
    printf("O somatorio dos numeros e: %0.1f\n",soma(vet,tam));
    printf("O maior valor do vetor e: %0.1f\n",maior(vet,tam));
    printf("O menor valor do vetor e: %0.1f\n",menor(vet,tam));
    printf("O valor medio do vetor e: %0.1f\n",media(vet,tam));
    printf("O valor mediano do vetor e: %0.1f\n",mediana(vet,tam));
    printf("O vetor na ordem crescente e:\n");
    crescente(vet,tam);
    exibeVetor(vet,tam);
    printf("O vetor na ordem decrescente e:\n");
    decrescente(vet,tam);
    exibeVetor(vet,tam);
    
    printf("\n\n");
    
}

void geraVetor(float vet[],int tam){
    int i;
    
    for(i=0;i<tam;i++){
        vet[i] = rand()%10;
    } 
}

void exibeVetor(float vet[],int tam){
    int i;
    
    for(i=0;i<tam;i++){ 
        printf("[%.1f] ",vet[i]);
    }
    
    printf("\n");
}

float soma(float vet[],int tam){
    int i;
    float s=0;
    
    for(i=0;i<tam;i++){ 
        s+=vet[i];
    }
    return s;
}

float maior(float vet[],int tam){
    int i;
    float m = vet[0];
    for (i=1;i<tam;i++){
        if(m<vet[i]) m = vet[i];
    }
    return m;
}

float menor(float vet[],int tam){
    int i;
    float m = vet[0];
    for (i=i;i<tam;i++){
        if(m > vet[i]) m = vet[i];
    }
    return m;
}

float media(float vet[],int tam){
    int i;
    float m;

    m=soma(vet,tam)/tam;
    
    return m;
}

float mediana(float vet[],int tam){
    crescente(vet,tam);
    float m;
    m = tam%2 ? vet[tam/2] : ((vet[(tam/2)]+vet[(tam/2)-1])/2);
    
    return m;
}

void crescente(float vet[], int tam){
    int i,j;
    float aux;
    for(i=0;i<tam;i++){
        for(j=i+1;j<tam;j++){
            if(vet[j]<vet[i]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void decrescente(float vet[], int tam){
    int i,j;
    float aux;
    for(i=0;i<tam;i++){
        for(j=i+1;j<tam;j++){
            if(vet[j]>vet[i]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}