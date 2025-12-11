#include <stdio.h>
#include <stdlib.h>
#include "functions-team-x.h"
#include "functions-team-x.c"
int main(void)
{
    printf("Trabalho de Laboratorio de Programacao - Grupo 5\n");
    int opcao;
    do
    {
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                // Chamar a funcao correspondente à opcao 1
                break;
            case 2:
                // Chamar a funcao correspondente à opcao 2
                break;
            case 3:
                // Chamar a funcao correspondente à opcao 3
                break;
            case 4:
                // Chamar a funcao correspondente à opcao 4
                break;
            case 5:
                // Chamar a funcao correspondente à opcao 5
                break;
            case 6:
                // Chamar a funcao correspondente à opcao 6
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}