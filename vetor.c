#include <stdio.h>
#include <stdlib.h>


#define TAM 10
/*
 * 
 */
void geraVetor(float[]);
void exibeVetor(float[],int);
float maior(float[]);
float menor(float[]);
float media(float[]);
float mediana(float[]);
void crescente(float[]);
void decrescente(float[]);

void vetor(){
    system("cls");
    float vet[TAM];
    int i;

    
    printf("Bem vindo ao submenu de vetores!\n");
    printf("Aqui voce pode visualizar diversas manipulacoes com vetores!\n\n");
    
    geraVetor(vet);
    
    printf("Vetor gerado pelo sistema: \n");
   
    exibeVetor(vet,TAM);
    
    printf("\n\n");
    
}

void geraVetor(float vet[]){
    int i;
    
    for(i=0;i<TAM;i++){
        vet[i] = rand()%10;
    } 
}

void exibeVetor(float vet[],int tam){
    int i;
    
    for(i=0;i<tam;i++){ 
        printf("[%.1f] ",vet[i]);
    }
}

float maior(float vet[]){
    int i;
    float m = vet[0];
    for (i=1;i<TAM;i++){
        if(m<vet[i]) m = vet[i];
    }
    return m;
}
float menor(float vet[]){
    int i;
    float m = vet[0];
    for (i=i;i<TAM;i++){
        if(m > vet[i]) m = vet[i];
    }
    return m;
}
float media(float vet[]){
    int i;
    float m;
    crescente(vet);
    
    TAM/2? m = vet[TAM/2] : m = (vet[TAM/2]+vet[(TAM/2)-1])/2;
    
    return m;
    
}
float mediana(float[]);
void crescente(float[]);
void decrescente(float[]);