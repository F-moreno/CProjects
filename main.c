/* 
 * File:   main.c
 * Author: Fernando
 *
 * Be Wellcome!
 * This project was created to help novice programmers.
 * I divided this project into several files in order to manipulate 
 * different types of structures in order to practice and share my 
 * knowledge.
 * 
 * Note: My way of solving problems is not the best, nor the most 
 * effective, it is simply my way of solving the problem.
 * 
 * Created on 3 de janeiro de 2023, 08:19
 */

#include <stdio.h>
#include <stdlib.h>
#include"vetor.c"

#include "library.h"

/*
 * 
 */
int main(int argc, char ** argv) {

    int op=0;
    
    printf("Ola, seja bem vindo ao meu sistema expositor de estruturas de dados.\n");
    do{
        printf("Entre o valor correspondente ao exemplo que desejar observar:\n");
        printf("\n\n");

        printf("1 - Vetores\n");
        
        printf("0 - Sair\n");
        printf("\n");

        printf("Opcao: ");

        scanf("%i",&op);
        
        switch(op){
            case 1:
                vetor();
                break;  
            case 0:
                break;
                        
            default: 
                system("cls");
                printf("%i e uma opcao invalida!\n\n",op);
                
        }
        
        
    }while(op!=1 && op !=0);
    
    
    
    system("PAUSE");
    return (EXIT_SUCCESS);
}

