#include <stdio.h>
#include <stdlib.h>


#define TAM 10
/*
 * 
 */
void vetor(){

    float vet[TAM];
    int i;
    
    for(i=0;i<TAM;i++){
        vet[i] = rand()%10;
    } 
    
    for(i=0;i<TAM;i++){ 
        printf("%.1f ",vet[i]);
    }
    
}