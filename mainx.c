#include "functions-team-x.h"
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
if (argc > 1) {
        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
            mostrarAjuda();
            return 0;
        } else {
            printf("Flag desconhecida: %s\nUse --help ou -h.\n", argv[1]);
            return 1;
        }
    }

    printf("Trabalho de Laboratorio de Programacao - Grupo 5(PL4) \n");
    int valores[18];
    lerarray(valores);

    escreverarray(valores);
    int opcao;
    do
    {
        menu();
        printf("Escolha uma opcao: ");
        if(scanf("%d", &opcao)<0){
            fprintf(stderr, "Entrada inválida");
            return 1;
        }

        switch (opcao)
        {
            case 1:
                int matriz[18][18];
                matriz18x18(valores,matriz);
                mostrarmatriz(matriz);
                break;
            case 2:
                raizquadrada(valores, 18);
                break;
            case 3:
                ordenarPrimeiraMetade(valores, 18);
                mostrarVetor(valores, 18);
                break;
            case 4:
                int resultado[9];
                somaMetades(valores, 18, resultado);
                mostrarVetormetades(resultado, 9);
                break;
            case 5:
                ordenar(valores,18);
                double m = mediana(valores,18);
                printf("mediana %2.f \n",m);
                break;
            case 6:
                divisiveis3(valores, 18);
                break;
            case 7:
                mostrarAjuda();
                break;
            case 8:
                int novo[18];
                lerarray(novo);
                mistura(novo,valores,18);
                break;
            case 9:
                numerosprimos(valores, 18);
                break;
            case 10:
                int v2[18];
                int matriz2[18][18];
                lerarray(v2);
                calcularMatriz(valores,v2,matriz2);
                mostrarMatriz(matriz2);
                int feito10=1;
                break;
            case 11:
                if (!feito10) {
                puts("Primeiro executa a opção 10 para calcular a matriz.");
                break;
                }

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