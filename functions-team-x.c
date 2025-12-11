#include <stdio.h>

void menu(void)
{
    printf("Menu de opcoes:\n");
    printf("1- Construção de uma matriz 18 por 18, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas)\n");
    printf("2-  Cálculo da raíz quadrada de todos os elementos no vetor\n");
    printf("3 - Devolução do vetor,  com a primeira  metade dos valores ordenada por ordem crescente \n");
    printf("4 - Cálculo  da  soma  da  primeira metade  dos  elementos no  vetor com os da segunda metade (dá um vetor com metado do tamanho)\n");
    printf("5 - Cálculo da mediana dos elementos no vetor\n");
    printf("6 - Devolução dos valores do vetor que não são divisíveis por três\n");
    printf("0 - Sair\n");
}

void escreverarray(int valores[], int tamanho) 
{
    int i;
    printf("Os valores no array sao:\n");
    for (i = 0; i < 18; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");    
}


void lerarray(int valores[], int tamanho) 
{
    int i;

    printf("Introduza 18 números inteiros entre -1 e 18:\n");

    for (i = 0; i < 18; i++) {
        int numero;
        do {
            printf("%dº número: ", i + 1);
            scanf("%d", &numero);

            if (numero < -1 || numero > 18) {
                printf("Valor fora do intervalo [-1, 18]. Tente novamente.\n");
            }
        } while (numero < -1 || numero > 18);

        valores[i] = numero;
    }
    printf("Leitura concluida.\n");
}

void medianaarray(int valores[],int tamanho)
{
    
}
