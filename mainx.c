#include <stdio.h>
#include <stdlib.h>
#include "functions-team-x.h"
#include <math.h>
#include <string.h>

int main(int argc, char *argv[])
{
if (argc > 1) {
        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
            mostrarAjuda();    // tua função de ajuda
            return 0;          // termina após mostrar ajuda
        } else {
            printf("Flag desconhecida: %s\nUse --help ou -h.\n", argv[1]);
            return 1;
        }
    }

    printf("Trabalho de Laboratorio de Programacao - Grupo 5\n");
    // Leitura do array de 18 inteiros entre -1 e 18
    int valores[18];
    lerarray(valores, 18);

    escreverarray(valores, 18);
    // Menu de opções
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
                int matriz[18][18];
                matriz18x18(valores,matriz);
                mostrarmatriz(matriz);
                break;
            case 2:
                // Chamar a funcao correspondente à opcao 2
                raizquadrada(valores, 18);
                break;
            case 3:
                // Chamar a funcao correspondente à opcao 3
                ordenarPrimeiraMetade(valores, 18);
                mostrarVetor(valores, 18);
                break;
            case 4:
                // Chamar a funcao correspondente à opcao 4
                int resultado[9];
                somaMetades(valores, 18, resultado);
                mostrarVetormetades(resultado, 9);
                break;
            case 5:
                // Chamar a funcao correspondente à opcao 5
                ordenar(valores,18);
                double m = mediana(valores,18);
                printf("mediana %2.f \n",m);
                break;
            case 6:
                // Chamar a funcao correspondente à opcao 6
                divisiveis3(valores, 18);
                break;
            case 7:
                mostrarAjuda();
                break;
            case 8:
                int novo[18];
                lerarray(novo,18);
                mistura(novo,valores,18);
                break;
            case 9:
                numerosprimos(valores, 18);
                break;
            case 10:
                int v2[18];
                int matriz2[18][18];
                lerarray(v2, 18);
                calcularMatriz(valores,v2,matriz2);
                mostrarMatriz(matriz2);
                break;
            case 11:
                int MT[18][18];
                transporMatriz(matriz2,MT);
                mostrarMatrizT(MT);
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